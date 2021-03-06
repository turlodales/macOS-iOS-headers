//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class IMEventNotificationQueue;

@protocol IMEventNotificationQueueDelegate <NSObject>

@optional
- (void)eventNotificationQueueDidSendNotifications:(IMEventNotificationQueue *)arg1;
- (void)eventNotificationQueueWillSendNotifications:(IMEventNotificationQueue *)arg1;
- (void)eventNotificationQueue:(IMEventNotificationQueue *)arg1 didChangePausedState:(BOOL)arg2;
- (void)eventNotificationQueue:(IMEventNotificationQueue *)arg1 didChangeBusyState:(BOOL)arg2;
@end

