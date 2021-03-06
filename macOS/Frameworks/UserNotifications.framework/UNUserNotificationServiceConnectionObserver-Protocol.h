//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotifications/NSObject-Protocol.h>

@class NSData, NSString, UNNotification, UNNotificationResponse;

@protocol UNUserNotificationServiceConnectionObserver <NSObject>

@optional
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1 withCompletionHandler:(void (^)(void))arg2;
- (void)willPresentNotification:(UNNotification *)arg1 withCompletionHandler:(void (^)(unsigned long long))arg2;
- (void)didReceiveDeviceToken:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;
@end

