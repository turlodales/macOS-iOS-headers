//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SUOSUPowerEventObserver : NSObject
{
    struct IONotificationPort *_pmPortRef;
    unsigned int _pmNotifier;
    unsigned int _pmConnect;
    NSObject<OS_dispatch_queue> *_powerEventQueue;
}

- (void).cxx_destruct;
- (void)_handlePowerNotificationWithService:(unsigned int)arg1 messageType:(unsigned int)arg2 messageArgument:(void *)arg3;
- (void)dealloc;
- (id)init;

@end

