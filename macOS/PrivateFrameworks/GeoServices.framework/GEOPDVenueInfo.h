//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDLocatedInsideInfo, GEOPDVenueItemList, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_filterElements;
    GEOPDVenueItemList *_itemList;
    GEOPDLocatedInsideInfo *_locatedInside;
    NSMutableArray *_venueFeatureIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _featureType;
    int _goInsideLevel;
    struct {
        unsigned int has_featureType:1;
        unsigned int has_goInsideLevel:1;
        unsigned int read_unknownFields:1;
        unsigned int read_filterElements:1;
        unsigned int read_itemList:1;
        unsigned int read_locatedInside:1;
        unsigned int read_venueFeatureIds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_filterElements:1;
        unsigned int wrote_itemList:1;
        unsigned int wrote_locatedInside:1;
        unsigned int wrote_venueFeatureIds:1;
        unsigned int wrote_featureType:1;
        unsigned int wrote_goInsideLevel:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)filterElementType;
+ (Class)venueFeatureIdType;
+ (id)venueInfoForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasGoInsideLevel;
@property(nonatomic) int goInsideLevel;
- (id)filterElementAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterElementsCount;
- (void)_addNoFlagsFilterElement:(id)arg1;
- (void)addFilterElement:(id)arg1;
- (void)clearFilterElements;
@property(retain, nonatomic) NSMutableArray *filterElements;
- (void)_readFilterElements;
@property(retain, nonatomic) GEOPDLocatedInsideInfo *locatedInside;
@property(readonly, nonatomic) BOOL hasLocatedInside;
- (void)_readLocatedInside;
@property(retain, nonatomic) GEOPDVenueItemList *itemList;
@property(readonly, nonatomic) BOOL hasItemList;
- (void)_readItemList;
- (int)StringAsFeatureType:(id)arg1;
- (id)featureTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeatureType;
@property(nonatomic) int featureType;
- (id)venueFeatureIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)venueFeatureIdsCount;
- (void)_addNoFlagsVenueFeatureId:(id)arg1;
- (void)addVenueFeatureId:(id)arg1;
- (void)clearVenueFeatureIds;
@property(retain, nonatomic) NSMutableArray *venueFeatureIds;
- (void)_readVenueFeatureIds;
- (id)initWithData:(id)arg1;
- (id)init;

@end

