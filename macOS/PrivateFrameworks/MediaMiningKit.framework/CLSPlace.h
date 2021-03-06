//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSPrimitive.h>

@class CLCircularRegion, CLSBusinessItem, CLSLitePlacemark, NSArray, NSString;

@interface CLSPlace : CLSPrimitive
{
    NSString *_name;
    CLCircularRegion *_region;
    CLSLitePlacemark *_placemark;
    NSArray *_categories;
    CLSBusinessItem *_businessItem;
}

+ (id)placeWithPlacemark:(id)arg1;
+ (id)placeWithLocation:(id)arg1;
+ (id)placeWithBusinessItem:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CLSBusinessItem *businessItem; // @synthesize businessItem=_businessItem;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) CLSLitePlacemark *placemark; // @synthesize placemark=_placemark;
@property(readonly, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqualToPlace:(id)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@end

