//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXAssetReference;

@interface _PXAssetsSceneAnchor : NSObject
{
    PXAssetReference *_assetReference;
    double _distance;
    struct CGPoint _anchorOrigin;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) struct CGPoint anchorOrigin; // @synthesize anchorOrigin=_anchorOrigin;
@property(readonly, nonatomic) PXAssetReference *assetReference; // @synthesize assetReference=_assetReference;
- (id)initWithAssetReference:(id)arg1 anchorOrigin:(struct CGPoint)arg2 distance:(double)arg3;

@end

