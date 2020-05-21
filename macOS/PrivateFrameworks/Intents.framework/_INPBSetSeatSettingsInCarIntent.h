//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSetSeatSettingsInCarIntent.h"

@class NSString, _INPBDataString, _INPBInteger, _INPBIntentMetadata;

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <_INPBSetSeatSettingsInCarIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int enableCooling:1;
        unsigned int enableHeating:1;
        unsigned int enableMassage:1;
        unsigned int relativeLevelSetting:1;
        unsigned int seat:1;
    } _has;
    BOOL _enableCooling;
    BOOL _enableHeating;
    BOOL _enableMassage;
    BOOL __encodeLegacyGloryData;
    int _relativeLevelSetting;
    int _seat;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
    _INPBInteger *_level;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int seat; // @synthesize seat=_seat;
@property(nonatomic) int relativeLevelSetting; // @synthesize relativeLevelSetting=_relativeLevelSetting;
@property(retain, nonatomic) _INPBInteger *level; // @synthesize level=_level;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) BOOL enableMassage; // @synthesize enableMassage=_enableMassage;
@property(nonatomic) BOOL enableHeating; // @synthesize enableHeating=_enableHeating;
@property(nonatomic) BOOL enableCooling; // @synthesize enableCooling=_enableCooling;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsSeat:(id)arg1;
- (id)seatAsString:(int)arg1;
@property(nonatomic) BOOL hasSeat;
- (int)StringAsRelativeLevelSetting:(id)arg1;
- (id)relativeLevelSettingAsString:(int)arg1;
@property(nonatomic) BOOL hasRelativeLevelSetting;
@property(readonly, nonatomic) BOOL hasLevel;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(nonatomic) BOOL hasEnableMassage;
@property(nonatomic) BOOL hasEnableHeating;
@property(nonatomic) BOOL hasEnableCooling;
@property(readonly, nonatomic) BOOL hasCarName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

