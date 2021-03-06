//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/IAsyncNodeOperationDelegateProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TTagOperationDelegate : NSObject <IAsyncNodeOperationDelegateProtocol>
{
    struct mutex fLock;
    struct TConditionVariable fCondition;
    _Bool tornDown;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(getter=isTornDown) _Bool tornDown; // @synthesize tornDown;
- (void)aboutToTearDown;
- (int)asyncNodeOperation:(id)arg1 errorNotification:(const struct TOperationMonitor *)arg2 error:(const struct OperationErrorRecord *)arg3 reply:(struct NodeEventReply *)arg4;
- (int)asyncNodeOperation:(id)arg1 statusNotification:(const struct TOperationMonitor *)arg2;
- (void)waitForOperationToFinish;
- (int)asyncNodeOperation:(id)arg1 completedNotification:(const struct TOperationMonitor *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

