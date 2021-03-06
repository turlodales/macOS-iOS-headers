//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveEventTracker/NSCopying-Protocol.h>

@class PETAggregationKey, PETDistribution;

@interface PETAggregatedMessage : PBCodable <NSCopying>
{
    unsigned int _count;
    PETDistribution *_distribution;
    PETAggregationKey *_key;
    struct {
        unsigned int count:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PETDistribution *distribution; // @synthesize distribution=_distribution;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(retain, nonatomic) PETAggregationKey *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDistribution;
@property(nonatomic) BOOL hasCount;
@property(readonly, nonatomic) BOOL hasKey;

@end

