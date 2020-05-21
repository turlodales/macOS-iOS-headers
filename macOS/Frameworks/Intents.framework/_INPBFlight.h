//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBFlight.h"

@class NSString, _INPBAirline, _INPBAirportGate, _INPBDateTimeRange;

@interface _INPBFlight : PBCodable <_INPBFlight, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBAirline *_airline;
    _INPBAirportGate *_arrivalAirportGate;
    _INPBDateTimeRange *_boardingTime;
    _INPBAirportGate *_departureAirportGate;
    _INPBDateTimeRange *_flightDuration;
    NSString *_flightNumber;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *flightNumber; // @synthesize flightNumber=_flightNumber;
@property(retain, nonatomic) _INPBDateTimeRange *flightDuration; // @synthesize flightDuration=_flightDuration;
@property(retain, nonatomic) _INPBAirportGate *departureAirportGate; // @synthesize departureAirportGate=_departureAirportGate;
@property(retain, nonatomic) _INPBDateTimeRange *boardingTime; // @synthesize boardingTime=_boardingTime;
@property(retain, nonatomic) _INPBAirportGate *arrivalAirportGate; // @synthesize arrivalAirportGate=_arrivalAirportGate;
@property(retain, nonatomic) _INPBAirline *airline; // @synthesize airline=_airline;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasFlightNumber;
@property(readonly, nonatomic) BOOL hasFlightDuration;
@property(readonly, nonatomic) BOOL hasDepartureAirportGate;
@property(readonly, nonatomic) BOOL hasBoardingTime;
@property(readonly, nonatomic) BOOL hasArrivalAirportGate;
@property(readonly, nonatomic) BOOL hasAirline;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

