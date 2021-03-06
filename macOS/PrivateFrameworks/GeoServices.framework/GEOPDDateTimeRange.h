//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDateTimeRange : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOPDLocalTimeRange *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
    unsigned long long _endDate;
    unsigned long long _startDate;
    struct {
        unsigned int has_endDate:1;
        unsigned int has_startDate:1;
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
- (void)setTimeRanges:(struct GEOPDLocalTimeRange *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1;
- (void)addTimeRange:(struct GEOPDLocalTimeRange)arg1;
- (void)clearTimeRanges;
@property(readonly, nonatomic) struct GEOPDLocalTimeRange *timeRanges;
@property(readonly, nonatomic) unsigned long long timeRangesCount;
@property(nonatomic) BOOL hasEndDate;
@property(nonatomic) unsigned long long endDate;
@property(nonatomic) BOOL hasStartDate;
@property(nonatomic) unsigned long long startDate;
- (void)dealloc;
@property(readonly, nonatomic) BOOL hasValidStartAndEndDates;

@end

