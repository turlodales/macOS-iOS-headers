//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOMapServiceTraits, MKTransitDeparturesDataProvider;

@protocol MKTransitDeparturesDataProviderDelegate <NSObject>
- (void)transitDeparturesDataProviderDidReload:(MKTransitDeparturesDataProvider *)arg1;
- (void)transitDeparturesDataProviderDidUpdateDepartures:(MKTransitDeparturesDataProvider *)arg1;
- (void)transitDeparturesDataProviderWillUpdateDepartures:(MKTransitDeparturesDataProvider *)arg1;
- (GEOMapServiceTraits *)traitsForTransitDeparturesDataProvider:(MKTransitDeparturesDataProvider *)arg1;
@end

