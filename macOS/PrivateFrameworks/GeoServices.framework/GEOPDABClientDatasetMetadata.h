//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface GEOPDABClientDatasetMetadata : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _bucketId;
    unsigned int _datasetId;
    struct {
        unsigned int has_bucketId:1;
        unsigned int has_datasetId:1;
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
@property(nonatomic) BOOL hasDatasetId;
@property(nonatomic) unsigned int datasetId;
@property(nonatomic) BOOL hasBucketId;
@property(nonatomic) unsigned int bucketId;

@end

