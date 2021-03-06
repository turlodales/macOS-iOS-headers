//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVTouchBarTrackView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVTouchBarVideoTrackView : AVTouchBarTrackView
{
    NSMutableArray *_thumbnailsAndFilteredImages;
    BOOL _allPreviewLayersHaveContent;
}

+ (double)thumbnailGenerationToleranceForNumberOfThumbnails:(unsigned long long)arg1 contentDuration:(double)arg2;
- (void).cxx_destruct;
- (id)_filterImage:(id)arg1 size:(struct CGSize)arg2;
- (void)updatePreviewLayerContentForThumbnailsAndFilteredImages:(id)arg1;
- (void)updatePreviewLayerContent;
- (struct CGSize)sizeForPreviewLayerWithIndex:(long long)arg1;
- (struct CGPoint)positionForPreviewLayerWithIndex:(long long)arg1;
- (long long)numberOfPreviewLayersForWidth:(double)arg1;
- (BOOL)allPreviewLayersHaveContent;
- (id)makePreviewLayer;
- (struct CGSize)previewLayerSize;
- (id)thumbnailForTime:(double)arg1;
- (double)thumbnailGenerationToleranceForCurrentSize;
- (void)removeAllThumbnails;
- (void)addThumbnails:(id)arg1;

@end

