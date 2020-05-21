//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOAddress, GEOPDAddressObject, NSString, PBDataReader;

@interface GEORPAddress : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOPDAddressObject *_addressObject;
    NSString *_addressString;
    GEOAddress *_geoAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_addressObject:1;
        unsigned int read_addressString:1;
        unsigned int read_geoAddress:1;
        unsigned int wrote_addressObject:1;
        unsigned int wrote_addressString:1;
        unsigned int wrote_geoAddress:1;
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
@property(retain, nonatomic) GEOPDAddressObject *addressObject;
@property(readonly, nonatomic) BOOL hasAddressObject;
- (void)_readAddressObject;
@property(retain, nonatomic) NSString *addressString;
@property(readonly, nonatomic) BOOL hasAddressString;
- (void)_readAddressString;
@property(retain, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic) BOOL hasGeoAddress;
- (void)_readGeoAddress;
- (id)initWithData:(id)arg1;
- (id)init;

@end

