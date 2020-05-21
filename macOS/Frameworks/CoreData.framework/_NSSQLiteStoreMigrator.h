//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMappingModel, NSMutableArray, NSMutableDictionary, NSSQLCore, NSSQLModel, NSSQLiteAdapter, NSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface _NSSQLiteStoreMigrator : NSObject
{
    NSSQLCore *_store;
    NSSQLModel *_dstModel;
    NSSQLModel *_srcModel;
    NSSQLiteAdapter *_adapter;
    NSMappingModel *_mappingModel;
    NSSQLiteConnection *_connection;
    NSArray *_tableGenerationSQL;
    NSArray *_existingTableNames;
    NSMutableDictionary *_reindexedEntities;
    NSMutableDictionary *_reindexedPropertiesByEntity;
    NSMutableDictionary *_sourceToDestinationEntityMap;
    NSMutableDictionary *_addedEntityMigrations;
    NSMutableDictionary *_removedEntityMigrations;
    NSMutableDictionary *_transformedEntityMigrations;
    NSMutableDictionary *_copiedEntityMigrations;
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;
    BOOL _hasPKTableChanges;
    NSMutableArray *_pkTableUpdateStatements;
    NSMutableDictionary *_attributeExtensionsToUpdate;
    NSMutableArray *_indexesToCreate;
    NSMutableArray *_indexesToDrop;
    NSMutableArray *_defaultValueStatements;
    NSMutableArray *_derivationsToDrop;
    NSMutableArray *_derivationsToRun;
    NSMutableDictionary *_historyMigrationPropertyDataForEntityCache;
    NSMutableArray *_cloudKitUpdateStatements;
    BOOL _hasCloudKitTables;
}

+ (void)_setAnnotatesMigrationMetadata:(BOOL)arg1;
+ (BOOL)_annotatesMigrationMetadata;
@property(nonatomic) BOOL hasCloudKitTables; // @synthesize hasCloudKitTables=_hasCloudKitTables;
@property(retain, nonatomic) NSMutableDictionary *historyMigrationCache; // @synthesize historyMigrationCache=_historyMigrationPropertyDataForEntityCache;
@property(readonly, nonatomic) NSSQLModel *srcModel; // @synthesize srcModel=_srcModel;
@property(readonly, nonatomic) NSSQLModel *dstModel; // @synthesize dstModel=_dstModel;
@property(readonly, nonatomic) NSSQLiteAdapter *adapter; // @synthesize adapter=_adapter;
- (id)updateStatementsForHistoryChanges;
- (BOOL)deleteStatementsForHistory;
- (BOOL)shiftTombstones;
- (BOOL)clearTombstoneColumnsForRange:(struct _NSRange)arg1;
- (void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2;
- (void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 tableMigrationType:(int)arg3;
- (void)_populateTableMigrationDescriptions;
- (void)_populateEntityMigrationDescriptionsAndEntityMap;
- (BOOL)_sourceTableIsClean:(id)arg1;
- (id)tableMigrationDescriptionForEntity:(id)arg1;
- (id)entityMigrationDescriptionForEntity:(id)arg1;
- (void)_determineAttributeTriggerToMigrateForAttributeNamed:(id)arg1 withSourceEntity:(id)arg2 andDestinationEntity:(id)arg3;
- (void)_determineRTreeExtensionsToMigrateForAttributeNamed:(id)arg1 withSourceEntity:(id)arg2 andDestinationEntity:(id)arg3;
- (void)_determineDerivedAttributesToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2;
- (void)_determineUniquenessConstraintsToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2;
- (void)_determineIndexesToMigrateForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2;
- (CDUnknownBlockType)_indexMigrationBlockForSourceEntity:(id)arg1 andDestinationEntity:(id)arg2;
- (void)_determineReindexedEntitiesAndAffectedProperties;
- (void)_determinePropertyDependenciesOnIDForEntity:(id)arg1;
- (id)createStatementsForUpdatingEntityKeys;
- (id)createEntityMigrationStatements;
- (BOOL)validateMigratedDataFromEntityMapping:(id)arg1 error:(id *)arg2;
- (BOOL)validateMandatoryRelationship:(id)arg1 onEntity:(id)arg2 error:(id *)arg3;
- (BOOL)validateMandatoryAttribute:(id)arg1 onEntity:(id)arg2 error:(id *)arg3;
- (long long)_countUnreferencedPrimaryKeysForEntity:(id)arg1 inForeignKeyColumnName:(id)arg2 fromTable:(id)arg3;
- (long long)_countNullsInColumn:(id)arg1 forEntity:(id)arg2;
- (BOOL)performMigration:(id *)arg1;
- (void)generatePKTableUpdateStatements;
- (id)_originalRootsForAddedEntity:(id)arg1;
- (void)_disconnect;
@property(readonly, nonatomic) NSSQLiteConnection *connection;
- (void)dealloc;
- (id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3;

@end

