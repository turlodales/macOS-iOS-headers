//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface NSCachedTableCellView : NSControl
{
    NSImage *_cachedImage;
}

@property(retain) NSImage *cachedImage; // @synthesize cachedImage=_cachedImage;
- (int)_trackingAreasDirty;
- (void)_setTrackingAreasDirty:(int)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)dealloc;

@end

