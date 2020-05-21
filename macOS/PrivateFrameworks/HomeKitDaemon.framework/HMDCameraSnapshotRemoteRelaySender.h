//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotSender.h>

#import "HMDCameraGetSnapshotProtocol.h"
#import "HMDCameraSnapshotIDSRelayInitiatorDelegate.h"
#import "HMDCameraSnapshotLocalDelegate.h"
#import "HMDCameraSnapshotSenderProtocol.h"
#import "HMFLogging.h"

@class HMDCameraSnapshotIDSRelayInitiator, HMDCameraSnapshotLocal, NSString;

@interface HMDCameraSnapshotRemoteRelaySender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSRelayInitiatorDelegate, HMFLogging>
{
    HMDCameraSnapshotLocal *_snapshotLocal;
    id <HMDCameraSnapshotRemoteRelaySenderDelegate> _delegate;
    HMDCameraSnapshotIDSRelayInitiator *_relayInitiator;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDCameraSnapshotIDSRelayInitiator *relayInitiator; // @synthesize relayInitiator=_relayInitiator;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteRelaySenderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal; // @synthesize snapshotLocal=_snapshotLocal;
- (void)relayInitiator:(id)arg1 didFailToSendFile:(id)arg2;
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)_callDidCompleteSendImageDelegate:(id)arg1;
- (void)_callDidStartCaptureImageDelegate:(id)arg1;
- (void)snapShotTransferComplete;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)logIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 device:(id)arg4 accessory:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 uniqueIdentifier:(id)arg8 snapshotRequestHandler:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

