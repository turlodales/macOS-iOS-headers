//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreLocation/CLHeading.h>

@class NSString;

@interface CLHeading (MapKitAdditions)
@property(readonly, retain, nonatomic) NSString *compactDescription;
@property(readonly, nonatomic) BOOL hasGeomagneticVector;
@property(readonly, nonatomic) double heading;
- (id)initWithHeading:(double)arg1 accuracy:(double)arg2;
@end

