//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFWorkflowControllerDelegate-Protocol.h>

@class NSString, WFWorkflowController;

@interface WFRunWorkflowAction : WFAction <WFWorkflowControllerDelegate>
{
    WFWorkflowController *_workflowController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WFWorkflowController *workflowController; // @synthesize workflowController=_workflowController;
- (id)targetDataInfo;
- (id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;
- (BOOL)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(BOOL)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)finishRunningWithError:(id)arg1;
- (void)cancel;
- (void)stop;
- (void)runWorkflowWithInput:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)getHandoffWorkflowControllerState:(CDUnknownBlockType)arg1;
- (void)setHandoffWorkflowControllerState:(id)arg1;
- (void)wasAddedToWorkflowByUser:(id)arg1;
- (id)getWorkflowWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

