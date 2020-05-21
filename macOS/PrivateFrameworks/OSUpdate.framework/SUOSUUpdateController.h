//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SUOSUServiceClientProtocol.h"

@class NSLock, NSXPCConnection, SUOSUScheduler, SUPowerAssertionManager;

@interface SUOSUUpdateController : NSObject <SUOSUServiceClientProtocol>
{
    BOOL _authorizedForSoftwareInstall;
    id <SUOSULaterDelegate> _schedulerDelegate;
    CDUnknownBlockType _customInterruptionHandler;
    NSXPCConnection *_legacyServiceConnection;
    NSLock *_legacyServiceConnectionLock;
    NSXPCConnection *_serviceConnection;
    NSLock *_serviceConnectionLock;
    SUOSUScheduler *_scheduler;
    SUPowerAssertionManager *_powerAssertionManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) SUPowerAssertionManager *powerAssertionManager; // @synthesize powerAssertionManager=_powerAssertionManager;
@property(retain) SUOSUScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) NSLock *serviceConnectionLock; // @synthesize serviceConnectionLock=_serviceConnectionLock;
@property BOOL authorizedForSoftwareInstall; // @synthesize authorizedForSoftwareInstall=_authorizedForSoftwareInstall;
@property(retain) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
@property(retain, nonatomic) NSLock *legacyServiceConnectionLock; // @synthesize legacyServiceConnectionLock=_legacyServiceConnectionLock;
@property(retain) NSXPCConnection *legacyServiceConnection; // @synthesize legacyServiceConnection=_legacyServiceConnection;
@property(copy) CDUnknownBlockType customInterruptionHandler; // @synthesize customInterruptionHandler=_customInterruptionHandler;
@property(retain, nonatomic) id <SUOSULaterDelegate> schedulerDelegate; // @synthesize schedulerDelegate=_schedulerDelegate;
- (void)postAndProceedWithAutoUpdateNotification:(CDUnknownBlockType)arg1;
- (void)mdmMajorOSUpdateStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)startInstallingMDMMajorOSUpdateWithBundleId:(id)arg1 orVersion:(id)arg2;
- (void)queueAutoUpdatesForLater;
- (void)startInstallingDoItLaterUpdates;
- (void)postDoItLaterOtherUsersLoggedInNotification;
- (void)postDoItLaterUpdatesFailedNotificationRestartRequired:(BOOL)arg1 offerLater:(BOOL)arg2;
- (void)postMajorOSUpdateMDMRequestedNotification;
- (void)getMajorOSUpdateStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestMDMMajorOSDownloadAndUpdateWithBundleID:(id)arg1 orVersion:(id)arg2;
- (void)_stashLoginCredentialsForUpdates:(id)arg1;
- (BOOL)_shouldStashLoginCredentialsForUpdates:(id)arg1;
- (BOOL)isSchedulerArmedForLater;
- (void)getLaterStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)disarmLaterObserver;
- (void)armObserverWithMode:(unsigned long long)arg1;
- (BOOL)queueUpdatesForPostLogoutInstall:(id)arg1 nowIsLater:(BOOL)arg2 restartingNow:(BOOL)arg3;
- (void)postMDMRequestedNotificationToAllLoggedInUsers;
- (void)preparationRequiredForProductKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)adminDeferredAvailableUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)productKeysToAutomaticallyInstallLaterWithReply:(CDUnknownBlockType)arg1;
- (void)combinedStatusForUpdatesWithProductKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)takeInstallNotificationsOfType:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (BOOL)_authorizeForSoftwareInstall;
- (void)_cancelPowerAssertion;
- (void)_setIdleSleepPowerAssertion;
- (id)_legacyServiceConnection;
- (id)legacyProxy;
- (id)_serviceConnection;
- (id)proxy;
- (id)synchronousProxy;
- (void)dealloc;
- (id)init;

@end

