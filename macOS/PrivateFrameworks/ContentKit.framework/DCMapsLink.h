//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFSerializableContent.h"

@class NSString;

@interface DCMapsLink : NSObject <WFSerializableContent>
{
}

+ (BOOL)isMapsURL:(id)arg1;
+ (id)mapsLinkWithURL:(id)arg1;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (void)createMapsLinkWithPlacemark:(id)arg1 location:(id)arg2 streetAddress:(id)arg3 shiftingLocationIfNecessary:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)processLocation:(id)arg1 shiftingIfNecessary:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (CDStruct_2b0c6e0b)coordinateRegionForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2 atZoomLevel:(long long)arg3;
+ (CDStruct_c3b9c2ee)coordinateSpanForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2 atZoomLevel:(long long)arg3;
+ (double)pixelSpaceYToLatitude:(double)arg1;
+ (double)pixelSpaceXToLongitude:(double)arg1;
+ (double)latitudeToPixelSpaceY:(double)arg1;
+ (double)longitudeToPixelSpaceX:(double)arg1;
@property(readonly, nonatomic) NSString *streetViewLocation;
@property(readonly, nonatomic) BOOL showsBicycling;
@property(readonly, nonatomic) BOOL showsStreetView;
@property(readonly, nonatomic) BOOL showsTransit;
@property(readonly, nonatomic) BOOL showsTraffic;
@property(readonly, nonatomic) unsigned long long mapType;
@property(readonly, nonatomic) long long zoomLevel;
@property(readonly, nonatomic) NSString *centerLocation;
@property(readonly, nonatomic) unsigned long long directionsMode;
@property(readonly, nonatomic) NSString *destinationAddress;
@property(readonly, nonatomic) NSString *startAddress;
@property(readonly, nonatomic) NSString *searchLocation;
@property(readonly, nonatomic) NSString *searchNearQuery;
@property(readonly, nonatomic) NSString *searchQuery;
@property(readonly, copy) NSString *description;
- (void)getCitymapperAppURL:(CDUnknownBlockType)arg1;
- (id)baiduMapsAppURL;
- (id)wazeAppURL;
- (id)transitAppURL;
- (id)googleMapsAppURL;
- (id)mapsAppURL;
- (void)geocodeDirectionsEndpointsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)geocodeAddressString:(id)arg1 inRegionIfAvailable:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)region;
- (id)regionCenteredAtLocation:(struct CLLocationCoordinate2D)arg1;
- (id)wfSerializedRepresentation;
- (id)wfName;
- (void)getAppleMapsDirectionsURL:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *mkDirectionsMode;
@property(readonly, nonatomic) unsigned long long directionsTransportType;
- (void)getDirectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getDirectionsToPlacemark:(id)arg1 fromPlacemark:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getDirectionsToPlacemark:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL canGetDirections;
- (CDStruct_2b0c6e0b)coordinateRegionForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2;
- (CDStruct_c3b9c2ee)coordinateSpanForMapSize:(struct CGSize)arg1 centeredAtLocation:(struct CLLocationCoordinate2D)arg2;
@property(readonly, nonatomic) unsigned long long mkMapType;
@property(readonly, nonatomic) struct CLLocationCoordinate2D centerCoordinate;
- (struct CLLocationCoordinate2D)streetViewLocationCoordinate;
- (struct CLLocationCoordinate2D)centerLocationCoordinate;
- (struct CLLocationCoordinate2D)searchLocationCoordinate;
- (struct CLLocationCoordinate2D)locationCoordinateFromString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

