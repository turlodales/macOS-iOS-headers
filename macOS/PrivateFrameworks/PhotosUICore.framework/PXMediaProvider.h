//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXLoadingStatusManager;

@interface PXMediaProvider : NSObject
{
    PXLoadingStatusManager *_loadingStatusManager;
}

+ (id)preheatQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) PXLoadingStatusManager *loadingStatusManager; // @synthesize loadingStatusManager=_loadingStatusManager;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)cancelImageRequest:(long long)arg1;
@property(readonly, nonatomic) struct CGSize masterThumbnailSize;
- (void)enumerateAvailableThumbnailDataFormats:(CDUnknownBlockType)arg1;
- (void)preheatThumbnailDataForAssets:(id)arg1 origin:(long long)arg2 targetSize:(struct CGSize)arg3;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg4;
- (long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end

