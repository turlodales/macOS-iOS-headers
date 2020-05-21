//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, GEOLocationShifter, GEONavigationMatchResult, GEORoadMatcher, GEORouteMatcher;

@interface GEONavigationMapMatcher : NSObject
{
    BOOL _isSimulation;
    GEOComposedRoute *_route;
    GEONavigationMatchResult *_previousMatchResult;
    GEORouteMatcher *_routeMatcher;
    GEORoadMatcher *_roadMatcher;
    GEOLocationShifter *_locationShifter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOLocationShifter *locationShifter; // @synthesize locationShifter=_locationShifter;
@property(retain, nonatomic) GEORoadMatcher *roadMatcher; // @synthesize roadMatcher=_roadMatcher;
@property(retain, nonatomic) GEORouteMatcher *routeMatcher; // @synthesize routeMatcher=_routeMatcher;
@property(nonatomic) BOOL isSimulation; // @synthesize isSimulation=_isSimulation;
@property(retain, nonatomic) GEONavigationMatchResult *previousMatchResult; // @synthesize previousMatchResult=_previousMatchResult;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (id)_routeMatcherForRoute:(id)arg1;
- (void)setShouldSnapRouteMatchToRoute:(BOOL)arg1;
- (void)resetToLocation:(id)arg1;
- (int)transportType;
- (id)updateForReroute:(id)arg1 location:(id)arg2;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (id)initWithRoute:(id)arg1;

@end

