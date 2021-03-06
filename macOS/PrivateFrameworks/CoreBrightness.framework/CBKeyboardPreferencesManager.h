//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log;

@interface CBKeyboardPreferencesManager : NSObject
{
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_preferences;
}

+ (id)copyAllPreferences;
+ (id)copyPreferenceForKey:(id)arg1 keyboardID:(unsigned long long)arg2;
+ (id)copyPreferenceForKey:(id)arg1;
+ (_Bool)getBoolPreference:(_Bool *)arg1 forKey:(id)arg2;
+ (_Bool)getFloatPreference:(float *)arg1 forKey:(id)arg2;
+ (_Bool)getIntPreference:(int *)arg1 forKey:(id)arg2;
+ (_Bool)setPreference:(id)arg1 forKey:(id)arg2;
+ (_Bool)setBoolPreference:(_Bool)arg1 forKey:(id)arg2;
+ (_Bool)setFloatPreference:(float)arg1 forKey:(id)arg2;
+ (_Bool)setIntPreference:(int)arg1 forKey:(id)arg2;
+ (id)sharedInstance;
- (id)copyAllPrefereneces;
- (id)copyPreferenceForKey:(id)arg1;
- (_Bool)setPreference:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

