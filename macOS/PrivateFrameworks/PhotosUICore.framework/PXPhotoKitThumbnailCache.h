//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCacheDelegate.h"
#import "PXPhotoLibraryUIChangeObserver.h"

@class NSCache, NSMutableDictionary, NSString, PHPhotoLibrary;

@interface PXPhotoKitThumbnailCache : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver>
{
    NSCache *_cache;
    PHPhotoLibrary *_photoLibrary;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_cachedThumbnailIndexByObjectID;
    unsigned long long _sizeLimit;
    NSString *_label;
}

- (void).cxx_destruct;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) unsigned long long sizeLimit; // @synthesize sizeLimit=_sizeLimit;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)cacheThumbnailData:(id)arg1 specification:(const struct PHAssetResourceTableDataSpecification *)arg2 forAsset:(id)arg3;
- (id)tableThumbnailDataForAsset:(id)arg1 dataSpecification:(struct PHAssetResourceTableDataSpecification *)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithSizeLimit:(unsigned long long)arg1 photoLibrary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

