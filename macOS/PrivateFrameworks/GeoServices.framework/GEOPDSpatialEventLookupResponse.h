//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialEventLookupResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _categorys;
    GEOLatLng *_center;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOPDMapsIdentifier *_poiId;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_center:1;
        unsigned int read_eventDateTimes:1;
        unsigned int read_eventId:1;
        unsigned int read_poiId:1;
        unsigned int read_timezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_categorys:1;
        unsigned int wrote_center:1;
        unsigned int wrote_eventDateTimes:1;
        unsigned int wrote_eventId:1;
        unsigned int wrote_poiId:1;
        unsigned int wrote_timezone:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)eventDateTimeType;
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
@property(retain, nonatomic) GEOPDMapsIdentifier *poiId;
@property(readonly, nonatomic) BOOL hasPoiId;
- (void)_readPoiId;
@property(retain, nonatomic) GEOTimezone *timezone;
@property(readonly, nonatomic) BOOL hasTimezone;
- (void)_readTimezone;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventDateTimesCount;
- (void)_addNoFlagsEventDateTime:(id)arg1;
- (void)addEventDateTime:(id)arg1;
- (void)clearEventDateTimes;
@property(retain, nonatomic) NSMutableArray *eventDateTimes;
- (void)_readEventDateTimes;
- (int)StringAsCategorys:(id)arg1;
- (id)categorysAsString:(int)arg1;
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsCategory:(int)arg1;
- (void)addCategory:(int)arg1;
- (void)clearCategorys;
@property(readonly, nonatomic) int *categorys;
@property(readonly, nonatomic) unsigned long long categorysCount;
- (void)_readCategorys;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) BOOL hasCenter;
- (void)_readCenter;
@property(retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property(readonly, nonatomic) BOOL hasEventId;
- (void)_readEventId;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

