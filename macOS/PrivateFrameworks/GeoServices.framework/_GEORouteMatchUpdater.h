//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOMapFeatureAccess, GEOMotionContext, GEOTransitRouteMatcher;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater : NSObject
{
    GEOTransitRouteMatcher *_routeMatcher;
    GEOComposedRoute *_route;
    GEOMapFeatureAccess *_mapFeatureAccess;
    GEOMotionContext *_motionContext;
    double _stationRadius;
}

- (void).cxx_destruct;
- (double)_stationRadiusForStation:(id)arg1 accessPoint:(id)arg2 adjacentWalkingLegCoordinate:(CDStruct_c3b9c2ee)arg3;
- (BOOL)_isLocation:(id)arg1 nearTransitPoint:(CDStruct_c3b9c2ee)arg2 transitID:(unsigned long long)arg3 featureSize:(double)arg4;
- (BOOL)_isLocation:(id)arg1 nearStation:(id)arg2;
- (BOOL)_isLocation:(id)arg1 nearStop:(id)arg2;
- (unsigned long long)priority;
- (BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)initWithTransitRouteMatcher:(id)arg1;

@end

