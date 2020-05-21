//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource
{
    void *_discoveryController;
    NSMutableArray *_discoveredTelevisions;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
- (void)_onQueue_controllerDidRemoveTelevision:(void *)arg1;
- (void)_onQueue_controllerDidDiscoverTelevision:(void *)arg1;
- (id)_discoveredTelevisions;
- (void)getPickedRouteHasVolumeControlWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)devicePresenceDetected;
- (void)setDiscoveryMode:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

