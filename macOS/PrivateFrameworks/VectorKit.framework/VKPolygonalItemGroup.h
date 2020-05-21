//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableOrderedSet, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface VKPolygonalItemGroup : NSObject
{
    unsigned int _cullingMask;
    struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> _fillMeshInfo;
    vector_74364602 _fillMeshes;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _fillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _strokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueEndCapCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueWallHorizontalStrokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _venueWallVerticalStrokeCullingGroups;
    struct unordered_map<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>, std::__1::hash<SectionKey>, std::__1::equal_to<std::__1::pair<void *, unsigned long>>, std::__1::allocator<std::__1::pair<const std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>>>> _polygonEdges;
    unordered_set_bb7a56cc _featureIds;
    struct Box<float, 3> _boundingBox;
    float _tileZoom;
    float _contentScale;
    struct vector<ggl::Batcher, std::__1::allocator<ggl::Batcher>> _fillRenderItemBatchers;
    struct vector<ggl::Batcher, std::__1::allocator<ggl::Batcher>> _strokeRenderItemBatchers;
    Matrix_8746f91e _centroid;
    NSMutableOrderedSet *_attributeSets;
    struct unordered_map<StyleQueryOverride, std::__1::vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, (anonymous namespace)::StyleQueryOverrideHash, std::__1::equal_to<StyleQueryOverride>, std::__1::allocator<std::__1::pair<const StyleQueryOverride, std::__1::vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>>>> _styleQueries;
    shared_ptr_a3c46825 _styleManager;
    struct PolygonRouteAttributes _routeAttributes;
    _Bool _isFixedSize;
    _Bool _stylesUpToDate;
    _Bool _hasRouteAttributes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) Matrix_8746f91e centroid; // @synthesize centroid=_centroid;
@property(readonly, nonatomic) _Bool isFixedSize; // @synthesize isFixedSize=_isFixedSize;
@property(readonly, nonatomic) unsigned int cullingMask; // @synthesize cullingMask=_cullingMask;
- (void)clearRouteAttributes;
- (void)setRouteAttributes:(const struct PolygonRouteAttributes *)arg1;
- (void)updateCachedStyles;
@property(readonly, nonatomic) const unordered_set_bb7a56cc *featureIds;
- (_Bool)hasFeatureId:(unsigned long long)arg1;
- (_Bool)canAcceptPolygon:(CDStruct_dce90927 *)arg1;
- (void)didFinishAddingData;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;
- (unsigned char)indexForGeoFeatureAttributes:(id)arg1;
- (const MultiRange_4bdc93a8 *)commitRangesToVerticalVenueWallStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const MultiRange_4bdc93a8 *)commitRangesToHorizontalVenueWallStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const MultiRange_4bdc93a8 *)commitRangesToVenueWallEndCapRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const MultiRange_4bdc93a8 *)commitRangesToVenueWallRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const MultiRange_4bdc93a8 *)commitRangesToStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_5fd0b804)arg4;
- (const MultiRange_4bdc93a8 *)commitRangesToFillRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_5fd0b804)arg4;
@property(readonly, nonatomic) vector_74364602 *fillMeshes;
@property(readonly, nonatomic) float tileZoom;
- (vector_b346fa92 *)styleQueries:(const struct StyleQueryOverride *)arg1;
@property(readonly, nonatomic) Matrix_811b2232 size;
@property(readonly, nonatomic) const Matrix_811b2232 *maxPoint;
@property(readonly, nonatomic) const Matrix_811b2232 *origin;
@property(readonly, nonatomic) NSOrderedSet *attributeSets;
- (unsigned char)maxAttributeSetsPerGroup;
- (void)dealloc;
- (id)initWithStyleQuery:(shared_ptr_c5d816ee *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const Matrix_8746f91e *)arg3 contentScale:(float)arg4;

@end

