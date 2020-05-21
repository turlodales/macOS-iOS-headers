//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, SUAppStoreUpdateController, SUOSUClient, SUOSUMajorProduct, SUOSUNotificationManagerController, SUOSUUpdateController, SUPowerAssertionManager;

@interface SUOSUShimController : NSObject
{
    BOOL _currentlyFetchingMajorOSUpdateForURLScheme;
    NSDate *_latestSuccessfulScanDate;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSObject<OS_dispatch_queue> *_installNotifyQueue;
    NSObject<OS_dispatch_source> *_inProgressUpdateTimerSource;
    id <SUOSUClientDelegate> _delegate;
    SUOSUClient *_client;
    SUAppStoreUpdateController *_appStoreUpdateController;
    SUOSUUpdateController *_updateController;
    SUOSUNotificationManagerController *_notificationManager;
    SUPowerAssertionManager *_powerAssertionManager;
    id _availableUpdatesObserverToken;
    id _queuedForLaterUpdatesObserverToken;
    id _catalogURLObserverToken;
    id _hasIgnoredUpdatesObserverToken;
    NSArray *_availableUpdates;
    NSArray *_availableMajorUpdates;
    SUOSUMajorProduct *_latestQualifyingMajorProduct;
    NSDate *_latestCatalogModifiedDate;
}

