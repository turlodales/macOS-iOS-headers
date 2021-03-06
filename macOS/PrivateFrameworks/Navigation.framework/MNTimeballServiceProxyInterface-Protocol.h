//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNPlannedDestination, MNRouteUpdateFreshness, NSArray, NSUUID;
@protocol MNTimeballServiceProxyDelegate;

@protocol MNTimeballServiceProxyInterface <NSObject>
@property(nonatomic) id <MNTimeballServiceProxyDelegate> delegate;
- (void)unsubscribeFromAllDestinations;
- (void)subscribeToAllDestinations;
- (void)unsubscribeFromDestination:(MNPlannedDestination *)arg1;
- (void)subscribeToDestination:(MNPlannedDestination *)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(NSArray *)arg2 freshness:(MNRouteUpdateFreshness *)arg3 handlerID:(NSUUID *)arg4;
@end

