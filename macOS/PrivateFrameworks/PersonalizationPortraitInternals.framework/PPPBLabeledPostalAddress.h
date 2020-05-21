//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface PPPBLabeledPostalAddress : PBCodable <NSCopying>
{
    NSString *_city;
    NSString *_country;
    NSString *_isoCountryCode;
    NSString *_label;
    NSString *_postalCode;
    NSString *_state;
    NSString *_street;
    NSString *_subAdministrativeArea;
    NSString *_subLocality;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(retain, nonatomic) NSString *street; // @synthesize street=_street;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasIsoCountryCode;
@property(readonly, nonatomic) BOOL hasCountry;
@property(readonly, nonatomic) BOOL hasPostalCode;
@property(readonly, nonatomic) BOOL hasState;
@property(readonly, nonatomic) BOOL hasSubAdministrativeArea;
@property(readonly, nonatomic) BOOL hasCity;
@property(readonly, nonatomic) BOOL hasSubLocality;
@property(readonly, nonatomic) BOOL hasStreet;
@property(readonly, nonatomic) BOOL hasLabel;

@end

