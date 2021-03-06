//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLogMsgStateDeviceIdentifier;

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying>
{
    GEOLogMsgStateDeviceIdentifier *_pairedDeviceIdentifier;
    int _type;
    BOOL _isConnected;
    struct {
        unsigned int has_type:1;
        unsigned int has_isConnected:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) GEOLogMsgStateDeviceIdentifier *pairedDeviceIdentifier;
@property(readonly, nonatomic) BOOL hasPairedDeviceIdentifier;
@property(nonatomic) BOOL hasIsConnected;
@property(nonatomic) BOOL isConnected;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;

@end

