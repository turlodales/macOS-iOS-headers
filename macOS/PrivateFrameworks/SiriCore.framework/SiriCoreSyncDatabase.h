//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SiriCoreSQLiteDatabase;

@interface SiriCoreSyncDatabase : NSObject
{
    NSString *_path;
    SiriCoreSQLiteDatabase *_db;
    BOOL _inTransaction;
    BOOL _debugMode;
}

+ (void)removeCurrentSyncDatabase;
+ (id)currentSyncDatabase;
- (void).cxx_destruct;
@property(nonatomic) BOOL debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) BOOL inTransaction; // @synthesize inTransaction=_inTransaction;
- (BOOL)_enumerateKey:(id)arg1 updatedAfter:(id)arg2 fromTable:(id)arg3 usingBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (BOOL)enumerateSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (BOOL)enumerateRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (BOOL)enumerateItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (int)_countKey:(id)arg1 fromTable:(id)arg2 updatedAfter:(id)arg3 error:(id *)arg4;
- (int)countSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3;
- (int)countItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3;
- (int)countRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3;
- (BOOL)_insertSyncRec:(id)arg1 intoTable:(id)arg2 error:(id *)arg3;
- (BOOL)markAsSent:(id)arg1 error:(id *)arg2;
- (BOOL)removeAllItemsOfKey:(id)arg1 error:(id *)arg2;
- (BOOL)remove:(id)arg1 error:(id *)arg2;
- (BOOL)donate:(id)arg1 error:(id *)arg2;
- (BOOL)succeedOrRollbackOnFail:(id)arg1 error:(id *)arg2 whileExecuting:(CDUnknownBlockType)arg3;
- (BOOL)_executeStatement:(id)arg1 error:(id *)arg2;
- (BOOL)rollbackTransactionWithError:(id *)arg1;
- (BOOL)commitTransactionWithError:(id *)arg1;
- (BOOL)beginTransactionWithError:(id *)arg1;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
- (BOOL)prepare;
- (id)initWithPath:(id)arg1;

@end

