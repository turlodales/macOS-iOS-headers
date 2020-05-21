//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOTransitArtworkDataSource.h"
#import "NSCopying.h"

@class GEOPBTransitIcon, GEOPBTransitShield, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_accessibilityString;
    GEOPBTransitShield *_iconFallbackShield;
    GEOPBTransitIcon *_icon;
    GEOPBTransitShield *_shield;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _artworkType;
    int _artworkUse;
    int _badge;
    struct {
        unsigned int has_artworkType:1;
        unsigned int has_artworkUse:1;
        unsigned int has_badge:1;
        unsigned int read_unknownFields:1;
        unsigned int read_accessibilityString:1;
        unsigned int read_iconFallbackShield:1;
        unsigned int read_icon:1;
        unsigned int read_shield:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_accessibilityString:1;
        unsigned int wrote_iconFallbackShield:1;
        unsigned int wrote_icon:1;
        unsigned int wrote_shield:1;
        unsigned int wrote_artworkType:1;
        unsigned int wrote_artworkUse:1;
        unsigned int wrote_badge:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *accessibilityString;
@property(readonly, nonatomic) BOOL hasAccessibilityString;
- (void)_readAccessibilityString;
- (int)StringAsBadge:(id)arg1;
- (id)badgeAsString:(int)arg1;
@property(nonatomic) BOOL hasBadge;
@property(nonatomic) int badge;
@property(retain, nonatomic) GEOPBTransitShield *iconFallbackShield;
@property(readonly, nonatomic) BOOL hasIconFallbackShield;
- (void)_readIconFallbackShield;
@property(retain, nonatomic) GEOPBTransitIcon *icon;
@property(readonly, nonatomic) BOOL hasIcon;
- (void)_readIcon;
@property(retain, nonatomic) GEOPBTransitShield *shield;
@property(readonly, nonatomic) BOOL hasShield;
- (void)_readShield;
- (int)StringAsArtworkUse:(id)arg1;
- (id)artworkUseAsString:(int)arg1;
@property(nonatomic) BOOL hasArtworkUse;
@property(nonatomic) int artworkUse;
- (int)StringAsArtworkType:(id)arg1;
- (id)artworkTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasArtworkType;
@property(nonatomic) int artworkType;
- (id)initWithData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) id <GEOTransitTextDataSource> textDataSource;
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) int artworkUseType;
@property(readonly, nonatomic) int artworkSourceType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

