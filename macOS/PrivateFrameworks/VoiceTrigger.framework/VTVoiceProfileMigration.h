//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VTVoiceProfileMigration : NSObject
{
}

+ (void)updateVoiceProfileVersionFileForLanguageCode:(id)arg1;
+ (BOOL)migrateVoiceProfileToVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2;
+ (BOOL)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2;
+ (unsigned long long)getCurrentVoiceProfileVersionForLanguageCode:(id)arg1;

@end

