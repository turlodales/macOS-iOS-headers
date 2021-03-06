//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXLayoutGeometryArray : NSObject <NSCopying>
{
    struct _PXLayoutGeometry *_geometries;
    long long _count;
}

@property(readonly, nonatomic) unsigned long long count;
- (struct _PXLayoutGeometry)geometryAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithGeometries:(struct _PXLayoutGeometry *)arg1 count:(unsigned long long)arg2;
- (id)init;

@end

