//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEODestinationInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    BOOL _hasDisplayAddress;
    BOOL _hasDisplayName;
    BOOL _hasSpokenAddress;
    BOOL _hasSpokenName;
    struct {
        unsigned int has_hasDisplayAddress:1;
        unsigned int has_hasDisplayName:1;
        unsigned int has_hasSpokenAddress:1;
        unsigned int has_hasSpokenName:1;
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
@property(nonatomic) BOOL hasHasSpokenAddress;
@property(nonatomic) BOOL hasSpokenAddress;
@property(nonatomic) BOOL hasHasDisplayAddress;
@property(nonatomic) BOOL hasDisplayAddress;
@property(nonatomic) BOOL hasHasSpokenName;
@property(nonatomic) BOOL hasSpokenName;
@property(nonatomic) BOOL hasHasDisplayName;
@property(nonatomic) BOOL hasDisplayName;

@end

