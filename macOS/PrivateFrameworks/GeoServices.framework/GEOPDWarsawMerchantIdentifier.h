//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWarsawMerchantIdentifier : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_merchantDomain;
    NSString *_merchantId;
    NSString *_merchantName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_merchantDomain:1;
        unsigned int read_merchantId:1;
        unsigned int read_merchantName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_merchantDomain:1;
        unsigned int wrote_merchantId:1;
        unsigned int wrote_merchantName:1;
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
@property(retain, nonatomic) NSString *merchantId;
@property(readonly, nonatomic) BOOL hasMerchantId;
- (void)_readMerchantId;
@property(retain, nonatomic) NSString *merchantName;
@property(readonly, nonatomic) BOOL hasMerchantName;
- (void)_readMerchantName;
@property(retain, nonatomic) NSString *merchantDomain;
@property(readonly, nonatomic) BOOL hasMerchantDomain;
- (void)_readMerchantDomain;
- (id)initWithData:(id)arg1;
- (id)init;

@end

