//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VKVectorOverlayPolygon : NSObject
{
    shared_ptr_fafdf979 _geometry;
    Range_ee55b4bd _worldIndexes;
    struct unique_ptr<geo::Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double>>, std::__1::hash<unsigned char>, LRUPolicy>, std::__1::default_delete<geo::Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double>>, std::__1::hash<unsigned char>, LRUPolicy>>> _simplifiedGeometryCache;
    struct unfair_lock _simplifiedGeometryCacheLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) Range_ee55b4bd worldIndexes; // @synthesize worldIndexes=_worldIndexes;
- (shared_ptr_fafdf979)simplifiedGeometryAtZoomLevel:(unsigned char)arg1;
- (id)initWithMapPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;

@end

