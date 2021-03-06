//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSVTimer;
@protocol OS_dispatch_queue;

@interface MSVBlockGuard : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _disarmed;
    BOOL _didTimeout;
    MSVTimer *_timeoutTimer;
    CDUnknownBlockType _interruptionHandler;
}

- (void).cxx_destruct;
- (BOOL)disarm;
- (void)_interruptWithReason:(long long)arg1;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1 interruptionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTimeout:(double)arg1;
- (id)initWithDeallocHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

