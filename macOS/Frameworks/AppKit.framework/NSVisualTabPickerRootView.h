//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSScrollView, NSVisualTabPickerGridView, NSVisualTabPickerRootViewController, NSVisualTabPickerSearchField;

__attribute__((visibility("hidden")))
@interface NSVisualTabPickerRootView : NSView
{
    NSScrollView *_scrollView;
    NSView *_topBarView;
    NSVisualTabPickerGridView *_gridView;
    NSVisualTabPickerSearchField *_searchField;
    NSVisualTabPickerRootViewController *_visualTabPickerViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSVisualTabPickerRootViewController *visualTabPickerViewController; // @synthesize visualTabPickerViewController=_visualTabPickerViewController;
@property(readonly, nonatomic) NSVisualTabPickerSearchField *searchField; // @synthesize searchField=_searchField;
@property(readonly, nonatomic) NSVisualTabPickerGridView *gridView; // @synthesize gridView=_gridView;
- (id)_tabPickerThumbnailViews;
- (void)setUpSubviewsShowingNewTabButton:(BOOL)arg1 highlightingTiles:(BOOL)arg2 showingCloseButtons:(BOOL)arg3;
- (void)_startTopBarAndCloudViewAnimation:(long long)arg1;
- (void)_startPerspectiveAnimation:(long long)arg1;
- (void)_getTopBarAnimationDuration:(double *)arg1 timeOffset:(double *)arg2 gridAnimation:(long long)arg3;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)showSearchField;
- (void)makeSearchFieldFirstResponder;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)startGridAnimation:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelOperation:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1 visualTabPickerViewController:(id)arg2;

@end

