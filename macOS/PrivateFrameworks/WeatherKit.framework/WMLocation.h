//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WeatherKit/WMObject.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "WMDataWithDate.h"

@class CLLocation, NSDate, NSString, NSTimeZone;

@interface WMLocation : WMObject <NSSecureCoding, NSCopying, WMDataWithDate>
{
    NSString *_city;
    NSString *_county;
    NSString *_state;
    NSString *_stateAbbreviation;
    NSString *_country;
    NSString *_countryAbbreviation;
    CLLocation *_geoLocation;
    NSString *_locationID;
    NSTimeZone *_timeZone;
    long long _woeid;
    NSDate *_creationDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)knownKeys;
- (void).cxx_destruct;
@property(copy) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property long long woeid; // @synthesize woeid=_woeid;
@property(copy) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy) NSString *locationID; // @synthesize locationID=_locationID;
@property(copy) CLLocation *geoLocation; // @synthesize geoLocation=_geoLocation;
@property(copy) NSString *countryAbbreviation; // @synthesize countryAbbreviation=_countryAbbreviation;
@property(copy) NSString *country; // @synthesize country=_country;
@property(copy) NSString *stateAbbreviation; // @synthesize stateAbbreviation=_stateAbbreviation;
@property(copy) NSString *state; // @synthesize state=_state;
@property(copy) NSString *county; // @synthesize county=_county;
@property(copy) NSString *city; // @synthesize city=_city;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

