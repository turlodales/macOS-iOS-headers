//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBGetReservationDetailsIntent.h"

@class NSArray, NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBGetReservationDetailsIntent : PBCodable <_INPBGetReservationDetailsIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataString *_reservationContainerReference;
    NSArray *_reservationItemReferences;
}

+ (BOOL)supportsSecureCoding;
+ (Class)reservationItemReferencesType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *reservationItemReferences; // @synthesize reservationItemReferences=_reservationItemReferences;
@property(retain, nonatomic) _INPBDataString *reservationContainerReference; // @synthesize reservationContainerReference=_reservationContainerReference;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reservationItemReferencesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long reservationItemReferencesCount;
- (void)addReservationItemReferences:(id)arg1;
- (void)clearReservationItemReferences;
@property(readonly, nonatomic) BOOL hasReservationContainerReference;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

