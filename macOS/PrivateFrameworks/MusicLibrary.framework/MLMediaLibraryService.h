//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLMediaLibraryServiceClientProtocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSXPCConnection *_serviceConnection;
    id <MLMediaLibraryServiceProtocol> _serviceProxy;
    NSMutableDictionary *_progressBlocksByUUID;
}

+ (void)_setDaemonProcessInfo:(id)arg1;
+ (id)sharedMediaLibraryService;
- (void).cxx_destruct;
- (id)_serviceConnection;
- (void)importOperationWithIdentifier:(id)arg1 didUpdateWithProgress:(float)arg2;
- (void)serviceTerminatedTransactionWithIdentifier:(id)arg1 error:(id)arg2;
- (id)mediaLibraryResourcesServiceListenerEndpointWithError:(id *)arg1;
- (void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getLanguageResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)unlockDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)lockDatabaseForReason:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withProgressBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setOptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performDiagnosticWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)validateDatabaseAtPath:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

