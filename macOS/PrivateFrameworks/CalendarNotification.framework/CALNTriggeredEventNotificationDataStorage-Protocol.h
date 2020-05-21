//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALNTriggeredEventNotificationData, NSDictionary, NSString;

@protocol CALNTriggeredEventNotificationDataStorage <NSObject>
- (void)removeNotificationData;
- (void)removeNotificationDataWithIdentifier:(NSString *)arg1;
- (void)addNotificationData:(CALNTriggeredEventNotificationData *)arg1 withIdentifier:(NSString *)arg2;
- (CALNTriggeredEventNotificationData *)notificationDataWithIdentifier:(NSString *)arg1;
- (NSDictionary *)notificationData;
@end

