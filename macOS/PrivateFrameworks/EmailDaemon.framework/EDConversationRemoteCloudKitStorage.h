//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDConversationRemoteStorage.h"
#import "EFLoggable.h"
#import "NSFetchedResultsControllerDelegate.h"

@class EDCloudMirroringPersistentStore, EDTransactionService, NSFetchedResultsController, NSPersistentHistoryToken, NSString;

@interface EDConversationRemoteCloudKitStorage : NSObject <NSFetchedResultsControllerDelegate, EDConversationRemoteStorage, EFLoggable>
{
    BOOL _initialized;
    EDCloudMirroringPersistentStore *_mirroringPersistentStore;
    id <EDConversationRemoteStorageDelegate> _delegate;
    NSFetchedResultsController *_fetchedResultsController;
    NSPersistentHistoryToken *_historyToken;
    EDTransactionService *_exportTransaction;
    EDTransactionService *_importTransaction;
}

+ (id)cloudKitAPSTopics;
+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) EDTransactionService *importTransaction; // @synthesize importTransaction=_importTransaction;
@property(retain, nonatomic) EDTransactionService *exportTransaction; // @synthesize exportTransaction=_exportTransaction;
@property(retain, nonatomic) NSPersistentHistoryToken *historyToken; // @synthesize historyToken=_historyToken;
@property(nonatomic, getter=isInitialized) BOOL initialized; // @synthesize initialized=_initialized;
@property(readonly, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(nonatomic) __weak id <EDConversationRemoteStorageDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) EDCloudMirroringPersistentStore *mirroringPersistentStore; // @synthesize mirroringPersistentStore=_mirroringPersistentStore;
- (id)_conversationInfoWithObjectId:(id)arg1 managedObjectContext:(id)arg2;
- (id)_transactionHistorySinceToken:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (id)enumerateChangeHistorySinceToken:(id)arg1 managedObjectContext:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_retrieveChangesSinceLastRequestInManagedObjectContext:(id)arg1;
- (void)_handleDidResetSyncDataNotification:(id)arg1;
- (void)_handleWillResetSyncDataNotification:(id)arg1;
- (id)_controlInManagedObjectContext:(id)arg1;
- (id)allConversationInfosInManagedObjectContext:(id)arg1;
- (void)_removeConversationInfoWithObjectId:(id)arg1 save:(BOOL)arg2 managedObjectContext:(id)arg3;
- (void)_removeConversationInfoWithId:(id)arg1 managedObjectContext:(id)arg2;
- (void)_updateConversationInfo:(id)arg1 withAnotherConversationInfo:(id)arg2;
- (void)_addOrUpdateConversationInfo:(id)arg1 managedObjectContext:(id)arg2;
- (id)_conversationInfosWithUUID:(id)arg1 managedObjectContext:(id)arg2;
- (id)_conversationInfoWithUUID:(id)arg1 managedObjectContext:(id)arg2;
- (void)_handleDuplicationsForConversationUUIDs:(id)arg1 managedObjectContext:(id)arg2;
- (void)_recoverHistoryToken;
- (void)persistHistoryToken;
- (id)dictionaryForConversationInfo:(id)arg1;
- (id)entityForConversationDictionary:(id)arg1 key:(id)arg2 managedObjectContext:(id)arg3;
@property(nonatomic, getter=isMigratedFromKVSStorage) BOOL migratedFromKVSStorage; // @dynamic migratedFromKVSStorage;
- (id)storageName;
- (void)_handlePushNotification:(id)arg1;
- (void)_requestFirstSyncWithManagedObjectContext:(id)arg1;
- (void)_requestImportWithManagedObjectContext:(id)arg1;
- (void)_requestExportWithManagedObjectContext:(id)arg1;
- (void)refresh;
- (BOOL)synchronize;
- (id)dictionaryRepresentation;
- (id)dictionaryForKey:(id)arg1;
- (void)removeDictionaryForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)_initialSetup;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

