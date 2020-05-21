//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSetDefrosterSettingsInCarIntent.h"

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <_INPBSetDefrosterSettingsInCarIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int defroster:1;
        unsigned int enable:1;
    } _has;
    BOOL _enable;
    BOOL __encodeLegacyGloryData;
    int _defroster;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) BOOL enable; // @synthesize enable=_enable;
@property(nonatomic) int defroster; // @synthesize defroster=_defroster;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(nonatomic) BOOL hasEnable;
- (int)StringAsDefroster:(id)arg1;
- (id)defrosterAsString:(int)arg1;
@property(nonatomic) BOOL hasDefroster;
@property(readonly, nonatomic) BOOL hasCarName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

