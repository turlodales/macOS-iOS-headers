//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource
{
    void *_discoverySession;
    void *_callbackToken;
    NSString *_routingContextUID;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_endpoints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *endpoints; // @synthesize endpoints=_endpoints;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSString *routingContextUID; // @synthesize routingContextUID=_routingContextUID;
- (void)_endpointsDidChange:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)devicePresenceDetected;
- (void)setDiscoveryMode:(long long)arg1;
- (long long)discoveryMode;
- (void)dealloc;
- (id)initWithThrottlingEnabled:(BOOL)arg1;
- (id)init;

@end

