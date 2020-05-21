//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCAccountSession, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BRCAccountHandler : NSObject
{
    BRCAccountSession *_session;
    NSString *_currentAccountID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_migrationStatusSetterQueue;
    BOOL _hasSetMigrationComplete;
    NSMutableDictionary *_syncPolicyByFolderType;
    id <BRCAccountHandlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_pushQueue;
}

+ (BOOL)destroyCurrentAccountSynchronously;
+ (id)primaryiCloudAccountID;
+ (id)primaryiCloudAccount;
+ (BOOL)icloudAccountIsInCarry;
+ (id)icloudDriveAccountID;
+ (void)_migrateAccountIfNecessaryForAccountID:(id)arg1;
+ (id)mobileDocsAccountID;
+ (id)dbAccountID;
+ (id)accountIDPath;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *pushQueue; // @synthesize pushQueue=_pushQueue;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <BRCAccountHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setSyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (long long)syncPolicyforSyncedFolderType:(unsigned long long)arg1;
- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)arg1;
- (void)reloadSyncedFolderPolicies;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 error:(id *)arg2;
- (void)markMigrationCompletedForDSID:(id)arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)createCurrentAccountSessionWithID:(id)arg1 error:(id *)arg2;
- (void)destroyCurrentSessionSynchronously;
- (void)_updateAccountToAccountID:(id)arg1;
- (void)_handleAccountDidChange;
- (void)_handleAccountWillChange;
- (BOOL)_createCurrentAccountSessionWithID:(id)arg1 error:(id *)arg2;
- (BOOL)_loadCurrentOnDiskAccountSessionWithError:(id *)arg1;
- (void)_destroyCurrentSessionSynchronously;
- (void)__destroySessionWithIntents:(id)arg1;
- (void)jetsamCloudDocsApps;
- (void)startAndLoadCurrentAccountSynchronously;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (BOOL)setDBAccountID:(id)arg1;
- (void)dealloc;
- (id)init;

@end

