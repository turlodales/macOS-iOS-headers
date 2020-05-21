//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBDataReader;

@interface GEOAnalyticsPipelineEvalStatus : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_inflightTypeCounts;
    NSMutableArray *_shadowTypeCounts;
    NSMutableArray *_storedTypeCounts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _evalModeEnabled;
    struct {
        unsigned int has_evalModeEnabled:1;
        unsigned int read_inflightTypeCounts:1;
        unsigned int read_shadowTypeCounts:1;
        unsigned int read_storedTypeCounts:1;
        unsigned int wrote_inflightTypeCounts:1;
        unsigned int wrote_shadowTypeCounts:1;
        unsigned int wrote_storedTypeCounts:1;
        unsigned int wrote_evalModeEnabled:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)shadowTypeCountsType;
+ (Class)inflightTypeCountsType;
+ (Class)storedTypeCountsType;
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
- (id)shadowTypeCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shadowTypeCountsCount;
- (void)_addNoFlagsShadowTypeCounts:(id)arg1;
- (void)addShadowTypeCounts:(id)arg1;
- (void)clearShadowTypeCounts;
@property(retain, nonatomic) NSMutableArray *shadowTypeCounts;
- (void)_readShadowTypeCounts;
- (id)inflightTypeCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)inflightTypeCountsCount;
- (void)_addNoFlagsInflightTypeCounts:(id)arg1;
- (void)addInflightTypeCounts:(id)arg1;
- (void)clearInflightTypeCounts;
@property(retain, nonatomic) NSMutableArray *inflightTypeCounts;
- (void)_readInflightTypeCounts;
- (id)storedTypeCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)storedTypeCountsCount;
- (void)_addNoFlagsStoredTypeCounts:(id)arg1;
- (void)addStoredTypeCounts:(id)arg1;
- (void)clearStoredTypeCounts;
@property(retain, nonatomic) NSMutableArray *storedTypeCounts;
- (void)_readStoredTypeCounts;
@property(nonatomic) BOOL hasEvalModeEnabled;
@property(nonatomic) BOOL evalModeEnabled;
- (id)initWithData:(id)arg1;
- (id)init;

@end

