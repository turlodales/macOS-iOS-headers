//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PAImaging/PAImageAsset.h>

@class NUComposition;

@interface PAPreviewImageAsset : PAImageAsset
{
    NUComposition *_composition;
    long long _updateNumber;
    CDStruct_19170857 _orientation;
}

- (void).cxx_destruct;
- (void)assetDidChange:(id)arg1;
- (void)_notifyClientsRenderNeeded:(id)arg1 orientation:(CDStruct_19170857)arg2 updateNumber:(long long)arg3 isInteractive:(BOOL)arg4;
- (id)compositionForFullSizeOutput:(id)arg1 uti:(id)arg2 size:(struct CGSize)arg3;
- (void)_resolveSource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadComposition;
- (void)_addImageAssetClient:(id)arg1;
- (long long)_imageOrientation;
- (struct PFIntSize_st)_originalImageSize;
- (long long)previewOrientation;
- (struct CGSize)previewSize;

@end

