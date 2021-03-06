//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDHome, HMDUser, HMDUserCloudShareController, HMDXPCClientConnection, HMFTimer, NSData, NSDate, NSString;

@protocol HMDUserCloudShareControllerDelegate <NSObject>
- (NSDate *)currentDateForUserCloudShareController:(HMDUserCloudShareController *)arg1;
- (HMFTimer *)userCloudShareController:(HMDUserCloudShareController *)arg1 timerWithInterval:(double)arg2;
- (void)userCloudShareController:(HMDUserCloudShareController *)arg1 wakeClientWithContainerID:(NSString *)arg2;
- (void)userCloudShareController:(HMDUserCloudShareController *)arg1 sendShareRequestMessageWithConnection:(HMDXPCClientConnection *)arg2 fromUser:(HMDUser *)arg3 toUser:(HMDUser *)arg4 home:(HMDHome *)arg5 shareURL:(NSData *)arg6 shareToken:(NSData *)arg7 containerID:(NSString *)arg8 completion:(void (^)(NSData *, NSError *))arg9;
@end

