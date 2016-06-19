//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKBXPCClient.h"

@class ACAccountStore, CKAccountInfo, CKContainerID, CKContainerSetupInfo, CKDatabase, CKOperationCallbackManager, CKOperationFlowControlManager, CKRecordID, NSMapTable, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSXPCConnection;

@interface CKContainer : NSObject <CKBXPCClient>
{
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    BOOL _holdAllOperations;
    BOOL _hasValidConnection;
    BOOL _needsSandboxExtensions;
    BOOL _hasCachedSetupInfo;
    BOOL _captureResponseHTTPHeaders;
    BOOL _wantsSiloedContext;
    int _statusReportToken;
    int _killSwitchToken;
    int _accountChangeToken;
    CKContainerID *_containerID;
    CKRecordID *_containerScopedUserID;
    CKDatabase *_privateCloudDatabase;
    CKDatabase *_publicCloudDatabase;
    CKDatabase *_sharedCloudDatabase;
    NSXPCConnection *_xpcConnection;
    NSOperationQueue *_convenienceOperationQueue;
    NSOperationQueue *_throttlingOperationQueue;
    NSOperationQueue *_backgroundThrottlingOperationQueue;
    CKOperationCallbackManager *_callbackManager;
    CKOperationFlowControlManager *_flowControlManager;
    CKAccountInfo *_accountInfoOverride;
    ACAccountStore *_accountStore;
    NSMutableArray *_sandboxExtensionHandles;
    CKContainerSetupInfo *_cachedSetupInfo;
    NSMapTable *_assetsByUUID;
    NSMutableDictionary *_fakeEntitlements;
    unsigned long long _stateHandle;
}

+ (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)unregisterOutstandingOperationWithID:(id)arg1;
+ (void)registerOutstandingOperationWithID:(id)arg1;
+ (id)sharedOutstandingOperations;
+ (id)containerWithIdentifier:(id)arg1;
+ (id)defaultContainer;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) NSMutableDictionary *fakeEntitlements; // @synthesize fakeEntitlements=_fakeEntitlements;
@property(nonatomic) BOOL wantsSiloedContext; // @synthesize wantsSiloedContext=_wantsSiloedContext;
@property(nonatomic) BOOL captureResponseHTTPHeaders; // @synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders;
@property(retain, nonatomic) NSMapTable *assetsByUUID; // @synthesize assetsByUUID=_assetsByUUID;
@property(nonatomic) BOOL hasCachedSetupInfo; // @synthesize hasCachedSetupInfo=_hasCachedSetupInfo;
@property(retain, nonatomic) CKContainerSetupInfo *cachedSetupInfo; // @synthesize cachedSetupInfo=_cachedSetupInfo;
@property(nonatomic) BOOL needsSandboxExtensions; // @synthesize needsSandboxExtensions=_needsSandboxExtensions;
@property(retain, nonatomic) NSMutableArray *sandboxExtensionHandles; // @synthesize sandboxExtensionHandles=_sandboxExtensionHandles;
@property(nonatomic) int accountChangeToken; // @synthesize accountChangeToken=_accountChangeToken;
@property(nonatomic) int killSwitchToken; // @synthesize killSwitchToken=_killSwitchToken;
@property(nonatomic) int statusReportToken; // @synthesize statusReportToken=_statusReportToken;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(copy, nonatomic) CKAccountInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property(retain, nonatomic) CKOperationFlowControlManager *flowControlManager; // @synthesize flowControlManager=_flowControlManager;
@property(retain, nonatomic) CKOperationCallbackManager *callbackManager; // @synthesize callbackManager=_callbackManager;
@property(retain, nonatomic) NSOperationQueue *backgroundThrottlingOperationQueue; // @synthesize backgroundThrottlingOperationQueue=_backgroundThrottlingOperationQueue;
@property(retain, nonatomic) NSOperationQueue *throttlingOperationQueue; // @synthesize throttlingOperationQueue=_throttlingOperationQueue;
@property(retain, nonatomic) NSOperationQueue *convenienceOperationQueue; // @synthesize convenienceOperationQueue=_convenienceOperationQueue;
@property(nonatomic) BOOL hasValidConnection; // @synthesize hasValidConnection=_hasValidConnection;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) CKDatabase *sharedCloudDatabase; // @synthesize sharedCloudDatabase=_sharedCloudDatabase;
@property(retain, nonatomic) CKDatabase *publicCloudDatabase; // @synthesize publicCloudDatabase=_publicCloudDatabase;
@property(retain, nonatomic) CKDatabase *privateCloudDatabase; // @synthesize privateCloudDatabase=_privateCloudDatabase;
@property(retain, nonatomic) CKRecordID *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(retain, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (id)findTrackedAssetByUUID:(id)arg1;
- (void)trackAssets:(id)arg1;
- (void)dumpDaemonStatusReport;
- (void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)CKStatusReportArray;
- (void)fetchFullNameAndPrimaryEmailOnAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchCurrentDeviceIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchServerEnvironment:(CDUnknownBlockType)arg1;
- (void)dataclassEnabled:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)purgeTmpDirectory;
- (void)updatePushTokens;
- (void)clearContextFromMetadataCache;
- (void)wipeAllCachesAndDie;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (id)sourceApplicationSecondaryIdentifier;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (id)sourceApplicationBundleIdentifier;
- (BOOL)holdAllOperations;
- (void)setHoldAllOperations:(BOOL)arg1;
- (void)setFakeEntitlement:(id)arg1 forKey:(id)arg2;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)tossConfigWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)accountChangedWithID:(id)arg1;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleConvenienceOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)openFileWithOpenInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)connection;
- (void)_consumeSandboxExtensions:(id)arg1;
- (void)_cleanupSandboxExtensionHandles:(id)arg1;
- (void)_prepareForDaemonLaunch;
- (id)databaseWithDatabaseScope:(long long)arg1;
@property(readonly, nonatomic) NSString *containerIdentifier;
- (long long)_untrustedDatabaseEnvironment;
- (id)_checkSelfContainerIdentifier;
- (void)_checkSelfCloudServicesEntitlement;
- (id)_untrustedEntitlementForKey:(id)arg1;
- (id)setupInfo;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
- (void)dealloc;
- (id)initWithContainerID:(id)arg1;
- (id)initWithContainerID:(id)arg1 accountInfoOverride:(id)arg2;
- (id)_initWithContainerIdentifier:(id)arg1;
- (id)_initWithContainerIdentifier:(id)arg1 environment:(long long)arg2;
- (id)_allStatusReports;
- (void)_setupWithContainerID:(id)arg1 accountInfoOverride:(id)arg2;
- (void)discoverUserInfoWithUserRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverUserInfoWithEmailAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverAllContactUserInfosWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)discoverUserIdentityWithUserRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverUserIdentityWithPhoneNumber:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverUserIdentityWithEmailAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_discoverUserIdentityWithLookupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverAllIdentitiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchUserRecordIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNewWebSharingIdentity:(CDUnknownBlockType)arg1;
- (void)acceptShareWithMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)decryptPersonalInfoOnShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchShareParticipantWithUserRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchShareParticipantWithPhoneNumber:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchShareParticipantWithEmailAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchShareParticipantWithLookupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchLongLivedOperationWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllLongLivedOperationIDsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchLongLivedOperationsWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchLongLivedOperationsWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

