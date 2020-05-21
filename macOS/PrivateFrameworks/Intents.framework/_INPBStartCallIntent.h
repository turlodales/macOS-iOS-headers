//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBStartCallIntent.h"

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBStartCallIntent : PBCodable <_INPBStartCallIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int audioRoute:1;
        unsigned int callCapability:1;
        unsigned int destinationType:1;
        unsigned int preferredCallProvider:1;
        unsigned int recordTypeForRedialing:1;
        unsigned int ttyType:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _audioRoute;
    int _callCapability;
    int _destinationType;
    int _preferredCallProvider;
    int _recordTypeForRedialing;
    int _ttyType;
    NSArray *_contacts;
    _INPBIntentMetadata *_intentMetadata;
}

+ (BOOL)supportsSecureCoding;
+ (Class)contactsType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic) int recordTypeForRedialing; // @synthesize recordTypeForRedialing=_recordTypeForRedialing;
@property(nonatomic) int preferredCallProvider; // @synthesize preferredCallProvider=_preferredCallProvider;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int destinationType; // @synthesize destinationType=_destinationType;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) int callCapability; // @synthesize callCapability=_callCapability;
@property(nonatomic) int audioRoute; // @synthesize audioRoute=_audioRoute;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsTTYType:(id)arg1;
- (id)ttyTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTtyType;
- (int)StringAsRecordTypeForRedialing:(id)arg1;
- (id)recordTypeForRedialingAsString:(int)arg1;
@property(nonatomic) BOOL hasRecordTypeForRedialing;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (id)preferredCallProviderAsString:(int)arg1;
@property(nonatomic) BOOL hasPreferredCallProvider;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (int)StringAsDestinationType:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDestinationType;
- (id)contactsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long contactsCount;
- (void)addContacts:(id)arg1;
- (void)clearContacts;
- (int)StringAsCallCapability:(id)arg1;
- (id)callCapabilityAsString:(int)arg1;
@property(nonatomic) BOOL hasCallCapability;
- (int)StringAsAudioRoute:(id)arg1;
- (id)audioRouteAsString:(int)arg1;
@property(nonatomic) BOOL hasAudioRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

