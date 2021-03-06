//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, SCRObserverTargetCache;

__attribute__((visibility("hidden")))
@interface SCRObserverManager : NSObject
{
    NSLock *_observerLock;
    struct __CFDictionary *_applicationLocks;
    struct __CFDictionary *_applicationObserverGroupSets;
    struct __CFDictionary *_applicationAXObservers;
    NSLock *_observerIDToAppLock;
    struct __CFDictionary *_observerIDToApp;
    SCRObserverTargetCache *_targetCache;
    _Atomic unsigned long long _observerID;
    NSMutableDictionary *__lastProcessedLayoutChangeNotificationTimestampForObserverIDs;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *_lastProcessedLayoutChangeNotificationTimestampForObserverIDs; // @synthesize _lastProcessedLayoutChangeNotificationTimestampForObserverIDs=__lastProcessedLayoutChangeNotificationTimestampForObserverIDs;
- (id)description;
- (id)status;
- (BOOL)setThrottleTime:(int)arg1 forApplication:(id)arg2 name:(struct __CFString *)arg3 uiElement:(id)arg4;
- (id)_applicationForObserverID:(unsigned long long)arg1;
- (void)_fireObserverID:(unsigned long long)arg1 forNotification:(id)arg2 withAXElement:(struct __AXUIElement *)arg3 userInfo:(id)arg4;
- (void)_fireDelayedObserver:(id)arg1;
- (void)_fireObserverID:(id)arg1 forApplication:(id)arg2 withAXElement:(struct __AXUIElement *)arg3 userInfo:(id)arg4 isTimerFire:(BOOL)arg5;
- (void)_fireObserverID:(id)arg1 forApplication:(id)arg2 withAXElement:(struct __AXUIElement *)arg3 userInfo:(id)arg4;
- (BOOL)removeObserversForApplication:(id)arg1 withObserverTarget:(id)arg2 name:(struct __CFString *)arg3 uiElement:(id)arg4;
- (BOOL)removeObserversForApplication:(id)arg1 withObserverTarget:(id)arg2;
- (BOOL)removeObserversForObserverTarget:(id)arg1;
- (BOOL)removeAllObserversForApplication:(id)arg1;
- (BOOL)addObserver:(id)arg1 selector:(SEL)arg2 name:(struct __CFString *)arg3 uiElement:(id)arg4 application:(id)arg5 cancelMask:(unsigned int)arg6;
- (BOOL)unregisterSCRApplication:(id)arg1;
- (BOOL)_removeApplication:(id)arg1;
- (BOOL)registerSCRApplication:(id)arg1;
- (id)init;

@end

