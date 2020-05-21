//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEONavigationServerPushStateXPCInterface.h"

@class GEONavdPeer, NSData, NSMutableArray, NSString;

@interface GEONavigationServer : NSObject <GEONavigationServerPushStateXPCInterface>
{
    GEONavdPeer *_pushStatePeer;
    NSMutableArray *_listenerPeers;
    BOOL _isListenerConnectionOpen;
    int _listenerConnectionOpenToken;
    unsigned long long _state;
    int _transportType;
    NSData *_routeSummaryData;
    NSData *_transitSummaryData;
    NSData *_guidanceStateData;
    NSData *_activeRouteDetailsData;
    NSData *_stepIndexData;
    NSData *_stepNameInfoData;
    NSData *_rideSelectionsData;
    NSData *_positionFromSignData;
    NSData *_positionFromManeuverData;
    NSData *_positionFromDestinationData;
    NSData *_trafficIncidentAlertDetailsData;
    NSData *_navigationVoiceVolumeData;
}

+ (id)identifier;
- (void).cxx_destruct;
- (void)_notifyListenersOpenConnection;
- (void)_closePushStatePeerConnection;
- (void)_openPushStatePeerConnection:(id)arg1;
- (void)clearAllData;
- (void)_sendMessage:(long long)arg1 data:(id)arg2 toPeer:(id)arg3;
- (void)_forEachValidPeerProxy:(CDUnknownBlockType)arg1;
- (void)_updateAllPeersWithMessage:(long long)arg1 data:(id)arg2;
- (void)_requestNavigationVoiceVolumeWithPeer:(id)arg1;
- (void)_requestTrafficIncidentDetailsDataWithPeer:(id)arg1;
- (void)_requestPositionFromDestinationWithPeer:(id)arg1;
- (void)_requestPositionFromManeuverWithPeer:(id)arg1;
- (void)_requestPositionFromSignWithPeer:(id)arg1;
- (void)_requestRideSelectionsWithPeer:(id)arg1;
- (void)_requestStepNameInfoWithPeer:(id)arg1;
- (void)_requestStepIndexWithPeer:(id)arg1;
- (void)_requestActiveRouteDetailsDataWithPeer:(id)arg1;
- (void)_requestGuidanceStateWithPeer:(id)arg1;
- (void)_requestTransitSummaryWithPeer:(id)arg1;
- (void)_requestRouteSummaryWithPeer:(id)arg1;
- (void)setCurrentRoadName:(id)arg1;
- (void)setNavigationVoiceVolumeWithData:(id)arg1;
- (void)setRouteSummaryWithTrafficIncidentAlertDetailsData:(id)arg1;
- (void)setRouteSummaryWithPositionFromDestinationData:(id)arg1;
- (void)setRouteSummaryWithPositionFromManeuverData:(id)arg1;
- (void)setRouteSummaryWithPositionFromSignData:(id)arg1;
- (void)setRouteSummaryWithRideSelectionsData:(id)arg1;
- (void)setRouteSummaryWithStepNameInfoData:(id)arg1;
- (void)setRouteSummaryWithStepIndexData:(id)arg1;
- (void)setRouteSummaryWithActiveRouteDetailsData:(id)arg1;
- (void)setRouteSummaryWithGuidanceStateData:(id)arg1;
- (void)setRouteSummaryWithTransitSummaryData:(id)arg1;
- (void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1;
- (void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2;
- (void)dealloc;
- (BOOL)shouldAcceptNewConnection:(id)arg1 shouldCreateNavigationPeer:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

