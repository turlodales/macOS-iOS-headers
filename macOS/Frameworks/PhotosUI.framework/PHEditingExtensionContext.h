//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "PUEditingExtensionVendor.h"

@class NSUndoManager, PUEditingExtensionUndoAdapter, PUEditingInitialPayload;

@interface PHEditingExtensionContext : NSExtensionContext <PUEditingExtensionVendor>
{
    long long _fullSizeImageExtensionHandle;
    long long _videoPathExtensionHandle;
    BOOL _attemptUndoManagerAutoSetup;
    PUEditingInitialPayload *__initialPayload;
    PUEditingExtensionUndoAdapter *_undoAdapter;
    NSUndoManager *_undoManagerForBarButtons;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUndoManager *undoManagerForBarButtons; // @synthesize undoManagerForBarButtons=_undoManagerForBarButtons;
@property(nonatomic) BOOL attemptUndoManagerAutoSetup; // @synthesize attemptUndoManagerAutoSetup=_attemptUndoManagerAutoSetup;
@property(retain, nonatomic) PUEditingExtensionUndoAdapter *undoAdapter; // @synthesize undoAdapter=_undoAdapter;
@property(readonly) PUEditingInitialPayload *_initialPayload; // @synthesize _initialPayload=__initialPayload;
- (void)querySDKVersionWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)cancelContentEditingWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)finishContentEditing;
- (void)beginContentEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupUndoProxyWithXPCListenerEndpoint:(id)arg1 attemptUndoManagerAutoSetup:(BOOL)arg2;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_releaseSandboxExtensions;
- (id)_contentEditingController;
- (void)dealloc;

@end

