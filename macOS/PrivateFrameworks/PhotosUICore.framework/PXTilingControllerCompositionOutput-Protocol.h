//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXTilingController, PXTilingScrollInfo;

@protocol PXTilingControllerCompositionOutput <NSObject>
- (void)setContentBounds:(struct CGRect)arg1 scrollBounds:(struct CGRect)arg2 scrollInfo:(PXTilingScrollInfo *)arg3;
- (void)setOrigin:(struct CGPoint)arg1 forTilingController:(PXTilingController *)arg2;
- (void)setReferenceSize:(struct CGSize)arg1 contentInset:(struct NSEdgeInsets)arg2 forTilingController:(PXTilingController *)arg3;
@end

