//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PAItemRenderDescriptionObserver.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, PAImageAssetType, PAImageType, PHAsset;

@interface PAImageAsset : NSObject <PAItemRenderDescriptionObserver>
{
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    CDStruct_d459ca48 _geometry;
    long long _geometryStatus;
    PHAsset *_asset;
    PAImageAssetType *_assetType;
    CDUnknownBlockType _compositionReplacedFilter;
    NSArray *_assetClients;
}

+ (id)imageAssetWithType:(id)arg1 asset:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSArray *assetClients; // @synthesize assetClients=_assetClients;
@property(copy) CDUnknownBlockType compositionReplacedFilter; // @synthesize compositionReplacedFilter=_compositionReplacedFilter;
@property(readonly, nonatomic) PAImageAssetType *assetType; // @synthesize assetType=_assetType;
@property(retain) PHAsset *asset; // @synthesize asset=_asset;
- (BOOL)_removeImageAssetClient:(id)arg1;
- (void)_addImageAssetClient:(id)arg1;
- (BOOL)removeImageAssetClient:(id)arg1;
- (void)addImageAssetClient:(id)arg1;
- (id)_mostImportantAssetClient;
- (void)_foreachAssetClient:(CDUnknownBlockType)arg1;
- (void)forEachAssetClient:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PAImageType *imageType;
@property(readonly, copy) NSString *description;
- (void)assetDidChange:(id)arg1;
- (id)initWithType:(id)arg1 asset:(id)arg2;
- (void)compositionReplaced:(id)arg1;
- (void)composition:(id)arg1 endInteractiveForKey:(id)arg2;
- (void)composition:(id)arg1 beginInteractiveForKey:(id)arg2;
- (void)compositionChanged:(id)arg1 key:(id)arg2;
- (CDStruct_19170857)sourceOrientationForAsset:(id)arg1 adjustmentOrientation:(long long)arg2 rasterToDisplayOrientation:(long long)arg3;
- (void)_notifyGeometryChanged:(struct CGSize)arg1 orientation:(long long)arg2 updateNumber:(long long)arg3;
- (CDStruct_d459ca48)_handleAdjustmentOrientation:(long long)arg1 status:(long long)arg2;
- (CDStruct_d459ca48)handleAdjustmentOrientation:(long long)arg1;
- (void)loadAdjustmentOrientation:(CDUnknownBlockType)arg1;
- (void)_loadAdjustmentDataIfReady;
- (void)_validateImageGeometry:(BOOL)arg1;
- (void)_validatedImageGeometry:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

