//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol SUOSUServiceClientProtocol
- (void)postAndProceedWithAutoUpdateNotification:(void (^)(BOOL))arg1;
- (void)mdmMajorOSUpdateStatusWithCompletion:(void (^)(NSDictionary *))arg1;
- (void)startInstallingMDMMajorOSUpdateWithBundleId:(NSString *)arg1 orVersion:(NSString *)arg2;
- (void)postDoItLaterOtherUsersLoggedInNotification;
- (void)postDoItLaterUpdatesFailedNotificationRestartRequired:(BOOL)arg1 offerLater:(BOOL)arg2;
- (void)postMajorOSUpdateMDMRequestedNotification;
- (void)queueAutoUpdatesForLater;
- (void)startInstallingDoItLaterUpdates;
@end

