//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class AVRoutingSessionManager, MPAVEndpointRoute, MPMRAVOutputContextWrapper, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _attemptedToInitializeAppOutputContext;
    void *_discoverySession;
    void *_callbackToken;
    BOOL _supportsMultipleSelection;
    BOOL _devicePresenceDetected;
    NSArray *_outputDeviceRoutes;
    BOOL _shouldSourceOutputDevicesFromAVODDS;
    AVRoutingSessionManager *_routingSessionManager;
    BOOL _supportsRoutePrediction;
    MPMRAVOutputContextWrapper *_applicationOutputContext;
    MPAVEndpointRoute *_endpointRoute;
    NSString *_initiator;
}

+ (id)_globalAudioSessionLock;
- (void).cxx_destruct;
@property(nonatomic) BOOL supportsRoutePrediction; // @synthesize supportsRoutePrediction=_supportsRoutePrediction;
@property(retain, nonatomic) NSString *initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
@property(nonatomic) BOOL supportsMultipleSelection; // @synthesize supportsMultipleSelection=_supportsMultipleSelection;
@property(retain, nonatomic) MPMRAVOutputContextWrapper *applicationOutputContext; // @synthesize applicationOutputContext=_applicationOutputContext;
- (void)_setShouldSourceOutputDevicesFromAVODDS:(BOOL)arg1;
- (id)_outputDeviceRouteWithUID:(id)arg1;
- (void)_outputDevicesDidChange:(id)arg1;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_outputDevicesDidChangeNotification:(id)arg1;
- (void)_endpointsDidChangeNotification:(id)arg1;
- (BOOL)routeIsLeaderOfEndpoint:(id)arg1;
- (void)removeRouteFromGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addRouteToGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)devicePresenceDetected;
- (void)setDiscoveryMode:(long long)arg1;
- (long long)discoveryMode;
- (id)routingSessionManager;
@property(copy, nonatomic) NSString *routingContextUID;
- (void)dealloc;
- (id)init;

@end

