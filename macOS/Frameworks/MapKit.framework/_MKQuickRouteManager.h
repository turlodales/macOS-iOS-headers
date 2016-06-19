//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOAutomobileOptions, GEOTransitOptions, MKMapItem, NSError, NSObject<MKQuickRouteConfigurableView>, _MKRouteETA, _MKRouteETAFetcher;

@interface _MKQuickRouteManager : NSObject
{
    _MKRouteETAFetcher *_etaFetcher;
    double _maxDistanceToRequestETA;
    _MKRouteETA *_lastETA;
    unsigned long long _lastPreferredDirectionsType;
    NSError *_lastError;
    double _closeWalkTravelTime;
    double _maxWalkingDistance;
    BOOL _viewHasChangedSinceLastUpdate;
    BOOL _fetchAllTransportTypes;
    id <MKQuickRouteManagerDelegate> _delegate;
    id <MKQuickRouteTransportTypeFinding> _transportTypeFinder;
    NSObject<MKQuickRouteConfigurableView> *_view;
    struct CLLocationCoordinate2D _coordinate;
}

+ (unsigned long long)directionsTypeForMapItem:(id)arg1 delegate:(id)arg2 mapType:(unsigned long long)arg3;
+ (unsigned long long)counterpartForTransportType:(unsigned long long)arg1;
+ (BOOL)isLikelyToReturnETAForLocation:(id)arg1;
@property(nonatomic) BOOL fetchAllTransportTypes; // @synthesize fetchAllTransportTypes=_fetchAllTransportTypes;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) __weak NSObject<MKQuickRouteConfigurableView> *view; // @synthesize view=_view;
@property(nonatomic) __weak id <MKQuickRouteTransportTypeFinding> transportTypeFinder; // @synthesize transportTypeFinder=_transportTypeFinder;
@property(nonatomic) __weak id <MKQuickRouteManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadETAsFromMapItemForTransportType:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL isOnlyDriving;
- (BOOL)haveETAsForPreferredTransportType:(unsigned long long)arg1;
- (unsigned long long)guessTransportTypeForDistance:(double)arg1 preferredDirectionsType:(unsigned long long)arg2;
- (unsigned long long)directionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 preferredDirectionsType:(unsigned long long)arg3;
- (unsigned long long)directionsTypeForMapType:(unsigned long long)arg1;
- (id)bestETAForPreferredDirectionsType:(unsigned long long)arg1;
- (struct CLLocationCoordinate2D)destinationCoordinate;
- (struct CLLocationCoordinate2D)originCoordinate;
@property(readonly, nonatomic, getter=isUsingCurrentLocationForOrigin) BOOL usingCurrentLocationForOrigin;
- (void)requestNewETAForPreferredTransportType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateETA;
- (id)routeETAForTransportType:(unsigned long long)arg1;
- (void)_resetState;
@property(retain, nonatomic) MKMapItem *originMapItem;
@property(retain, nonatomic) MKMapItem *mapItem;
@property(copy, nonatomic) GEOTransitOptions *transitOptions;
@property(copy, nonatomic) GEOAutomobileOptions *automobileOptions;
- (BOOL)_transportTypeShouldBeSmart;
- (void)_performWithTransportType:(CDUnknownBlockType)arg1;
- (id)description;
- (id)init;

@end

