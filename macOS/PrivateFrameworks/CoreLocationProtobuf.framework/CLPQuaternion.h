//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPQuaternion : PBCodable <NSCopying>
{
    float _w;
    float _x;
    float _y;
    float _z;
    struct {
        unsigned int w:1;
    } _has;
}

@property(nonatomic) float z; // @synthesize z=_z;
@property(nonatomic) float y; // @synthesize y=_y;
@property(nonatomic) float x; // @synthesize x=_x;
@property(nonatomic) float w; // @synthesize w=_w;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasW;

@end

