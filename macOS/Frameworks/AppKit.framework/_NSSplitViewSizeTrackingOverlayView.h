//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSSplitView, NSTextField;

__attribute__((visibility("hidden")))
@interface _NSSplitViewSizeTrackingOverlayView : NSView
{
    NSSplitView *_splitView;
    NSView *_trackedView;
    NSTextField *_label;
}

+ (id)addTrackingViewForArrangedView:(id)arg1 inSplitView:(id)arg2;
@property(readonly) NSSplitView *splitView; // @synthesize splitView=_splitView;
@property(readonly) NSView *trackedView; // @synthesize trackedView=_trackedView;
- (void)_updateMetricsLabel;
- (void)_windowDidResize:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)addToSplitView:(id)arg1;
- (void)setTrackedView:(id)arg1;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldBeArchived;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

