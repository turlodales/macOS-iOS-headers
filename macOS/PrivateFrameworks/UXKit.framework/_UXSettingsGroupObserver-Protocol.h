//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _UXSettings, _UXSettingsGroup;

@protocol _UXSettingsGroupObserver <NSObject>
- (void)settingsGroup:(_UXSettingsGroup *)arg1 didMoveSettings:(_UXSettings *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)settingsGroup:(_UXSettingsGroup *)arg1 didRemoveSettings:(_UXSettings *)arg2 atIndex:(unsigned long long)arg3;
- (void)settingsGroup:(_UXSettingsGroup *)arg1 didInsertSettings:(_UXSettings *)arg2 atIndex:(unsigned long long)arg3;
@end

