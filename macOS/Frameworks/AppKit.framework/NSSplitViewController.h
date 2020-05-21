//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSSplitViewDelegate.h"
#import "NSUserInterfaceValidations.h"

@class NSArray, NSSplitView, NSString;

@interface NSSplitViewController : NSViewController <NSSplitViewDelegate, NSUserInterfaceValidations>
{
    NSSplitView *_splitView;
    id _splitViewControllerPrivateData;
}

- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)toggleSidebar:(id)arg1;
- (id)_sidebarItemForToggling;
- (void)_splitView:(id)arg1 didStopOverlayingView:(id)arg2;
- (void)_splitView:(id)arg1 didStartOverlayingView:(id)arg2;
- (void)setHidesFirstDivider:(BOOL)arg1;
- (BOOL)hidesFirstDivider;
- (void)setHidesLastDivider:(BOOL)arg1;
- (BOOL)hidesLastDivider;
- (void)_setHoldingPriority:(float)arg1 forSplitViewItem:(id)arg2;
- (float)_splitView:(id)arg1 holdingPriorityForViewAtIndex:(long long)arg2;
- (id)_splitViewItemSizesAfterSplitViewItem:(id)arg1 isCollapsed:(BOOL)arg2;
- (void)_collapse:(BOOL)arg1 splitViewItem:(id)arg2 forceOverlay:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_shouldUseConstraintAnimationToCollapseItem:(id)arg1 withWindowResize:(BOOL)arg2;
- (long long)_shrinkingWindowAnchorEdgeToShowItem:(id)arg1 withSize:(struct CGSize)arg2 atIndex:(long long)arg3;
- (long long)_growingWindowAnchorEdgeToShowItem:(id)arg1 withSize:(struct CGSize)arg2 atIndex:(long long)arg3;
- (BOOL)_shouldShrinkWindowToShowItem:(id)arg1 withSize:(struct CGSize)arg2;
- (BOOL)_shouldGrowWindowToShowItem:(id)arg1 withSize:(struct CGSize)arg2;
- (BOOL)_canOverlaySplitViewItem:(id)arg1;
- (id)_splitView:(id)arg1 appearanceForDividerAtIndex:(long long)arg2;
- (long long)_splitView:(id)arg1 blendingModeForDividerAtIndex:(long long)arg2;
- (BOOL)_splitView:(id)arg1 shouldHaveVibrantDividerAtIndex:(long long)arg2;
- (BOOL)_splitView:(id)arg1 canSpringLoadRevealArrangedSubview:(id)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (BOOL)splitView:(id)arg1 doubleClickedOnDividerAtIndex:(long long)arg2;
- (BOOL)_splitView:(id)arg1 canLiveCollapseArrangedSubview:(id)arg2;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)_indexOfSplitViewItem:(id)arg1;
- (id)_arrangedViewForSplitViewItem:(id)arg1;
- (id)_splitViewItemForArrangedView:(id)arg1;
- (id)_splitViewItemForViewAtIndex:(long long)arg1;
- (id)_splitViewItemForViewControllerAtIndex:(unsigned long long)arg1;
- (id)splitViewItemForViewController:(id)arg1;
- (void)removeSplitViewItem:(id)arg1;
- (void)_insertArrangedView:(id)arg1 atIndex:(long long)arg2;
- (long long)_viewInsertionIndexForSplitViewItem:(id)arg1;
- (void)_insertWrapperViewIntoSplitViewForSplitViewItem:(id)arg1 atIndex:(long long)arg2;
- (void)insertSplitViewItem:(id)arg1 atIndex:(long long)arg2;
- (void)addSplitViewItem:(id)arg1;
@property(copy) NSArray *splitViewItems;
@property double minimumThicknessForInlineSidebars;
- (void)setMinimumSizeForInlineSidebars:(double)arg1;
- (double)minimumSizeForInlineSidebars;
- (void)removeChildViewControllerAtIndex:(long long)arg1;
- (void)insertChildViewController:(id)arg1 atIndex:(long long)arg2;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)_updateSplitViewPositioningConstraints;
- (void)_tearDownSplitView;
- (void)_setupSplitView;
- (void)viewDidLoad;
- (void)loadView;
- (void)setView:(id)arg1;
- (struct CGRect)_splitViewFrame;
- (struct CGRect)_defaultFrame;
@property(retain) NSSplitView *splitView;
- (id)_makeSplitViewWithFrame:(struct CGRect)arg1;
- (id)_splitView;
- (void)_updateSplitView:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)_viewControllerSupports10_10Features;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)splitViewItem:(id)arg1 didChangeCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)splitViewItem:(id)arg1 isChangingCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)splitViewItem:(id)arg1 willChangeCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_stopObservingEdgeHover;
- (void)_uncollapseEdgeRevealItem:(id)arg1;
- (void)_startObservingEdgeHover;
- (void)_updateHasItemToRevealOnEdgeHover;
- (void)_setHasItemToRevealOnEdgeHover:(BOOL)arg1;
- (BOOL)_hasItemToRevealOnEdgeHover;
- (void)_didExitFullscreen:(id)arg1;
- (void)_didEnterFullscreen:(id)arg1;
- (void)_stopObservingFullscreenForWindow:(id)arg1;
- (void)_startObservingFullscreenForWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

