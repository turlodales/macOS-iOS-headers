//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSPrefPaneUtils : NSObject
{
}

+ (id)centerTruncateString:(id)arg1 toFit:(long long)arg2;
+ (long long)showAllColumnWidth;
+ (long long)showAllScrollViewWidth;
+ (id)_metricsTable;
+ (id)stringForSymbolicKey:(unsigned long long)arg1 respectFN:(BOOL)arg2;
+ (id)stringForCharacterCode:(id)arg1 modifiers:(unsigned long long)arg2;
+ (id)stringForSymbolicKey:(unsigned long long)arg1;
+ (id)stringForVirtualKey:(unsigned long long)arg1 modifiers:(unsigned long long)arg2;
+ (id)humanStringForCharacterCode:(id)arg1 modifiers:(unsigned long long)arg2;
+ (id)humanStringForVirtualKey:(unsigned long long)arg1 modifiers:(unsigned long long)arg2;
+ (id)humanStringForModifiers:(unsigned long long)arg1;
+ (id)stringForModifiers:(unsigned long long)arg1;
+ (BOOL)_isFunctionCharCodeKey:(id)arg1;
+ (BOOL)isFunctionKey:(unsigned long long)arg1;
+ (id)_stringForVirtualKey:(unsigned long long)arg1 modifiers:(unsigned long long)arg2 useNamesWhenPossible:(BOOL)arg3;
+ (id)_stringForCharacterCode:(id)arg1 useNamesWhenPossible:(BOOL)arg2;
+ (id)_labelForVirtualKey:(unsigned long long)arg1;
+ (id)_labelForVirtualKey:(unsigned long long)arg1 useNamesWhenPossible:(BOOL)arg2;
+ (BOOL)_needFN;
+ (BOOL)isTimeMachineEnabled;
+ (BOOL)hasBattery;
+ (void)enableControls:(BOOL)arg1 inView:(id)arg2 deep:(BOOL)arg3;
+ (id)sharedPrefPaneUtils;
- (void)stopKeyboardMonitor;
- (void)startKeyboardMonitor;
- (void)dealloc;

@end

