//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKLabelNavTileData : NSObject
{
    shared_ptr_702c344d _tile;
    NSMapTable *_geoJunctionToJunctionMap;
    NSMutableArray *_tileEdgeJunctions;
    BOOL _foundTileEdgeJunctions;
    BOOL _oppositeCarriagewayJunctionsValid;
    NSMutableArray *_oppositeCarriagewayJunctions;
    struct vector<LabelNavJunctionInfo, geo::StdAllocator<LabelNavJunctionInfo, mdm::Allocator>> _junctionInfos;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const shared_ptr_702c344d *tile; // @synthesize tile=_tile;
@property(readonly, retain, nonatomic) NSMutableArray *oppositeCarriagewayJunctions; // @synthesize oppositeCarriagewayJunctions=_oppositeCarriagewayJunctions;
@property(nonatomic) BOOL oppositeCarriagewayJunctionsValid; // @synthesize oppositeCarriagewayJunctionsValid=_oppositeCarriagewayJunctionsValid;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:(unordered_map_0cbeac3c *)arg1 distanceThreshold:(double)arg2;
- (void)appendNavJunctionsInWorldRect:(const Box_3d7e3c2c *)arg1 junctions:(id)arg2;
- (void)initializeJunctionInfos;
- (id)findTileEdgeJunctionAtCoordinate:(Matrix_8746f91e)arg1;
- (void)_findTileEdgeJunctions;
- (void)addJunction:(id)arg1;
- (id)junctionAtCoordinate:(Matrix_8746f91e)arg1;
- (id)junctionForGeoJunction:(CDStruct_3b01f0aa *)arg1;
- (void)dealloc;
- (id)initWithTile:(const shared_ptr_702c344d *)arg1;

@end

