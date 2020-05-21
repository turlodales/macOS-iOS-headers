//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BrightnessSystemClientInternal, NSObject<OS_os_log>;

@interface BrightnessSystemClient : NSObject
{
    BrightnessSystemClientInternal *bsci;
    NSObject<OS_os_log> *_logHandle;
    CDUnknownBlockType _displayNotificationBlock;
    CDUnknownBlockType _keyboardNotificationBlock;
    CDUnknownBlockType _propertyNotificationBlock;
}

- (void)unregisterNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2;
- (void)registerNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2;
- (void)unregisterKeyboardNotificationBlock;
- (void)registerKeyboardNotificationCallbackBlock:(CDUnknownBlockType)arg1;
- (id)copyPropertyForKey:(id)arg1 keyboardID:(unsigned long long)arg2;
- (BOOL)setProperty:(id)arg1 withKey:(id)arg2 keyboardID:(unsigned long long)arg3;
- (BOOL)isAlsSupported;
- (void)unregisterNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)registerNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)unregisterNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)registerNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)unregisterNotificationForKeys:(id)arg1;
- (void)registerNotificationForKeys:(id)arg1;
- (void)unregisterNotificationForKey:(id)arg1;
- (void)registerNotificationForKey:(id)arg1;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1 forProperties:(id)arg2;
- (void)unregisterPropertyNotificationBlock;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)unregisterDisplayNotificationBlock;
- (void)registerDisplayNotificationCallbackBlock:(CDUnknownBlockType)arg1;
- (id)copyPropertyForKey:(id)arg1 andDisplay:(unsigned long long)arg2;
- (id)copyPropertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 withKey:(id)arg2 andDisplay:(unsigned long long)arg3;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

