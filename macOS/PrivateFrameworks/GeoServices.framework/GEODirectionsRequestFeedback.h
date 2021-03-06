//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEODirectionsRequestFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_appIdentifier;
    NSString *_requestingAppId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _purpose;
    int _source;
    struct {
        unsigned int has_purpose:1;
        unsigned int has_source:1;
        unsigned int read_unknownFields:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_requestingAppId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_appIdentifier:1;
        unsigned int wrote_requestingAppId:1;
        unsigned int wrote_purpose:1;
        unsigned int wrote_source:1;
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
@property(retain, nonatomic) NSString *requestingAppId;
@property(readonly, nonatomic) BOOL hasRequestingAppId;
- (void)_readRequestingAppId;
@property(retain, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) BOOL hasAppIdentifier;
- (void)_readAppIdentifier;
- (int)StringAsSource:(id)arg1;
- (id)sourceAsString:(int)arg1;
@property(nonatomic) BOOL hasSource;
@property(nonatomic) int source;
- (int)StringAsPurpose:(id)arg1;
- (id)purposeAsString:(int)arg1;
@property(nonatomic) BOOL hasPurpose;
@property(nonatomic) int purpose;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2 andIdentifier:(id)arg3;
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2;
- (id)initWithPurpose:(int)arg1;

@end

