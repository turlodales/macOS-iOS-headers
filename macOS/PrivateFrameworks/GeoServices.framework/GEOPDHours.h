//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDHoursThreshold, PBDataReader, PBUnknownFields;

@interface GEOPDHours : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _days;
    struct GEOPDLocalTimeRange *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
    GEOPDHoursThreshold *_hoursThreshold;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_days:1;
        unsigned int read_timeRanges:1;
        unsigned int read_hoursThreshold:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_days:1;
        unsigned int wrote_timeRanges:1;
        unsigned int wrote_hoursThreshold:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (id)completeOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (BOOL)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (id)_allHoursForPlaceData:(id)arg1;
+ (BOOL)operatingHoursAvailableForPlaceData:(id)arg1;
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
@property(retain, nonatomic) GEOPDHoursThreshold *hoursThreshold;
@property(readonly, nonatomic) BOOL hasHoursThreshold;
- (void)_readHoursThreshold;
- (void)setTimeRanges:(struct GEOPDLocalTimeRange *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsTimeRange:(struct GEOPDLocalTimeRange)arg1;
- (void)addTimeRange:(struct GEOPDLocalTimeRange)arg1;
- (void)clearTimeRanges;
@property(readonly, nonatomic) struct GEOPDLocalTimeRange *timeRanges;
@property(readonly, nonatomic) unsigned long long timeRangesCount;
- (void)_readTimeRanges;
- (int)StringAsDays:(id)arg1;
- (id)daysAsString:(int)arg1;
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;
- (int)dayAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsDay:(int)arg1;
- (void)addDay:(int)arg1;
- (void)clearDays;
@property(readonly, nonatomic) int *days;
@property(readonly, nonatomic) unsigned long long daysCount;
- (void)_readDays;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

