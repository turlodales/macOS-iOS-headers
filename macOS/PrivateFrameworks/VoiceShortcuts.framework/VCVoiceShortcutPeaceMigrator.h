//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WFDatabase;

@interface VCVoiceShortcutPeaceMigrator : NSObject
{
    WFDatabase *_database;
}

+ (void)migrateFromCloudKitIntoDatabaseIfNecessary:(id)arg1;
+ (void)fetchMigrationFlagWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
- (BOOL)saveRecord:(id)arg1 error:(id *)arg2;
- (BOOL)migrateFromManagedObjectContext:(id)arg1 error:(id *)arg2;
- (id)initWithDatabase:(id)arg1;

@end

