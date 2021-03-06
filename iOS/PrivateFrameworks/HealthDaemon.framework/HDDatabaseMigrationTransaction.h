/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseMigrationTransaction : NSObject {
    HDHFDataStore * _HFDataStore;
    _HKBehavior * _behavior;
    <HDDatabaseMigrationTransactionDelegate> * _delegate;
    HDSQLiteDatabase * _protectedDatabase;
    NSArray * _schemaProviders;
    HDSQLiteDatabase * _unprotectedDatabase;
}

@property (nonatomic, readonly) HDHFDataStore *HFDataStore;
@property (nonatomic, readonly) _HKBehavior *behavior;
@property (nonatomic, readonly) HDSQLiteDatabase *defaultDatabase;
@property (nonatomic, readonly, copy) NSString *defaultDatabaseName;
@property (nonatomic, readonly) long long defaultProtectionClass;
@property (nonatomic) <HDDatabaseMigrationTransactionDelegate> *delegate;
@property (nonatomic, readonly) bool isProtectedMigration;
@property (nonatomic, readonly) HDSQLiteDatabase *protectedDatabase;
@property (nonatomic, readonly, copy) NSArray *schemaProviders;
@property (nonatomic, readonly) HDSQLiteDatabase *unprotectedDatabase;

+ (id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg1;

- (void).cxx_destruct;
- (id)HFDataStore;
- (bool)_createDataTablesInDatabase:(id)arg1 entityClasses:(id)arg2 requiredPrefix:(id)arg3 error:(id*)arg4;
- (bool)_createEntitiesForSchemaProvider:(id)arg1 protectionClass:(long long)arg2 migrator:(id)arg3 error:(id*)arg4;
- (bool)_createEntitiesOrAddMigrationStepsForProtectionClass:(long long)arg1 schemaProviders:(id)arg2 migrator:(id)arg3 error:(id*)arg4;
- (long long)_createEntitiesWithEntityClasses:(id)arg1 error:(id*)arg2;
- (void)_enableIncrementalAutovacuumIfNeeded;
- (bool)_insertDatabaseIdentifier:(id)arg1 error:(id*)arg2;
- (long long)_migrateFromUserVersion:(long long)arg1 didRequireMigration:(bool*)arg2 error:(id*)arg3;
- (long long)_migrateOrCreateSchemaWithEntityClasses:(id)arg1 error:(id*)arg2;
- (bool)_migrationRequiredForProtectionClass:(long long)arg1 migrator:(id)arg2 schemaProviders:(id)arg3 error:(id*)arg4;
- (void)_presentRollbackAlertForSchema:(id)arg1 protectionClass:(long long)arg2 foundVersion:(long long)arg3 currentVersion:(long long)arg4;
- (long long)_verifyDatabaseIdentifiersAreValidWithError:(id*)arg1;
- (id)behavior;
- (id)databaseNameForProtectionClass:(long long)arg1;
- (id)defaultDatabase;
- (id)defaultDatabaseName;
- (long long)defaultProtectionClass;
- (id)delegate;
- (id)initWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 HFDataStore:(id)arg3 schemaProviders:(id)arg4 behavior:(id)arg5;
- (bool)isProtectedMigration;
- (long long)migrateOrCreateSchemaWithError:(id*)arg1;
- (id)protectedDatabase;
- (id)schemaProviders;
- (void)setDelegate:(id)arg1;
- (id)unprotectedDatabase;

@end
