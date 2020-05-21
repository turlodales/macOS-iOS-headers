//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class GEOMapRegion;

@interface VKCameraRegionRestriction : NSObject <NSSecureCoding>
{
    Box_3d7e3c2c _singleRestrictionMercator;
    Box_3d7e3c2c _westOfDatelineMercator;
    Box_3d7e3c2c _eastOfDatelineMercator;
    Box_3d7e3c2c _singleRestrictionCoord;
    Box_3d7e3c2c _westOfDatelineCoord;
    Box_3d7e3c2c _eastOfDatelineCoord;
    BOOL _empty;
    GEOMapRegion *_mapRegion;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty; // @synthesize empty=_empty;
@property(readonly, retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)radianSingleRect:(Box_3d7e3c2c *)arg1 westOfDatelineRect:(Box_3d7e3c2c *)arg2 eastOfDatelineRect:(Box_3d7e3c2c *)arg3;
- (Matrix_2bdd42a3)clampedPositionForOrigin:(Matrix_2bdd42a3)arg1 delta:(Matrix_2bdd42a3)arg2;
- (Matrix_2bdd42a3)clampedPosition:(Matrix_2bdd42a3)arg1 usingSingleRestriction:(Box_3d7e3c2c)arg2 westOfDatelineRestriction:(Box_3d7e3c2c)arg3 eastOfDatelineRestriction:(Box_3d7e3c2c)arg4 wrapRange:(Range_26cd5faa)arg5;
- (Matrix_2bdd42a3)clampedPosition:(Matrix_2bdd42a3)arg1;
- (CDStruct_c3b9c2ee)clampedCoordinate:(CDStruct_c3b9c2ee)arg1;
- (BOOL)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)dealloc;
- (id)initWithMapRegion:(id)arg1;

@end

