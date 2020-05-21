//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDHome, HMDUser, HMDUserCloudShareController, HMDXPCClientConnection, HMFTimer, NSData, NSDate, NSString;

@protocol HMDUserCloudShareControllerDelegate <NSObject>
- (NSDate *)currentDateForUserCloudShareController:(HMDUserCloudShareController *)arg1;
- (HMFTimer *)userCloudShareController:(HMDUserCloudShareController *)arg1 timerWithInterval:(double)arg2;
- (void)userCloudShareController:(HMDUserCloudShareController *)arg1 wakeClientWithContainerID:(NSString *)arg2;
- (void)userCloudShareController:(HMDUserCloudShareController *)arg1 sendShareRequestMessageWithConnection:(HMDXPCClientConnection *)arg2 fromUser:(HMDUser *)arg3 toUser:(HMDUser *)arg4 home:(HMDHome *)arg5 shareURL:(NSData *)arg6 shareToken:(NSData *)arg7 containerID:(NSString *)arg8 completion:(void (^)(NSData *, NSError *))arg9;
@end

