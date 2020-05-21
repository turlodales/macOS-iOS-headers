//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalDeviceLockObservable.h"

@class CalDarwinNotificationListener, NSObject<OS_dispatch_queue>, NSString;

@interface CalDeviceLockObserver : NSObject <CalDeviceLockObservable>
{
    BOOL _internalHasBeenUnlockedSinceBoot;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CalDarwinNotificationListener *_notificationListener;
    CDUnknownBlockType _stateChangedCallback;
}

+ (id)stateChangedNotificationName;
+ (BOOL)hasBeenUnlockedSinceBoot;
- (void).cxx_destruct;
@property(nonatomic) BOOL internalHasBeenUnlockedSinceBoot; // @synthesize internalHasBeenUnlockedSinceBoot=_internalHasBeenUnlockedSinceBoot;
@property(copy, nonatomic) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(retain, nonatomic) CalDarwinNotificationListener *notificationListener; // @synthesize notificationListener=_notificationListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) BOOL hasBeenUnlockedSinceBoot;
- (void)_notificationReceived;
- (id)initWithStateChangedCallback:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

