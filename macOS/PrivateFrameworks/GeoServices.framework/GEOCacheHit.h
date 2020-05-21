//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOCacheHit : PBCodable <NSCopying>
{
    unsigned int _bytes;
    unsigned int _count;
    int _requestorType;
    int _tileSourceType;
    struct {
        unsigned int has_bytes:1;
        unsigned int has_count:1;
        unsigned int has_requestorType:1;
        unsigned int has_tileSourceType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasBytes;
@property(nonatomic) unsigned int bytes;
@property(nonatomic) BOOL hasCount;
@property(nonatomic) unsigned int count;
- (int)StringAsTileSourceType:(id)arg1;
- (id)tileSourceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTileSourceType;
@property(nonatomic) int tileSourceType;
- (int)StringAsRequestorType:(id)arg1;
- (id)requestorTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestorType;
@property(nonatomic) int requestorType;

@end

