//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKAnnotation-Protocol.h>

@protocol MKOverlay <MKAnnotation>
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
- (BOOL)canReplaceMapContent;
- (BOOL)intersectsMapRect:(CDStruct_02837cd9)arg1;
@end

