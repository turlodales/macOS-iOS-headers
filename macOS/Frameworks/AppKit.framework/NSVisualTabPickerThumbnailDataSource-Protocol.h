//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString, NSView, NSVisualTabPickerThumbnailView;

@protocol NSVisualTabPickerThumbnailDataSource <NSObject>
- (BOOL)highlightStateForVisualTabPickerTileThumbnailView:(NSVisualTabPickerThumbnailView *)arg1;
- (NSImage *)imageForVisualTabPickerTileThumbnailView:(NSVisualTabPickerThumbnailView *)arg1;
- (NSView *)viewForVisualTabPickerTileThumbnailView:(NSVisualTabPickerThumbnailView *)arg1;
- (NSString *)titleForNSVisualTabPickerThumbnailView:(NSVisualTabPickerThumbnailView *)arg1;
@end

