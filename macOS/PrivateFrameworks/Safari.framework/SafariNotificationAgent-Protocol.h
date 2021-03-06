//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSDictionary, NSString, NSURL;

@protocol SafariNotificationAgent
- (void)fetchIdentifiersAddedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 withAllowedPermissions:(BOOL)arg3 withDeniedPermissions:(BOOL)arg4 completionHandler:(void (^)(NSArray *))arg5;
- (void)forgetNotificationPermissionForWebsite:(NSString *)arg1;
- (void)denyRemoteNotificationPermissionForWebsite:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)grantRemoteNotificationPermissionForWebsite:(NSString *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)denyRemoteNotificationPermissionForRequestID:(unsigned long long)arg1;
- (void)grantRemoteNotificationPermissionForRequestID:(unsigned long long)arg1;
- (void)startVerificationForRemoteNotificationProviderWithApiURL:(NSURL *)arg1 websiteIdentifier:(NSString *)arg2 queryParameters:(NSDictionary *)arg3 referrerURL:(NSURL *)arg4 requestID:(unsigned long long)arg5;
@end

