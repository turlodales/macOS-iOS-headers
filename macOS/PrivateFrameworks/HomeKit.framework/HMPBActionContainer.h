//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class HMPBCharacteristicWriteAction, HMPBMediaPlaybackAction;

@interface HMPBActionContainer : PBCodable <NSCopying>
{
    HMPBCharacteristicWriteAction *_characteristicWriteAction;
    HMPBMediaPlaybackAction *_mediaPlaybackAction;
    int _type;
    struct {
        unsigned int type:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMPBMediaPlaybackAction *mediaPlaybackAction; // @synthesize mediaPlaybackAction=_mediaPlaybackAction;
@property(retain, nonatomic) HMPBCharacteristicWriteAction *characteristicWriteAction; // @synthesize characteristicWriteAction=_characteristicWriteAction;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasMediaPlaybackAction;
@property(readonly, nonatomic) BOOL hasCharacteristicWriteAction;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