- (void).cxx_destruct;
@property(retain) NSDate *latestCatalogModifiedDate; // @synthesize latestCatalogModifiedDate=_latestCatalogModifiedDate;
@property(retain) SUOSUMajorProduct *latestQualifyingMajorProduct; // @synthesize latestQualifyingMajorProduct=_latestQualifyingMajorProduct;
@property(retain) NSArray *availableMajorUpdates; // @synthesize availableMajorUpdates=_availableMajorUpdates;
@property(retain) NSArray *availableUpdates; // @synthesize availableUpdates=_availableUpdates;
@property(retain) id hasIgnoredUpdatesObserverToken; // @synthesize hasIgnoredUpdatesObserverToken=_hasIgnoredUpdatesObserverToken;
@property(retain) id catalogURLObserverToken; // @synthesize catalogURLObserverToken=_catalogURLObserverToken;
@property(retain) id queuedForLaterUpdatesObserverToken; // @synthesize queuedForLaterUpdatesObserverToken=_queuedForLaterUpdatesObserverToken;
@property(retain) id availableUpdatesObserverToken; // @synthesize availableUpdatesObserverToken=_availableUpdatesObserverToken;
@property(retain) SUPowerAssertionManager *powerAssertionManager; // @synthesize powerAssertionManager=_powerAssertionManager;
@property(retain, nonatomic) SUOSUNotificationManagerController *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(retain, nonatomic) SUOSUUpdateController *updateController; // @synthesize updateController=_updateController;
@property(retain) SUAppStoreUpdateController *appStoreUpdateController; // @synthesize appStoreUpdateController=_appStoreUpdateController;
@property __weak SUOSUClient *client; // @synthesize client=_client;
@property(retain) id <SUOSUClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_dispatch_source> *inProgressUpdateTimerSource; // @synthesize inProgressUpdateTimerSource=_inProgressUpdateTimerSource;
@property(retain) NSObject<OS_dispatch_queue> *installNotifyQueue; // @synthesize installNotifyQueue=_installNotifyQueue;
@property(retain) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property BOOL currentlyFetchingMajorOSUpdateForURLScheme; // @synthesize currentlyFetchingMajorOSUpdateForURLScheme=_currentlyFetchingMajorOSUpdateForURLScheme;
@property(retain) NSDate *latestSuccessfulScanDate; // @synthesize latestSuccessfulScanDate=_latestSuccessfulScanDate;
@property(readonly) BOOL isAutomaticallyInstallSecurityAndConfigUpdatesPreferenceManaged;
@property(readonly) BOOL isAutomaticallyInstallAppUpdatesPreferenceManaged;
@property(readonly) BOOL isAutomaticallyInstallMacOSUpdatesPreferenceManaged;
@property(readonly) BOOL isAutomaticallyDownloadUpdatesPreferenceManaged;
@property(readonly) BOOL isAutomaticallyCheckForUpdatesPreferenceManaged;
@property BOOL isAutomaticallyInstallSecurityAndConfigUpdatesPreferenceEnabled;
@property BOOL isAutomaticallyInstallAppUpdatesPreferenceEnabled;
@property BOOL isAutomaticallyInstallMacOSUpdatesPreferenceEnabled;
@property BOOL isAutomaticallyDownloadUpdatesPreferenceEnabled;
@property BOOL isAutomaticallyCheckForUpdatesPreferenceEnabled;
- (id)_majorOSInstallerBundleIdentifierForAppStoreUpdate:(id)arg1;
- (unsigned long long)_requestAndWaitForResponseToUserAction:(unsigned long long)arg1 details:(id)arg2;
- (unsigned long long)_postInstallActionForUpdates:(id)arg1;
- (unsigned long long)postInstallActionForUpdates:(id)arg1;
- (id)_availableCriticalUpdates;
- (id)_availableUpdatesForProductKeys:(id)arg1;
- (id)_availableUpdateForProductKey:(id)arg1;
- (id)_configDataProductsForAppStoreUpdates:(id)arg1;
- (id)_appStoreUpdatesForProducts:(id)arg1;
- (id)_userVisibleProductsForAppStoreUpdates:(id)arg1;
- (id)_productKeysForAppStoreUpdates:(id)arg1;
- (id)_productKeysForProducts:(id)arg1;
- (BOOL)_shouldRescanForLatestScanDate:(id)arg1 latestCatalogModifiedDate:(id)arg2;
- (void)_updateProgress:(id)arg1 forProducts:(id)arg2 percentComplete:(float)arg3 status:(id)arg4;
- (id)_createProgress;
- (void)_promptAndQueueDownloadedUpdatesRequiringPostInstallAction:(id)arg1 nowIsLater:(BOOL)arg2;
- (void)_startDownloadingAndArmRestartCountdownForUpdates:(id)arg1 nowIsLater:(BOOL)arg2 shouldConfirm:(BOOL)arg3;
- (void)_installConfigDataUpdateWithProductKeys:(id)arg1;
- (void)_startInstallingUpdatesRequiringNoPostInstallAction:(id)arg1 inForeground:(BOOL)arg2 nowIsLater:(BOOL)arg3 mdmInitiated:(BOOL)arg4;
- (BOOL)_authorizeForInstall;
- (void)_startInstallingUpdates:(id)arg1 isDoItLaterUpdate:(BOOL)arg2 inForeground:(BOOL)arg3 mdmInitiated:(BOOL)arg4;
- (BOOL)__requestFreeSpace:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)_performDiskSpaceCheckForUpdates:(id)arg1;
- (BOOL)_showFirmwareWarningsForUpdates:(id)arg1;
- (BOOL)_showLicenseAgreementsForUpdates:(id)arg1;
- (BOOL)_quitMustCloseApplicationsForUpdates:(id)arg1 isDoItLater:(BOOL)arg2;
- (BOOL)_checkBatteryPowerForUpdates:(id)arg1;
- (BOOL)_prepareForInstallingUpdates:(id)arg1 isDoItLater:(BOOL)arg2;
- (void)_startShowingProgressForProductKeys:(id)arg1;
- (id)_productKeysInActiveForegroundTransactions;
- (void)startInstallingMajorOSVersion:(id)arg1 orWithMajorOSBundleIdentifier:(id)arg2 majorOSVariant:(id)arg3 shouldOpenIA:(BOOL)arg4 inForeground:(BOOL)arg5 isMDMInitiated:(BOOL)arg6 fromAvailableMajorUpdates:(id)arg7;
- (void)startInstallingMajorOSVersion:(id)arg1 orWithMajorOSBundleIdentifier:(id)arg2 majorOSVariant:(id)arg3 shouldOpenIA:(BOOL)arg4 inForeground:(BOOL)arg5 isMDMInitiated:(BOOL)arg6;
- (BOOL)resetToProductionCatalog;
- (BOOL)unenrollFromSeedProgram;
- (void)_getCatalogConfigurationInformationForCompletedScan:(BOOL)arg1 withScanError:(BOOL)arg2;
- (BOOL)_lastKnownCatalogHostNameIsDefault;
- (BOOL)authorizeForModifyingPreferences;
- (void)_handleCatalogURLChanged;
- (void)_handleQueuedUpdatesForLaterChanged;
- (void)_handleNotifyingUpdatesChanged;
- (id)_latestAvailableMajorOSProduct;
- (void)_handleAvailableUpdatesChangedWithNotificationNamed:(id)arg1;
- (void)_registerForStateChangeNotifications;
- (void)_startUpAndDetermineCurrentState;
- (void)removeAllNotifications;
- (BOOL)availableUpdatesDownloaded;
- (id)queuedForLaterUpdates;
- (void)queueUpdatesForLater:(id)arg1;
- (void)cancelCurrentUpdates;
- (BOOL)cancelUpdatesQueuedForInstallLater;
- (void)startInstallingUpdates:(id)arg1 isDoItLater:(BOOL)arg2 inForeground:(BOOL)arg3 mdmInitiated:(BOOL)arg4;
- (void)startScanningForUpdatesEvenIfUnchanged:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly) BOOL deferredUpdatesExist;
- (void)_cancelPowerAssertion;
- (void)_setMaintenancePowerAssertion;
- (void)_setIdleSleepPowerAssertion;
- (id)initWithClient:(id)arg1 delegate:(id)arg2;

@end

