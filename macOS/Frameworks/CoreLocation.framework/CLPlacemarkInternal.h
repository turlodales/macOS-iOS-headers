//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, CLRegion, GEOMapItemStorage, NSArray, NSDictionary, NSTimeZone;

@interface CLPlacemarkInternal : NSObject
{
    CLLocation *location;
    NSDictionary *addressDictionary;
    CLRegion *region;
    NSArray *areasOfInterest;
    GEOMapItemStorage *geoMapItemStorage;
    NSTimeZone *timeZone;
}

- (id)init;

@end

