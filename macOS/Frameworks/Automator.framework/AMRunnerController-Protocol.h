//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMRunnerControl.h"
#import "AMRunnerState.h"
#import "NSObject.h"

@class AMWorkflow;

@protocol AMRunnerController <NSObject, AMRunnerState, AMRunnerControl>
@property(nonatomic) __weak id <AMRunnerControllerDelegate> delegate;
@property(nonatomic) BOOL shouldDisplayProgressInMenuBar;
@property(readonly) AMWorkflow *workflow;
@property(readonly, getter=isLoading) BOOL loading;
- (void)resume;
- (void)runWithInput:(id)arg1 steppingInitially:(BOOL)arg2 completionHandler:(void (^)(id, NSError *))arg3;
@end

