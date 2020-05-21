//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSeat.h"

@class NSString;

@interface _INPBSeat : PBCodable <_INPBSeat, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSString *_seatNumber;
    NSString *_seatRow;
    NSString *_seatSection;
    NSString *_seatingType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *seatingType; // @synthesize seatingType=_seatingType;
@property(copy, nonatomic) NSString *seatSection; // @synthesize seatSection=_seatSection;
@property(copy, nonatomic) NSString *seatRow; // @synthesize seatRow=_seatRow;
@property(copy, nonatomic) NSString *seatNumber; // @synthesize seatNumber=_seatNumber;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasSeatingType;
@property(readonly, nonatomic) BOOL hasSeatSection;
@property(readonly, nonatomic) BOOL hasSeatRow;
@property(readonly, nonatomic) BOOL hasSeatNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

