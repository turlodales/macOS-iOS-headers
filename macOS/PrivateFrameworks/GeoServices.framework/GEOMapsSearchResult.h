//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOAddress, GEOPlaceActionDetails, PBDataReader;

@interface GEOMapsSearchResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOAddress *_address;
    unsigned long long _muid;
    GEOPlaceActionDetails *_placeActionDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_muid:1;
        unsigned int read_address:1;
        unsigned int read_placeActionDetails:1;
        unsigned int wrote_address:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_placeActionDetails:1;
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
@property(retain, nonatomic) GEOPlaceActionDetails *placeActionDetails;
@property(readonly, nonatomic) BOOL hasPlaceActionDetails;
- (void)_readPlaceActionDetails;
@property(retain, nonatomic) GEOAddress *address;
@property(readonly, nonatomic) BOOL hasAddress;
- (void)_readAddress;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) unsigned long long muid;
- (id)initWithData:(id)arg1;
- (id)init;

@end

