//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBDataReader;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_direction;
    NSString *_headsign;
    unsigned long long _lineId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_lineId:1;
        unsigned int read_direction:1;
        unsigned int read_headsign:1;
        unsigned int wrote_direction:1;
        unsigned int wrote_headsign:1;
        unsigned int wrote_lineId:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
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
@property(retain, nonatomic) NSString *headsign;
@property(readonly, nonatomic) BOOL hasHeadsign;
- (void)_readHeadsign;
@property(retain, nonatomic) NSString *direction;
@property(readonly, nonatomic) BOOL hasDirection;
- (void)_readDirection;
@property(nonatomic) BOOL hasLineId;
@property(nonatomic) unsigned long long lineId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

