//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRVolumeControlAvailabilityProtobuf : PBCodable <NSCopying>
{
    int _volumeCapabilities;
    BOOL _volumeControlAvailable;
    struct {
        unsigned int volumeCapabilities:1;
        unsigned int volumeControlAvailable:1;
    } _has;
}

@property(nonatomic) int volumeCapabilities; // @synthesize volumeCapabilities=_volumeCapabilities;
@property(nonatomic) BOOL volumeControlAvailable; // @synthesize volumeControlAvailable=_volumeControlAvailable;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasVolumeCapabilities;
@property(nonatomic) BOOL hasVolumeControlAvailable;

@end

