//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

@interface GEOMapRegion : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _eastLng;
    double _northLat;
    double _southLat;
    NSMutableArray *_vertexs;
    double _westLng;
    int _mapRegionSourceType;
    struct {
        unsigned int has_eastLng:1;
        unsigned int has_northLat:1;
        unsigned int has_southLat:1;
        unsigned int has_westLng:1;
        unsigned int has_mapRegionSourceType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)vertexType;
+ (id)_geo_mapRegionForGEOCoordinateRegion:(CDStruct_90e2a262)arg1;
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
- (int)StringAsMapRegionSourceType:(id)arg1;
- (id)mapRegionSourceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMapRegionSourceType;
@property(nonatomic) int mapRegionSourceType;
- (id)vertexAtIndex:(unsigned long long)arg1;
- (unsigned long long)vertexsCount;
- (void)addVertex:(id)arg1;
- (void)clearVertexs;
@property(retain, nonatomic) NSMutableArray *vertexs;
@property(nonatomic) BOOL hasEastLng;
@property(nonatomic) double eastLng;
@property(nonatomic) BOOL hasNorthLat;
@property(nonatomic) double northLat;
@property(nonatomic) BOOL hasWestLng;
@property(nonatomic) double westLng;
@property(nonatomic) BOOL hasSouthLat;
@property(nonatomic) double southLat;
- (id)coordinates;
@property(readonly, nonatomic) BOOL hasRectangleVertices;
- (BOOL)isValid;
@property(readonly, nonatomic) double spanLng;
@property(readonly, nonatomic) double spanLat;
@property(readonly, nonatomic) double centerLng;
@property(readonly, nonatomic) double centerLat;
- (void)setMapRect:(CDStruct_90e2a262)arg1;
- (id)initWithRadialPlace:(id)arg1;
- (id)initWithMapRect:(CDStruct_90e2a262)arg1;
- (id)initWithCoordinateRegion:(CDStruct_90e2a262)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (BOOL)intersectsMapRect:(CDStruct_90e2a262)arg1;
- (BOOL)containsMapRect:(CDStruct_90e2a262)arg1;
- (BOOL)containsCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (BOOL)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (BOOL)containsRegion:(id)arg1;

@end

