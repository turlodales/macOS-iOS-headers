//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraIDSSessionHandler.h>

#import "HMDCameraRemoteStreamSenderProtocol.h"
#import "IDSServiceDelegate.h"
#import "IDSSessionDelegate.h"

@class AVCPacketRelay, HMDCameraNetworkConfig, HMDDevice, HMFOSTransaction, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler <IDSServiceDelegate, IDSSessionDelegate, HMDCameraRemoteStreamSenderProtocol>
{
    id <HMDCameraIDSSessionInitiatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDDevice *_device;
    HMDCameraNetworkConfig *_localNetworkConfig;
    AVCPacketRelay *_packetRelay;
    HMFOSTransaction *_packetRelayTransaction;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) HMFOSTransaction *packetRelayTransaction; // @synthesize packetRelayTransaction=_packetRelayTransaction;
@property(retain, nonatomic) AVCPacketRelay *packetRelay; // @synthesize packetRelay=_packetRelay;
@property(readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig; // @synthesize localNetworkConfig=_localNetworkConfig;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <HMDCameraIDSSessionInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_callSessionEnded:(id)arg1;
- (void)_callSessionStarted:(id)arg1;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)_sendInvitation;
- (void)openRelaySession;
- (void)dealloc;
@property(readonly, nonatomic) NSNumber *mtu;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 localNetworkConfig:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

