//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKSessionVoiceChatDelegate.h"
#import "GKVoiceChatClient.h"
#import "InterfaceListenerDelegate.h"
#import "VideoConferenceSpeakingDelegate.h"

@class GKInterfaceListener, GKRWLock, GKSessionInternal, GKVoiceChatServiceFocus, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, VoiceChatSessionRoster;

@interface GKVoiceChatSessionInternal : NSObject <GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate, InterfaceListenerDelegate>
{
    NSString *_sessionName;
    unsigned int _conferenceID;
    BOOL activeSession;
    float sessionVolume;
    BOOL focusCallbacks;
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    NSMutableArray *_connectedPeers;
    NSMutableArray *_connectedVoicePeers;
    NSMutableArray *_connectedFocusPeers;
    NSMutableArray *_mutedPeers;
    NSMutableArray *_myPausedList;
    NSMutableDictionary *_peerChannelQuality;
    BOOL needsRecalculateGoodChannels;
    int goodChannels;
    unsigned int talkingPeersLimit;
    BOOL isUsingSuppression;
    unsigned int _sessionState;
    GKRWLock *_rwLock;
    GKVoiceChatServiceFocus *_vcService;
    VoiceChatSessionRoster *_roster;
    NSObject<OS_dispatch_queue> *_sendQueue;
    id <GKVoiceChatSessionDelegate> delegate;
    unsigned int congestionState;
    id _publicWrapper;
    GKInterfaceListener *_wifiListener;
    BOOL _currentWifiState;
}

+ (void)brokenHash:(id)arg1 response:(char *)arg2;
@property BOOL isUsingSuppression;
@property unsigned int talkingPeersLimit;
- (unsigned int)peerCount;
- (void)parseConnectedPeers:(id)arg1;
- (void)sendConnectedPeers;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedFocusPeers:(id)arg1;
- (void)removeFromFocusPausedList:(id)arg1;
- (void)addPeerToFocusPausedList:(id)arg1;
- (void)pruneBadLinks;
- (void)unPauseAll;
- (void)pauseAll;
- (void)parseMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)sendMutedPeers;
- (void)updatedMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)updatedFocusID:(unsigned int)arg1;
- (void)updatedSubscribedBeaconList:(id)arg1;
- (void)handlePeerDisconnected:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property float sessionVolume;
@property(readonly, nonatomic) unsigned int conferenceID;
@property(readonly, nonatomic) NSString *sessionName;
@property(getter=isActiveSession) BOOL activeSession;
@property(readonly) NSArray *peerList;
- (BOOL)getMuteStateForPeer:(id)arg1;
- (void)setMute:(BOOL)arg1 forPeer:(id)arg2;
- (void)stopSessionInternal;
- (void)stopSession;
- (void)startSessionInternal;
- (void)startSession;
- (void)cleanupProc:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)decodePeerID:(id)arg1;
- (id)encodePeerID:(id)arg1;
- (void)calculateConferenceID;
- (id)initWithGKSession:(id)arg1 publicWrapper:(id)arg2 sessionName:(id)arg3;
- (void)networkStateDidChange;
- (void)interfaceStateDidChangeWithWifiUp:(BOOL)arg1 cellUp:(BOOL)arg2;
- (void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(unsigned int)arg3;
- (void)session:(id)arg1 didReceiveAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)informClientVoiceChatFocusChange:(id)arg1;
- (void)informClientVoiceChatSilent:(id)arg1;
- (void)informClientVoiceChatSpeaking:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)informClientVoiceChatCouldNotConnect:(id)arg1;
- (void)informClientVoiceChatConnecting:(id)arg1;
- (void)informClientVoiceChatDidStart:(id)arg1;
@property id <GKVoiceChatSessionDelegate> delegate;
- (void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(unsigned int)arg3;
- (void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2;
- (id)participantID;
- (void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3;
- (void)didStopSpeaking:(id)arg1;
- (void)didStartSpeaking:(id)arg1;
- (void)lossRate:(float)arg1 forParticipantID:(id)arg2;
- (int)goodChannels;
- (int)calculateChannelQualities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

