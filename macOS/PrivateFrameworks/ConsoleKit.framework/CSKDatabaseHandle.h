//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSKArchiveTable, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSortDescriptor, NSString;

@interface CSKDatabaseHandle : NSObject
{
    struct sqlite3 *_databaseHandle;
    struct sqlite3_stmt *_rowcount_statement;
    unsigned long long _rowCount;
    NSDictionary *_rowValuesDictionary;
    unsigned long long _currentIndex;
    BOOL _isSorting;
    struct sqlite3_stmt *_default_message_statement_cache;
    struct sqlite3_stmt *_default_activity_statement_cache;
    struct sqlite3_stmt *_sort_statement_cache;
    struct sqlite3_stmt *_fetch_statement;
    struct sqlite3_stmt *_childrenActivity_statment;
    struct sqlite3_stmt *_activity_statment;
    struct sqlite3_stmt *_rootActivitiesCount_statement;
    struct sqlite3_stmt *_rootActivities_statement;
    struct sqlite3_stmt *_countOfChildren_statement;
    NSMutableArray *_results;
    CSKArchiveTable *_activityTable;
    CSKArchiveTable *_childrenActivityTable;
    CSKArchiveTable *_messagesTable;
    CSKArchiveTable *_uniqueProcessTable;
    CSKArchiveTable *_uniqueLibraryTable;
    CSKArchiveTable *_uniqueTitleTable;
    CSKArchiveTable *_uniqueCategoryTable;
    NSObject<OS_dispatch_queue> *_insertStatementQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_statementCache;
    BOOL _isReadOnly;
    BOOL _readOnly;
    BOOL _isSearching;
    NSString *_archivePath;
    NSSortDescriptor *_sortdescriptor;
    NSString *_dbPath;
    NSSortDescriptor *_defaultSortdescriptor;
}

+ (id)questionMarkListForCollection:(id)arg1;
+ (BOOL)addSkipBackupAttributeToItemAtURL:(id)arg1;
+ (id)dbPathForArchive:(id)arg1 readOnly:(BOOL)arg2 inMemory:(BOOL)arg3;
+ (id)queryForColumnIDs:(id)arg1 keyWord:(id)arg2 tableID:(unsigned long long)arg3 whereClause:(id)arg4 comparisonValue:(id)arg5;
+ (id)filterQueryForType:(long long)arg1 keyWord:(id)arg2 comparisonType:(long long)arg3 tableID:(unsigned long long)arg4;
+ (id)filterQueryForType:(long long)arg1 values:(id)arg2 tableID:(unsigned long long)arg3;
+ (id)createQueryWithFilter:(id)arg1 tableID:(unsigned long long)arg2;
+ (id)makeQueryWithFilters:(id)arg1 sortDesriptor:(id)arg2 tableID:(unsigned long long)arg3;
+ (id)sortIdentifierToDBColumnIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSortDescriptor *defaultSortdescriptor; // @synthesize defaultSortdescriptor=_defaultSortdescriptor;
@property(retain, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
@property(retain, nonatomic) NSSortDescriptor *sortdescriptor; // @synthesize sortdescriptor=_sortdescriptor;
@property(retain, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property(readonly, nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) BOOL readOnly; // @synthesize readOnly=_readOnly;
- (BOOL)_bindArguments:(id)arg1 inStatement:(struct sqlite3_stmt *)arg2;
- (BOOL)_bindArgumentsDictionary:(id)arg1 inStatement:(struct sqlite3_stmt *)arg2;
- (id)_stringRowsForQuery:(id)arg1;
- (void)_reportErrorInFunction:(const char *)arg1;
- (struct sqlite3 *)_databaseHandle;
- (id)stringColumnDataForQuery:(id)arg1 withArguments:(id)arg2;
- (id)arrayForQuery:(id)arg1 arguments:(id)arg2;
- (BOOL)runStatement:(id)arg1 arguments:(id)arg2;
- (BOOL)execStatement:(id)arg1;
- (BOOL)runInsertStatement:(struct sqlite3_stmt *)arg1 bindDictionary:(id)arg2;
- (struct sqlite3_stmt *)prepareInsertStatement:(id)arg1;
- (struct sqlite3_stmt *)prepareInsertChildrenActivityStatement;
- (struct sqlite3_stmt *)prepareInsertActivityStatement;
- (struct sqlite3_stmt *)prepareInsertMessagesStatement;
- (struct sqlite3_stmt *)prepareInsertUniqueCategoryStatement;
- (struct sqlite3_stmt *)prepareInsertUniqueTitleStatement;
- (struct sqlite3_stmt *)prepareInsertUniqueProcessStatement;
- (struct sqlite3_stmt *)prepareInsertUniqueLibraryStatement;
- (BOOL)hasHash:(unsigned long long)arg1 tableID:(unsigned long long)arg2;
- (BOOL)categoryExists:(unsigned long long)arg1;
- (BOOL)titleExists:(unsigned long long)arg1;
- (BOOL)libraryExists:(unsigned long long)arg1;
- (BOOL)processExists:(unsigned long long)arg1;
- (id)colDictionaryForStatement:(struct sqlite3_stmt *)arg1;
- (id)arrayForStatement:(struct sqlite3_stmt *)arg1;
- (id)rowAtIndex:(unsigned long long)arg1 tableId:(unsigned long long)arg2;
- (id)rowAtIndex:(unsigned long long)arg1;
- (id)rowsAtIndexes:(id)arg1;
- (void)fetchResultsForQuery:(id)arg1 callbackQueue:(id)arg2 tableID:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)fetchResultsForQuery:(id)arg1 callbackQueue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)sortResultsForTableID:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)childrenWithParentActivityID:(unsigned long long)arg1;
- (id)fetchActivityWithIdentifier:(unsigned long long)arg1;
- (unsigned long long)countOfChildrenWithParentActivityId:(unsigned long long)arg1;
- (unsigned long long)countForRootActivities;
- (unsigned long long)removeRowsInTimeRange:(id)arg1 tableID:(unsigned long long)arg2;
- (unsigned long long)rowCount;
- (unsigned long long)rowCountForTableID:(unsigned long long)arg1;
- (BOOL)close;
- (BOOL)finalizeStatement:(struct sqlite3_stmt *)arg1;
- (void)interrupt;
- (id)version;
- (id)columnInfoForTable:(unsigned long long)arg1;
- (id)tableNames;
- (void)dealloc;
- (void)createTables;
- (BOOL)createDBHandle:(BOOL)arg1 inMemory:(BOOL)arg2 backgroundCopy:(BOOL)arg3;
- (struct sqlite3_stmt *)_prepareRootActivitiesStatement;
- (struct sqlite3_stmt *)_prepareMessageStatement;
- (id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 inMemory:(BOOL)arg3 backgroundCopy:(BOOL)arg4;

@end

