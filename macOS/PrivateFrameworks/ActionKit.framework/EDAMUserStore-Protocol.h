//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDAMAccountLimits, EDAMAuthenticationParameters, EDAMAuthenticationResult, EDAMBootstrapInfo, EDAMOpenIdCredential, EDAMPremiumInfo, EDAMPublicUserInfo, EDAMPushNotificationCredentials, EDAMRegisterForSyncPushNotificationsResult, EDAMSubscriptionInfo, EDAMUser, EDAMUserUrls, NSArray, NSDictionary, NSString;

@protocol EDAMUserStore <NSObject>
- (NSDictionary *)getConnectedIdentities:(NSString *)arg1 identityIds:(NSArray *)arg2;
- (EDAMAccountLimits *)getAccountLimits:(int)arg1;
- (NSString *)createSessionAuthenticationToken:(NSString *)arg1;
- (void)unregisterForSyncPushNotifications:(NSString *)arg1;
- (EDAMRegisterForSyncPushNotificationsResult *)registerForSyncPushNotifications:(NSString *)arg1 credentials:(EDAMPushNotificationCredentials *)arg2;
- (NSArray *)listBusinessInvitations:(NSString *)arg1 includeRequestedInvitations:(BOOL)arg2;
- (NSArray *)listBusinessUsers:(NSString *)arg1;
- (void)updateBusinessUserIdentifier:(NSString *)arg1 oldEmailAddress:(NSString *)arg2 newEmailAddress:(NSString *)arg3;
- (void)removeFromBusiness:(NSString *)arg1 emailAddress:(NSString *)arg2;
- (void)inviteToBusiness:(NSString *)arg1 emailAddress:(NSString *)arg2;
- (EDAMUserUrls *)getUserUrls:(NSString *)arg1;
- (NSString *)getNoteStoreUrl:(NSString *)arg1;
- (EDAMSubscriptionInfo *)getSubscriptionInfo:(NSString *)arg1;
- (EDAMPremiumInfo *)getPremiumInfo:(NSString *)arg1;
- (EDAMPublicUserInfo *)getPublicUserInfo:(NSString *)arg1;
- (EDAMUser *)getUser:(NSString *)arg1;
- (EDAMAuthenticationResult *)refreshAuthentication:(NSString *)arg1;
- (EDAMAuthenticationResult *)authenticateToBusiness:(NSString *)arg1;
- (void)revokeLongSession:(NSString *)arg1;
- (EDAMAuthenticationResult *)completeTwoFactorAuthentication:(NSString *)arg1 oneTimeCode:(NSString *)arg2 deviceIdentifier:(NSString *)arg3 deviceDescription:(NSString *)arg4;
- (EDAMAuthenticationResult *)authenticateLongSessionV2:(EDAMAuthenticationParameters *)arg1;
- (EDAMAuthenticationResult *)authenticateLongSession:(NSString *)arg1 password:(NSString *)arg2 consumerKey:(NSString *)arg3 consumerSecret:(NSString *)arg4 deviceIdentifier:(NSString *)arg5 deviceDescription:(NSString *)arg6 supportsTwoFactor:(BOOL)arg7;
- (EDAMAuthenticationResult *)authenticateOpenID:(EDAMOpenIdCredential *)arg1 consumerKey:(NSString *)arg2 consumerSecret:(NSString *)arg3 deviceIdentifier:(NSString *)arg4 deviceDescription:(NSString *)arg5 authLongSession:(BOOL)arg6 supportsTwoFactor:(BOOL)arg7;
- (EDAMAuthenticationResult *)authenticate:(NSString *)arg1 password:(NSString *)arg2 consumerKey:(NSString *)arg3 consumerSecret:(NSString *)arg4 supportsTwoFactor:(BOOL)arg5;
- (EDAMBootstrapInfo *)getBootstrapInfo:(NSString *)arg1;
- (BOOL)checkVersion:(NSString *)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3;
@end

