//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSearchForPhotosIntentResponse.h"

@class NSString, _INPBLocation;

@interface _INPBSearchForPhotosIntentResponse : PBCodable <_INPBSearchForPhotosIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_a60b8694 _has;
    BOOL __encodeLegacyGloryData;
    int _searchResultsCount;
    NSString *_albumName;
    _INPBLocation *_locationCreated;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int searchResultsCount; // @synthesize searchResultsCount=_searchResultsCount;
@property(retain, nonatomic) _INPBLocation *locationCreated; // @synthesize locationCreated=_locationCreated;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasSearchResultsCount;
@property(readonly, nonatomic) BOOL hasLocationCreated;
@property(readonly, nonatomic) BOOL hasAlbumName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

