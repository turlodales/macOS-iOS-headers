//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MapPointOfInterestProtocol.h"

@class CLPlacemark, NSNumber, NSString;

@interface KHPhotoLocationMetadata : NSObject <MapPointOfInterestProtocol>
{
    CLPlacemark *_placemark;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(readonly) NSString *countryName;
@property(readonly) NSString *provinceName;
@property(readonly) NSString *countyName;
@property(readonly) NSString *cityName;
@property(readonly) NSString *neighborhoodName;
@property(readonly) NSNumber *radius;
@property(readonly) NSString *locationDisplayString;
@property(readonly) NSString *name;
@property(readonly) struct CGPoint location;
- (id)initWithPlacemark:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

