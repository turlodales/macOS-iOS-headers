//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKTransitDeparturesCell, NSImage;
@protocol GEOTransitLine;

@protocol MKTransitDeparturesCellDelegate <NSObject>
- (NSImage *)imageForTransitLine:(id <GEOTransitLine>)arg1;
- (void)incidentButtonSelectedInDeparturesCell:(MKTransitDeparturesCell *)arg1;
@end

