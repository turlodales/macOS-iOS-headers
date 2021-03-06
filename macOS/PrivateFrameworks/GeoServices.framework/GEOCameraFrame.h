//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOCameraFrame : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _altitude;
    double _latitude;
    double _longitude;
    double _pitch;
    double _roll;
    double _yaw;
    struct {
        unsigned int has_altitude:1;
        unsigned int has_latitude:1;
        unsigned int has_longitude:1;
        unsigned int has_pitch:1;
        unsigned int has_roll:1;
        unsigned int has_yaw:1;
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
@property(nonatomic) BOOL hasRoll;
@property(nonatomic) double roll;
@property(nonatomic) BOOL hasPitch;
@property(nonatomic) double pitch;
@property(nonatomic) BOOL hasYaw;
@property(nonatomic) double yaw;
@property(nonatomic) BOOL hasAltitude;
@property(nonatomic) double altitude;
@property(nonatomic) BOOL hasLongitude;
@property(nonatomic) double longitude;
@property(nonatomic) BOOL hasLatitude;
@property(nonatomic) double latitude;

@end

