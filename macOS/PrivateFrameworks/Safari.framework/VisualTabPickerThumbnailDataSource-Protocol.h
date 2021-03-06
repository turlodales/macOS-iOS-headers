//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSImage, NSString, NSView, VisualTabPickerThumbnailView;

@protocol VisualTabPickerThumbnailDataSource <NSObject>
- (NSImage *)siteIconForVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (long long)muteButtonStateForVisualTabPickerTileThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (BOOL)shouldShowMuteButtonForVisualTabPickerTileThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (struct CGRect)visibleBoundsForVisualTabPickerTileThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (NSView *)viewForVisualTabPickerTileThumbnailView:(VisualTabPickerThumbnailView *)arg1 lowResolution:(BOOL)arg2;
- (NSString *)titleForVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
@end

