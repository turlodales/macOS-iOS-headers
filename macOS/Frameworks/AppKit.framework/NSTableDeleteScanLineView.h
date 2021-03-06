//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBackgroundColorView, NSColor;

__attribute__((visibility("hidden")))
@interface NSTableDeleteScanLineView : NSView
{
    NSBackgroundColorView *_topLineView;
    NSBackgroundColorView *_bottomLineView;
}

@property(copy) NSColor *deleteLineColor; // @dynamic deleteLineColor;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end

