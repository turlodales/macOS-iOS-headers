//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNScheduler.h"

@class CNQueue, NSConditionLock, NSString;

@interface CNSuspendableSchedulerDecorator : NSObject <CNScheduler>
{
    id <CNScheduler> _scheduler;
    CNQueue *_queue;
    NSConditionLock *_lock;
}

+ (id)resumedSchedulerWithScheduler:(id)arg1;
+ (id)suspendedSchedulerWithScheduler:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSConditionLock *lock; // @synthesize lock=_lock;
@property(readonly) CNQueue *queue; // @synthesize queue=_queue;
@property(readonly) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)_nts_enqueueCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)_performFirstQueuedTask;
- (void)suspend;
- (void)resume;
- (id)initWithScheduler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

