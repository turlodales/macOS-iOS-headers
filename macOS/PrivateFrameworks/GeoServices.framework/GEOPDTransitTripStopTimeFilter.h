//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDDeparturePredicate, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripStopTimeFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDDeparturePredicate *_departurePredicateCountdown;
    GEOPDDeparturePredicate *_departurePredicateStamp;
    struct GEOPDTimeRange _operatingHoursRange;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _includeRealTimeDepartures;
    CDStruct_34971647 _flags;
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
@property(nonatomic) BOOL hasIncludeRealTimeDepartures;
@property(nonatomic) BOOL includeRealTimeDepartures;
@property(nonatomic) BOOL hasOperatingHoursRange;
@property(nonatomic) struct GEOPDTimeRange operatingHoursRange;
@property(retain, nonatomic) GEOPDDeparturePredicate *departurePredicateStamp;
@property(readonly, nonatomic) BOOL hasDeparturePredicateStamp;
- (void)_readDeparturePredicateStamp;
@property(retain, nonatomic) GEOPDDeparturePredicate *departurePredicateCountdown;
@property(readonly, nonatomic) BOOL hasDeparturePredicateCountdown;
- (void)_readDeparturePredicateCountdown;
- (id)initWithData:(id)arg1;
- (id)init;

@end

