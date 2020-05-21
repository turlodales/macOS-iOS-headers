//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    double _disambiguationRadiusMeters;
    double _distance;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _opaqueGeoId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _placeType;
    struct {
        unsigned int has_disambiguationRadiusMeters:1;
        unsigned int has_distance:1;
        unsigned int has_opaqueGeoId:1;
        unsigned int has_placeType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_center:1;
        unsigned int read_mapsId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_center:1;
        unsigned int wrote_disambiguationRadiusMeters:1;
        unsigned int wrote_distance:1;
        unsigned int wrote_mapsId:1;
        unsigned int wrote_opaqueGeoId:1;
        unsigned int wrote_placeType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property(readonly, nonatomic) BOOL hasMapsId;
- (void)_readMapsId;
@property(nonatomic) BOOL hasDisambiguationRadiusMeters;
@property(nonatomic) double disambiguationRadiusMeters;
- (int)StringAsPlaceType:(id)arg1;
- (id)placeTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceType;
@property(nonatomic) int placeType;
@property(nonatomic) BOOL hasDistance;
@property(nonatomic) double distance;
@property(nonatomic) BOOL hasOpaqueGeoId;
@property(nonatomic) unsigned long long opaqueGeoId;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) BOOL hasCenter;
- (void)_readCenter;
- (id)initWithData:(id)arg1;
- (id)init;

@end

