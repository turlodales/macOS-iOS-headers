//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIUserModelDataStoring.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface TIUserModelDataStore : NSObject <TIUserModelDataStoring>
{
    struct sqlite3 *_user_model_db;
    NSObject<OS_dispatch_queue> *_database_queue;
}

+ (id)initializeDataStoreAtPath:(id)arg1;
+ (id)singletonInstance;
+ (id)sharedUserModelDataStore;
+ (void)setSharedTIUserModelDataStore:(id)arg1;
- (void).cxx_destruct;
- (BOOL)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (BOOL)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (id)getAllKnownInputModes;
- (id)getInputModesForKey:(id)arg1;
- (id)getDurableValueForKey:(id)arg1;
- (id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (BOOL)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;
- (BOOL)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;
- (BOOL)attemptSchemaMigration;
- (int)getDatabaseVersion;
- (BOOL)setDatabaseVersion:(int)arg1;
- (BOOL)applySchema:(id)arg1;
- (id)getCreationSchema;
- (id)getV1MigrationSchema;
- (BOOL)closeDatabase;
- (BOOL)createOrOpenDatabaseAtPath:(id)arg1;
- (void)dealloc;
- (BOOL)purgeDurableDataForKeyPrefix:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

