//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class GEOComposedRoute, GEOComposedTransitTripRouteLeg, NSArray;

@protocol GEOComposedRouteObserver <NSObject>
- (void)composedRoute:(GEOComposedRoute *)arg1 appliedTransitRouteUpdates:(NSArray *)arg2;
- (void)composedRoute:(GEOComposedRoute *)arg1 changedSelectedRideInClusteredLeg:(GEOComposedTransitTripRouteLeg *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)composedRoute:(GEOComposedRoute *)arg1 selectedSections:(NSArray *)arg2 deselectedSections:(NSArray *)arg3;
- (void)composedRouteUpdatedSnappedPaths:(GEOComposedRoute *)arg1;
@end

