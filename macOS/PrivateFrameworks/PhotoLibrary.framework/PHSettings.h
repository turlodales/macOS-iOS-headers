//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHSettings : NSObject
{
}

+ (id)settingsFromArchiveDictionary:(id)arg1;
+ (id)_signatureDictionary;
+ (id)_defaultsKey;
+ (id)_userDefaults;
+ (id)createSharedSettings;
+ (id)sharedSettings;
+ (void)setSuiteName:(id)arg1;
+ (id)suiteName;
- (id)archiveDictionary;
- (void)setDefaultValues;
- (id)initWithDefaultValues;
- (id)init;
- (void)save;
- (id)parentSettings;

@end

