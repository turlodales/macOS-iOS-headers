//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOComposedRouteStep.h>

@class GEOPBTransitHall, GEOPBTransitStop, GEOTransitScheduleInfo, GEOTransitStep, NSArray, NSString;

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep
{
    int _maneuver;
    unsigned int _startTime;
    unsigned int _duration;
    GEOTransitStep *_transitStep;
    NSArray *_routeDetailsPrimaryArtwork;
    id <GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
    NSArray *_steppingArtwork;
    id <GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
    id <GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
    GEOPBTransitStop *_originStop;
    GEOPBTransitStop *_destinationStop;
    GEOPBTransitHall *_originHall;
    GEOPBTransitHall *_destinationHall;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEOPBTransitHall *destinationHall; // @synthesize destinationHall=_destinationHall;
@property(readonly, nonatomic) GEOPBTransitHall *originHall; // @synthesize originHall=_originHall;
@property(readonly, nonatomic) GEOPBTransitStop *destinationStop; // @synthesize destinationStop=_destinationStop;
@property(readonly, nonatomic) GEOPBTransitStop *originStop; // @synthesize originStop=_originStop;
- (id)steppingArtwork;
- (id)routeDetailsSecondaryArtwork;
- (id)routeDetailsPrimaryArtwork;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage; // @synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> steppingIncidentMessage; // @synthesize steppingIncidentMessage=_steppingIncidentMessage;
@property(readonly, nonatomic) int maneuver; // @synthesize maneuver=_maneuver;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_intermediateListNameForStop:(id)arg1;
@property(readonly, nonatomic) NSString *destinationStopIntermediateListName;
@property(readonly, nonatomic) NSString *originStopIntermediateListName;
- (id)_largestEntityAtStop:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)_muidForStop:(id)arg1;
@property(readonly, nonatomic) unsigned long long destinationTransitEntityMuid;
@property(readonly, nonatomic) unsigned long long originTransitEntityMuid;
- (id)description;
- (BOOL)isArrivalStep;
- (CDStruct_39925896)endGeoCoordinate;
- (CDStruct_39925896)startGeoCoordinate;
- (id)previousAlightingStep;
- (id)nextAlightingStep;
- (id)previousBoardingStep;
- (id)nextBoardingStep;
- (id)nextStop;
- (id)previousStop;
- (unsigned int)startTime;
- (id)endingStop;
- (id)startingStop;
@property(readonly, nonatomic) GEOComposedTransitRouteStep *nextTransitStep;
@property(readonly, nonatomic) GEOComposedTransitRouteStep *previousTransitStep;
@property(readonly, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property(readonly, nonatomic) id <GEOTransitVehicleEntries> vehicleEntries;
- (id)instructions;
@property(readonly, nonatomic) GEOTransitStep *transitStep; // @synthesize transitStep=_transitStep;
- (unsigned int)distance;
- (unsigned int)duration;
- (BOOL)hasDuration;
- (void)_populateArtworksWithDecoderData:(id)arg1;
- (void)_populateIncidentsWithDecoderData:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 routeLegType:(long long)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 duration:(unsigned int)arg6 pointRange:(struct _NSRange)arg7;

@end

