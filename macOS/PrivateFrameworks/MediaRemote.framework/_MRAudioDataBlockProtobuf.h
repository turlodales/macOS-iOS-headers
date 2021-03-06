//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRAudioBufferProtobuf, _MRAudioTimeProtobuf;

@interface _MRAudioDataBlockProtobuf : PBCodable <NSCopying>
{
    double _gain;
    _MRAudioBufferProtobuf *_buffer;
    _MRAudioTimeProtobuf *_time;
    struct {
        unsigned int gain:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) double gain; // @synthesize gain=_gain;
@property(retain, nonatomic) _MRAudioTimeProtobuf *time; // @synthesize time=_time;
@property(retain, nonatomic) _MRAudioBufferProtobuf *buffer; // @synthesize buffer=_buffer;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasGain;
@property(readonly, nonatomic) BOOL hasTime;
@property(readonly, nonatomic) BOOL hasBuffer;

@end

