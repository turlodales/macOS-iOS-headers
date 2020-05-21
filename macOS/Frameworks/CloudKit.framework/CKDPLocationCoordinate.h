//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPDate;

@interface CKDPLocationCoordinate : PBCodable <NSCopying>
{
    double _altitude;
    double _course;
    double _horizontalAccuracy;
    double _latitude;
    double _longitude;
    double _speed;
    double _verticalAccuracy;
    CKDPDate *_timestamp;
    struct {
        unsigned int altitude:1;
        unsigned int course:1;
        unsigned int horizontalAccuracy:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int speed:1;
        unsigned int verticalAccuracy:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKDPDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double course; // @synthesize course=_course;
@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasSpeed;
@property(nonatomic) BOOL hasCourse;
@property(nonatomic) BOOL hasVerticalAccuracy;
@property(nonatomic) BOOL hasAltitude;
@property(nonatomic) BOOL hasHorizontalAccuracy;
@property(nonatomic) BOOL hasLongitude;
@property(nonatomic) BOOL hasLatitude;

@end

