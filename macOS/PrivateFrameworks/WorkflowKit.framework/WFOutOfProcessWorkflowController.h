//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFOutOfProcessWorkflowControllerHost.h"

@class NSData, NSExtension, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID, WFContentCollection, WFWorkflowReference;

@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerHost>
{
    WFContentCollection *_input;
    WFContentCollection *_output;
    id <WFOutOfProcessWorkflowControllerDelegate> _delegate;
    NSString *_automationType;
    NSString *_debugIdentifier;
    NSData *_workflowData;
    long long _environment;
    double _timeoutSeconds;
    WFWorkflowReference *_workflowReference;
    NSExtension *_extension;
    NSUUID *_extensionRequestIdentifier;
    NSObject<OS_dispatch_queue> *_internalSerialQueue;
    NSObject<OS_dispatch_source> *_extensionMaxRunTimeTimer;
    long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *extensionMaxRunTimeTimer; // @synthesize extensionMaxRunTimeTimer=_extensionMaxRunTimeTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalSerialQueue; // @synthesize internalSerialQueue=_internalSerialQueue;
@property(retain, nonatomic) NSUUID *extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) WFWorkflowReference *workflowReference; // @synthesize workflowReference=_workflowReference;
@property(readonly, nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSData *workflowData; // @synthesize workflowData=_workflowData;
@property(readonly, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(copy, nonatomic) NSString *automationType; // @synthesize automationType=_automationType;
@property(nonatomic) __weak id <WFOutOfProcessWorkflowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WFContentCollection *output; // @synthesize output=_output;
@property(retain, nonatomic) WFContentCollection *input; // @synthesize input=_input;
- (void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2;
- (void)workflowDidStart;
- (void)reportFinishToDelegateWithError:(id)arg1 cancelled:(BOOL)arg2;
- (void)restartTimeoutTimer;
- (void)cancelTimeoutTimer;
- (void)stopExtension;
- (void)handleXPCConnectionInterruption;
- (void)handleExtensionMaxRunTimeExceeded;
- (id)extensionInterface;
- (id)extensionContext;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
- (void)stop;
- (BOOL)runWithInput:(id)arg1 error:(out id *)arg2;
- (void)dealloc;
- (id)initWithWorkflowData:(id)arg1 debugIdentifier:(id)arg2 environment:(long long)arg3 workflowReference:(id)arg4;
- (id)initWithWorkflowData:(id)arg1 debugIdentifier:(id)arg2 environment:(long long)arg3;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 environment:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

