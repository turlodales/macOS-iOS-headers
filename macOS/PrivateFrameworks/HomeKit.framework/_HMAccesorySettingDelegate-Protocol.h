//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMAccessorySettingConstraint, _HMAccessorySetting;

@protocol _HMAccesorySettingDelegate <NSObject>
- (void)_settingDidUpdateReflected:(_HMAccessorySetting *)arg1;
- (void)_settingWillUpdateReflected:(_HMAccessorySetting *)arg1;
- (void)_settingDidUpdateValue:(_HMAccessorySetting *)arg1;
- (void)_settingWillUpdateValue:(_HMAccessorySetting *)arg1;

@optional
- (void)_setting:(_HMAccessorySetting *)arg1 didRemoveConstraint:(HMAccessorySettingConstraint *)arg2;
- (void)_setting:(_HMAccessorySetting *)arg1 didAddConstraint:(HMAccessorySettingConstraint *)arg2;
@end

