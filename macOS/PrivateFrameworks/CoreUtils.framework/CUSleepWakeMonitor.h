//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CUSleepWakeMonitor : NSObject
{
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct __IOPMConnection *_powerCnx;
    unsigned int _sleepWakeFlags;
    int _sleepWakeState;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _sleepWakeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sleepWakeHandler; // @synthesize sleepWakeHandler=_sleepWakeHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_sleepWakeHandler:(unsigned int)arg1 cnx:(const struct __IOPMConnection *)arg2 token:(unsigned int)arg3;
- (void)_ensureStopped;
- (void)_ensureStarted;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

