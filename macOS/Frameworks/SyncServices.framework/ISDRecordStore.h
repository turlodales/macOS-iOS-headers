//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISDDataDatabase, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface ISDRecordStore : NSObject
{
    NSString *_dataDirectory;
    ISDDataDatabase *_database;
    NSMutableDictionary *_clientData;
    NSMutableSet *_filteredTupleReferences;
    unsigned long long _flushCount;
    NSMutableDictionary *_segmentNameForEntity;
    NSMutableDictionary *_truthDatabaseForSegment;
    NSMutableArray *_truthDatabases;
    NSMutableSet *_formattedAwayProperties;
    NSMutableDictionary *_recordIdentifiersToFormattedAwayProperties;
}

- (void)disableSqliteTracing;
- (void)enableSqliteTracing;
- (void)enableSqliteTracing:(id)arg1;
- (void)vacuum;
- (void)setSqliteCacheSize:(long long)arg1;
- (void)dropIndexes;
- (void)recreateIndexes;
- (void)purgeRecordsForEntitiesNamed:(id)arg1 inGenerationsLessThan:(unsigned int)arg2;
- (BOOL)_isRecordStoreAvailableForMode:(int)arg1;
- (BOOL)isRecordStoreAvailableForReading;
- (BOOL)isRecordStoreAvailableForWriting;
- (id)recordIdsForEntityNames:(id)arg1;
- (id)allRecordIdentifiers;
- (unsigned long long)toBeAppliedRecordCountForEntityNames:(id)arg1;
- (id)toBeAppliedRecordIdentifiersForEntityNames:(id)arg1;
- (id)unappliedRecordIdentifiers;
- (void)enumerateRecordIdsForEntityNames:(id)arg1 ignoreDeletedRecords:(BOOL)arg2 asArgumentsToFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (id)_truthSegmentNameForRecordId:(id)arg1;
- (id)_truthSegmentNamesForRecordIds:(id)arg1;
- (void)enumerateRecordHeadersForRecordsWithIds:(id)arg1 asArgumentsToFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (void)enumerateRecordIdsForRecordsWithMatchingAttributes:(id)arg1 asArgumentsToFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (void)enumerateRecordIdsForRecordsWithMatchingAttributes:(id)arg1 asArgumentsToFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 matchAll:(BOOL)arg4;
- (void)setLastChangedGeneration:(unsigned int)arg1 forRecordIds:(id)arg2;
- (void)markRecordsKeepAwayFromServer:(id)arg1 forClient:(id)arg2 inGeneration:(unsigned int)arg3;
- (void)removePropertiesForRecordsWithIdentifiers:(id)arg1;
- (id)recordsWithRowids:(unsigned long long *)arg1 count:(unsigned long long)arg2 inTruthSegment:(id)arg3;
- (id)recordsWithIdentifiers:(id)arg1;
- (id)createDictionaryWithRecordsWithIdentifiers:(id)arg1;
- (id)deletedRecordIdsInTruth:(id)arg1;
- (id)createDictionaryWithRecordsWithIdentifiers:(id)arg1 constructRelationshipMap:(BOOL)arg2;
- (id)createArrayOfEntityNamesEntityNamesWithUndeletedRecords:(id)arg1 lessThanGeneration:(unsigned int)arg2;
- (id)entityNumbersForRecords:(id)arg1;
- (id)deleteCountsForEntityNames:(id)arg1 generation:(unsigned int)arg2;
- (id)addCountsForEntityNames:(id)arg1 generation:(unsigned int)arg2;
- (id)recordCountsForEntityNames:(id)arg1;
- (void)enumerateSourcesOfRelationshipNames:(id)arg1 toRecordIds:(id)arg2 asArgumentsToFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (void)enumerateTargetsOfRelationshipNames:(id)arg1 fromRecordIds:(id)arg2 asArgumentsToFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (void)enumerateSourcesOfRelationshipWithName:(id)arg1 toRecordWithId:(id)arg2 asArgumentsToFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (void)enumerateTargetsOfRelationshipWithName:(id)arg1 fromRecordWithId:(id)arg2 asArgumentsToFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (void)enumerateRecordHeadersForRecordsAlteredSinceLastSyncedGenerations:(id)arg1 asArgumentsToFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (void)removeClientDataForRecordWithId:(id)arg1;
- (void)setClientData:(id)arg1 forRecordWithIdentifier:(id)arg2;
- (id)clientDataForRecordWithId:(id)arg1;
- (void)setToBeApplied:(BOOL)arg1 forRecordsWithEntityNames:(id)arg2;
- (void)setToBeApplied:(BOOL)arg1 forRecordIds:(id)arg2;
- (void)setRecordState:(int)arg1 toBeAppliedFlag:(BOOL)arg2 forRecordIds:(id)arg3 removeProperties:(BOOL)arg4;
- (void)setRecordState:(int)arg1 forRecordIds:(id)arg2;
- (id)recordIdentifiersOfRecordsInStates:(int *)arg1 count:(unsigned long long)arg2 entityNames:(id)arg3;
- (void)replaceRelationshipTupleId:(id)arg1 withRelationshipTupleId:(id)arg2;
- (void)replaceRecordId:(id)arg1 withRecordId:(id)arg2 forEntityName:(id)arg3;
- (void)replaceRecordId:(id)arg1 withRecordId:(id)arg2;
- (void)removeAttributes:(id)arg1 andRelationships:(id)arg2 forEntityName:(id)arg3;
- (void)removeRecordsForEntityNames:(id)arg1;
- (void)removeRecordsForEntityNames:(id)arg1 nullifyReferencesToRemovedRecords:(BOOL)arg2;
- (void)removeRecordsWithIds:(id)arg1 nullifyReferencesToRemovedRecords:(BOOL)arg2;
- (void)_removeRecordsWithIds:(id)arg1 inDatabase:(id)arg2 nullifyReferencesToRemovedRecords:(BOOL)arg3;
- (void)removeAllRecords;
- (void)removeAllAuxillaryRecordData;
- (void)deleteTuple:(id)arg1 inGeneration:(unsigned int)arg2 inSegment:(id)arg3;
- (void)updateRecord:(id)arg1 ignoreDeletedRelationshipTuples:(BOOL)arg2;
- (void)addRecord:(id)arg1 state:(int)arg2 toBeAppliedFlag:(BOOL)arg3 ignoreDeletedRelationshipTuples:(BOOL)arg4;
- (id)recordIdsAddedAfterGeneration:(unsigned int)arg1 forEntityWithName:(id)arg2 fromAnyClientsExceptClientWithId:(id)arg3;
- (void)addRowidsToIndexSet:(id)arg1 forRecordsWithIds:(id)arg2 inTruthSegment:(id)arg3;
- (void)rowids:(id)arg1 addedAfterGeneration:(unsigned int)arg2 forEntityWithName:(id)arg3 fromAnyClientsExceptClientWithId:(id)arg4;
- (id)recordWithIdentifier:(id)arg1;
- (BOOL)containsRecordWithId:(id)arg1;
- (void)rollbackChangesIgnoringClientData;
- (void)rollbackChanges;
- (void)enableFlushIgnoringClientData;
- (void)enableFlush;
- (void)disableFlushAndLockImmediately;
- (void)disableFlush;
- (void)deleteStillBornRecords;
- (void)closeDatabase;
- (void)dealloc;
- (id)_partitionEntityNamesBySegment:(id)arg1;
- (unsigned long long)truthSegmentCount;
- (id)truthSegmentNames;
- (id)truthSegmentForEntityName:(id)arg1;
- (id)databaseForEntityName:(id)arg1;
- (id)databaseForTruthSegment:(id)arg1;
- (id)initWithEntityNameToTruthSegment:(id)arg1;
- (id)initWithEntityNameToTruthSegment:(id)arg1 delegate:(id)arg2;
- (id)initWithEntityNameToTruthSegment:(id)arg1 delegate:(id)arg2 usingDataDirectory:(id)arg3;
- (id)initWithDatabaseInDirectory:(id)arg1;
- (id)initWithDatabaseInDirectory:(id)arg1 delegate:(id)arg2;
- (void)_initClientData;
- (id)dirtyCoderDelegate;
- (void)setDirtyCoderDelegate:(id)arg1;
- (void)removeAllDataReferences:(id)arg1 updateRecords:(BOOL)arg2;
- (void)removeDataReferencesWithRecordId:(id)arg1 forPropertyName:(id)arg2 dataWrappers:(id)arg3 updateRecord:(BOOL)arg4;
- (void)removeDataReferencesWithRecordIds:(id)arg1 dataWrappers:(id)arg2;
- (void)removeDataReferencesWithRecordIds:(id)arg1 inDatabase:(id)arg2 dataWrappers:(id)arg3;
- (void)_removeDataReferencesWithRecordIds:(id)arg1;
- (void)_removeDataReferencesWithRecordIds:(id)arg1 inDatabase:(id)arg2;
- (id)recordIdsWithDataReferencesForEntityNames:(id)arg1;
- (void)setRecordHasDataReferences:(BOOL)arg1 forRecordIds:(id)arg2;
- (id)getRecordDataReferencesForRecordWithIdentifiers:(id)arg1;
- (id)getRecordDataReferencesForRecordId:(id)arg1 forPropertyName:(id)arg2;
- (void)enumerateRecordDataReferencesForRecordIds:(id)arg1 asArgumentsToFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (void)enumerateRecordDataReferencesForRecordIds:(id)arg1 inDatabase:(id)arg2 asArgumentsToFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (BOOL)addDataReferences:(id)arg1 withRecordId:(id)arg2 forPropertyName:(id)arg3 savedReferences:(struct _NSRange *)arg4 error:(id *)arg5;
- (void)addDataReferences:(id)arg1 withRecordId:(id)arg2 forPropertyName:(id)arg3;
- (void)_addDataReference:(id)arg1 withRecordId:(id)arg2 forPropertyName:(id)arg3;
- (id)globalIdEquivalentsForNativeRecordId:(id)arg1;
- (id)nativeGlobalIdForEquivalentId:(id)arg1;
- (void)removeEquivalentGlobalsIdsForNativeGlobalId:(id)arg1;
- (void)addEquivalentGlobalIds:(id)arg1 forNativeGlobalId:(id)arg2;
- (void)updateRecordStatesForPreviouslyFilteredRecordsWithEntityNames:(id)arg1;
- (BOOL)_isTargetId:(id)arg1 filteredForRecordWithId:(id)arg2;
- (void)_createSetOfRecordIdsWithFilteredTargets:(id)arg1;
- (void)addFormattedAwayProperties:(id)arg1 forRecordWithIdentifier:(id)arg2;
- (id)formattedAwayPropertiesForRecordWithIdentifier:(id)arg1;

@end

