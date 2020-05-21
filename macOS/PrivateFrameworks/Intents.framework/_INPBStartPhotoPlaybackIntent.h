//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBStartPhotoPlaybackIntent.h"

@class NSString, _INPBContactList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation, _INPBString, _INPBStringList;

@interface _INPBStartPhotoPlaybackIntent : PBCodable <_INPBStartPhotoPlaybackIntent, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _excludedAttributes;
    CDStruct_95bda58d _includedAttributes;
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBString *_albumName;
    _INPBContactList *_contentPerson;
    _INPBDateTimeRange *_dateCreated;
    _INPBIntentMetadata *_intentMetadata;
    _INPBStringList *_keywordString;
    _INPBLocation *_locationCreated;
    _INPBContactList *_peopleInPhoto;
    _INPBStringList *_searchTerm;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBStringList *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) _INPBContactList *peopleInPhoto; // @synthesize peopleInPhoto=_peopleInPhoto;
@property(retain, nonatomic) _INPBLocation *locationCreated; // @synthesize locationCreated=_locationCreated;
@property(retain, nonatomic) _INPBStringList *keywordString; // @synthesize keywordString=_keywordString;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDateTimeRange *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) _INPBContactList *contentPerson; // @synthesize contentPerson=_contentPerson;
@property(retain, nonatomic) _INPBString *albumName; // @synthesize albumName=_albumName;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasSearchTerm;
@property(readonly, nonatomic) BOOL hasPeopleInPhoto;
@property(readonly, nonatomic) BOOL hasLocationCreated;
@property(readonly, nonatomic) BOOL hasKeywordString;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (int)StringAsIncludedAttributes:(id)arg1;
- (id)includedAttributesAsString:(int)arg1;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long includedAttributesCount;
- (void)addIncludedAttribute:(int)arg1;
- (void)clearIncludedAttributes;
@property(readonly, nonatomic) int *includedAttributes;
- (void)setIncludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)StringAsExcludedAttributes:(id)arg1;
- (id)excludedAttributesAsString:(int)arg1;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long excludedAttributesCount;
- (void)addExcludedAttribute:(int)arg1;
- (void)clearExcludedAttributes;
@property(readonly, nonatomic) int *excludedAttributes;
- (void)setExcludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL hasDateCreated;
@property(readonly, nonatomic) BOOL hasContentPerson;
@property(readonly, nonatomic) BOOL hasAlbumName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

