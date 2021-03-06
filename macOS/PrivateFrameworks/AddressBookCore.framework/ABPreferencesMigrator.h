//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABUserDefaults;

@interface ABPreferencesMigrator : NSObject
{
    ABUserDefaults *_defaults;
}

+ (void)migrateDefaults:(id)arg1;
- (void)updateBirthdayVisiblePreferenceFromVersion:(long long)arg1;
- (BOOL)birthdayVisiblePreferenceExists;
- (void)updatePrivateMeCardPreferencesFromVersion:(long long)arg1;
- (BOOL)hasPrivateMeCardFields;
- (void)enablePrivateMeCardFields;
- (BOOL)privateMeCardFieldsEnabledPreferenceExists;
- (void)updatePreferencesVersionFromVersion:(long long)arg1;
- (long long)preferencesVersion;
- (void)migrateDefaults;
- (void)dealloc;
- (id)initWithDefaults:(id)arg1;

@end

