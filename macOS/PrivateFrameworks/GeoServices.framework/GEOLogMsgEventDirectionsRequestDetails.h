//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOLogMsgEventDirectionsRequestDetails : PBCodable <NSCopying>
{
    int _destination;
    int _origin;
    int _purpose;
    BOOL _navStarted;
    struct {
        unsigned int has_destination:1;
        unsigned int has_origin:1;
        unsigned int has_purpose:1;
        unsigned int has_navStarted:1;
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
- (int)StringAsDestination:(id)arg1;
- (id)destinationAsString:(int)arg1;
@property(nonatomic) BOOL hasDestination;
@property(nonatomic) int destination;
- (int)StringAsOrigin:(id)arg1;
- (id)originAsString:(int)arg1;
@property(nonatomic) BOOL hasOrigin;
@property(nonatomic) int origin;
- (int)StringAsPurpose:(id)arg1;
- (id)purposeAsString:(int)arg1;
@property(nonatomic) BOOL hasPurpose;
@property(nonatomic) int purpose;
@property(nonatomic) BOOL hasNavStarted;
@property(nonatomic) BOOL navStarted;

@end

