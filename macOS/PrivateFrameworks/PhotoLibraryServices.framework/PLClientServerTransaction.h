//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, PLPhotoLibraryPathManager;

@interface PLClientServerTransaction : NSObject
{
    NSString *_transactionToken;
    NSSet *_changeScopes;
    PLPhotoLibraryPathManager *_pathManager;
}

+ (id)descriptionOfAllTransactionFilesForPathManager:(id)arg1;
+ (id)transactionFromUserInfo:(id)arg1;
+ (void)removeTransactionFromUserInfo:(id)arg1;
+ (void)addTransaction:(id)arg1 toUserInfo:(id)arg2;
+ (void)addTransaction:(id)arg1 toXPCDictionary:(id)arg2;
+ (id)_libraryURLFromXPCDictionary:(id)arg1;
+ (id)_changeScopesFromXPCDictionary:(id)arg1;
+ (id)_transactionTokenFromXPCDictionary:(id)arg1;
+ (void)_cleanupAllTransactionsScopesByPath:(id)arg1;
+ (void)handleOutstandingTransactionsForPathManager:(id)arg1 sqliteErrorHandler:(CDUnknownBlockType)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)_outstandingTransactionScopesByPathForPathManager:(id)arg1;
+ (BOOL)_isOutstandingTransactionAtPath:(id)arg1 getScopeValues:(unsigned long long *)arg2;
+ (unsigned long long)_readScopeValuesFromFileDescriptor:(int)arg1;
+ (id)_allTransactionPathsForPathManager:(id)arg1;
+ (void)_checkForAndHandleExcessiveRecoveryAttemptsForPathManager:(id)arg1 sqliteErrorHandler:(CDUnknownBlockType)arg2;
+ (BOOL)_archiveRecoveryHistoryForPathManager:(id)arg1 error:(id *)arg2;
+ (BOOL)_hasExcessiveRecoveryAttemptsForPathManager:(id)arg1;
+ (void)_recordRecoveryAttemptForPathManager:(id)arg1;
+ (id)_recoveryHistoryFilePathForPathManager:(id)arg1;
+ (id)beginServerTransactionWithClientTransactionFromXPCDictionary:(id)arg1 pathManager:(id)arg2;
+ (id)beginServerTransactionWithToken:(id)arg1 changeScopes:(id)arg2 pathManager:(id)arg3;
+ (id)scopesFromScopeValues:(unsigned long long)arg1;
+ (unsigned long long)scopeValuesFromScopes:(id)arg1;
+ (id)_scopeValuesByScope;
+ (id)_filePathForTransactionWithToken:(id)arg1 pathManager:(id)arg2;
+ (id)beginClientTransactionWithChangeScopes:(id)arg1 pathManager:(id)arg2;
+ (id)_serverTransactionForPathManager:(id)arg1 isNew:(char *)arg2;
+ (id)serverTransactionQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property(readonly, nonatomic) NSSet *changeScopes; // @synthesize changeScopes=_changeScopes;
@property(copy, nonatomic) NSString *transactionToken; // @synthesize transactionToken=_transactionToken;
- (void)addChangeScopes:(id)arg1;
- (BOOL)isClientTransaction;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;
- (void)completeTransactionScope:(id)arg1;
- (void)completeTransaction;
- (void)abortTransaction;
- (void)stillAlive;
- (id)initWithPathManager:(id)arg1;

@end

