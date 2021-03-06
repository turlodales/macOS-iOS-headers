//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXGItemsLayout;

@protocol PXGItemsLayoutDelegate <NSObject>

@optional
- (void)itemsLayout:(PXGItemsLayout *)arg1 updateTagsInSpriteInfos:(CDStruct_9d1ebe49 *)arg2 forItemsInRange:(struct _NSRange)arg3;
- (struct CGRect)itemsLayout:(PXGItemsLayout *)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3;
- (double)itemsLayout:(PXGItemsLayout *)arg1 aspectRatioForItem:(long long)arg2;
- (long long)itemsLayout:(PXGItemsLayout *)arg1 itemForObjectReference:(id)arg2;
@end

