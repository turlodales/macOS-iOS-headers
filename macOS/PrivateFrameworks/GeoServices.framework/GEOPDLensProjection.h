//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface GEOPDLensProjection : PBCodable <NSCopying>
{
    double _cx;
    double _cy;
    double _fovH;
    double _fovS;
    double _k2;
    double _k3;
    double _k4;
    double _lx;
    double _ly;
    int _type;
    struct {
        unsigned int has_cx:1;
        unsigned int has_cy:1;
        unsigned int has_fovH:1;
        unsigned int has_fovS:1;
        unsigned int has_k2:1;
        unsigned int has_k3:1;
        unsigned int has_k4:1;
        unsigned int has_lx:1;
        unsigned int has_ly:1;
        unsigned int has_type:1;
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
@property(nonatomic) BOOL hasLy;
@property(nonatomic) double ly;
@property(nonatomic) BOOL hasLx;
@property(nonatomic) double lx;
@property(nonatomic) BOOL hasCy;
@property(nonatomic) double cy;
@property(nonatomic) BOOL hasCx;
@property(nonatomic) double cx;
@property(nonatomic) BOOL hasK4;
@property(nonatomic) double k4;
@property(nonatomic) BOOL hasK3;
@property(nonatomic) double k3;
@property(nonatomic) BOOL hasK2;
@property(nonatomic) double k2;
@property(nonatomic) BOOL hasFovH;
@property(nonatomic) double fovH;
@property(nonatomic) BOOL hasFovS;
@property(nonatomic) double fovS;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;

@end

