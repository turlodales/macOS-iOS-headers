//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOComposedRouteStepTransitInstructionMerging.h"
#import "NSCopying.h"

@class GEOFormattedString, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitListTimeInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_primaryText;
    GEOFormattedString *_secondaryText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _hideWhenListCollapsed;
    struct {
        unsigned int has_hideWhenListCollapsed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_primaryText:1;
        unsigned int read_secondaryText:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_primaryText:1;
        unsigned int wrote_secondaryText:1;
        unsigned int wrote_hideWhenListCollapsed:1;
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
@property(nonatomic) BOOL hasHideWhenListCollapsed;
@property(nonatomic) BOOL hideWhenListCollapsed;
@property(retain, nonatomic) GEOFormattedString *secondaryText;
@property(readonly, nonatomic) BOOL hasSecondaryText;
- (void)_readSecondaryText;
@property(retain, nonatomic) GEOFormattedString *primaryText;
@property(readonly, nonatomic) BOOL hasPrimaryText;
- (void)_readPrimaryText;
- (id)initWithData:(id)arg1;
- (id)init;
- (void)_transit_prepareForDeepMergeFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

