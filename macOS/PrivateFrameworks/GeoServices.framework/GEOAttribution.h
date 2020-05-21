//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOAttribution : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
    NSString *_badgeChecksum;
    NSString *_badge;
    NSString *_logoChecksum;
    NSString *_logo;
    NSString *_name;
    NSMutableArray *_resources;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _dataSet;
    unsigned int _linkDisplayStringIndex;
    struct {
        unsigned int has_dataSet:1;
        unsigned int has_linkDisplayStringIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_regions:1;
        unsigned int read_badgeChecksum:1;
        unsigned int read_badge:1;
        unsigned int read_logoChecksum:1;
        unsigned int read_logo:1;
        unsigned int read_name:1;
        unsigned int read_resources:1;
        unsigned int read_url:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_regions:1;
        unsigned int wrote_badgeChecksum:1;
        unsigned int wrote_badge:1;
        unsigned int wrote_logoChecksum:1;
        unsigned int wrote_logo:1;
        unsigned int wrote_name:1;
        unsigned int wrote_resources:1;
        unsigned int wrote_url:1;
        unsigned int wrote_dataSet:1;
        unsigned int wrote_linkDisplayStringIndex:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)resourceType;
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
@property(nonatomic) BOOL hasLinkDisplayStringIndex;
@property(nonatomic) unsigned int linkDisplayStringIndex;
@property(nonatomic) BOOL hasDataSet;
@property(nonatomic) unsigned int dataSet;
- (void)setRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsRegion:(struct GEOTileSetRegion)arg1;
- (void)addRegion:(struct GEOTileSetRegion)arg1;
- (void)clearRegions;
@property(readonly, nonatomic) struct GEOTileSetRegion *regions;
@property(readonly, nonatomic) unsigned long long regionsCount;
- (void)_readRegions;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourcesCount;
- (void)_addNoFlagsResource:(id)arg1;
- (void)addResource:(id)arg1;
- (void)clearResources;
@property(retain, nonatomic) NSMutableArray *resources;
- (void)_readResources;
@property(retain, nonatomic) NSString *logoChecksum;
@property(readonly, nonatomic) BOOL hasLogoChecksum;
- (void)_readLogoChecksum;
@property(retain, nonatomic) NSString *badgeChecksum;
@property(readonly, nonatomic) BOOL hasBadgeChecksum;
- (void)_readBadgeChecksum;
@property(retain, nonatomic) NSString *url;
@property(readonly, nonatomic) BOOL hasUrl;
- (void)_readUrl;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
@property(retain, nonatomic) NSString *logo;
@property(readonly, nonatomic) BOOL hasLogo;
- (void)_readLogo;
@property(retain, nonatomic) NSString *badge;
@property(readonly, nonatomic) BOOL hasBadge;
- (void)_readBadge;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

