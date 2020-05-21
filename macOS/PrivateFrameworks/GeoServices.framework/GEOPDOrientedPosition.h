//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOPDOrientedPosition : PBCodable <NSCopying>
{
    double _pitch;
    double _roll;
    double _x;
    double _yaw;
    double _y;
    double _z;
    struct {
        unsigned int has_pitch:1;
        unsigned int has_roll:1;
        unsigned int has_x:1;
        unsigned int has_yaw:1;
        unsigned int has_y:1;
        unsigned int has_z:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasRoll;
@property(nonatomic) double roll;
@property(nonatomic) BOOL hasPitch;
@property(nonatomic) double pitch;
@property(nonatomic) BOOL hasYaw;
@property(nonatomic) double yaw;
@property(nonatomic) BOOL hasZ;
@property(nonatomic) double z;
@property(nonatomic) BOOL hasY;
@property(nonatomic) double y;
@property(nonatomic) BOOL hasX;
@property(nonatomic) double x;

@end

