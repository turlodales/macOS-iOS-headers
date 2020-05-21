//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotReceiver.h>

#import "HMDCameraGetSnapshotProtocol.h"
#import "HMDCameraSnapshotIDSStreamReceiverDelegate.h"
#import "HMDCameraSnapshotReceiverProtocol.h"
#import "HMFLogging.h"

@class HMDCameraSnapshotIDSStreamReceiver, NSString;

@interface HMDCameraSnapshotRemoteStreamReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSStreamReceiverDelegate, HMFLogging>
{
    id <HMDCameraSnapshotRemoteStreamReceiverDelegate> _delegate;
    HMDCameraSnapshotIDSStreamReceiver *_relayReceiver;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDCameraSnapshotIDSStreamReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteStreamReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)relayReceiver:(id)arg1 didReceiveFile:(id)arg2;
- (void)_callDidSaveImageDelegateWithError:(id)arg1;
- (void)_callGettingImageDelegate:(id)arg1;
- (void)snapShotSendFailed:(id)arg1;
- (void)_getSnapshot:(unsigned long long)arg1;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)logIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8 residentMessageHandler:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

