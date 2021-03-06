//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCROutputThreadedObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCROutputRequestRunner : SCROutputThreadedObject
{
    NSString *_name;
    int _currentStepIndex;
    int _currentActionIndex;
    NSArray *_currentSequentialSteps;
    NSString *_currentQueueIdentifier;
    NSString *_currentOutputIdentifier;
    unsigned long long _currentRequestID;
}

- (void).cxx_destruct;
- (id)description;
- (void)_stopAndSendStopMessageToCurrentComponentForNewQueueIdentifier:(id)arg1;
- (void)_executeAllNonBlockingActionsForSequentialSteps:(id)arg1;
- (void)_setCurrentOutputIdentifier:(id)arg1;
- (void)_setCurrentQueueIdentifier:(id)arg1;
- (void)handleEvent:(id)arg1;
- (id)currentOutputIdentifier;
- (id)currentQueueIdentifier;
- (unsigned long long)currentRequestID;
- (id)name;
- (BOOL)isActive;
- (void)stopWithNewQueueIdentifier:(id)arg1;
- (void)stop;
- (void)processObject:(id)arg1 forNotification:(id)arg2 fromAction:(id)arg3;
- (void)runSequentialSteps:(id)arg1 requestID:(unsigned long long)arg2 queueIdentifier:(id)arg3 outputIdentifier:(id)arg4 stopExclusions:(id)arg5;
- (void)_executeSequentialSteps;
- (void)_resolveTargetComponentsInSequentialSteps:(id)arg1;
- (id)initWithName:(id)arg1;

@end

