//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSnapshotRemoteRelayReceiver, HMDCameraSnapshotSessionID, HMDSnapshotFile, NSError;

@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate <NSObject>
- (void)snapshotRelayReceiver:(HMDCameraSnapshotRemoteRelayReceiver *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSnapshotSessionID *)arg4;
- (void)snapshotRelayReceiver:(HMDCameraSnapshotRemoteRelayReceiver *)arg1 didStartGettingImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
@end

