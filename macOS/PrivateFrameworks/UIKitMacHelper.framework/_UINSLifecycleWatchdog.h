//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UINSLifecycleWatchdog : NSObject
{
    CDUnknownBlockType _actionBlock;
    NSString *_name;
    unsigned long long _timeoutUptimeNsec;
    BOOL _canceled;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_watchdogThread;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _threadMutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _wakeupCondition;
}

+ (id)scheduledWatchdogWithTimeout:(double)arg1 name:(id)arg2 action:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)cancel;
- (void)_teardownThreadData;
- (void)_setupThread;
- (void)dealloc;
- (id)_initWithTimeout:(double)arg1 name:(id)arg2 action:(CDUnknownBlockType)arg3;

@end

