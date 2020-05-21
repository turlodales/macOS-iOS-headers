//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMutableArray, NSResponder, NSToolbar, NSToolbarClippedItemsIndicatorViewer, NSToolbarItem;

@interface NSToolbarView : NSView
{
    NSToolbar *_toolbar;
    NSToolbarClippedItemsIndicatorViewer *_clipIndicatorViewer;
    void *_lastEventProcessedForValidation;
    NSMutableArray *_layoutOrderedItemViewers;
    NSMutableArray *_toolbarOrderedItemViewers;
    NSToolbarItem *_dragDataItem;
    long long _dragDataItemViewerStartIndex;
    BOOL _dragDataItemShouldBeRemoved;
    NSToolbarItem *_dragDataInsertionGapItem;
    struct CGPoint _dragDataLastPoint;
    NSToolbar *_actingPaletteTargetToolbar;
    long long _layoutEnabledCount;
    double _earliestDateToStartDragAnimation;
    NSToolbar *_savedToolbar;
    struct __tbvFlags {
        unsigned int _layoutInProgress:1;
        unsigned int _sizingToFit:1;
        unsigned int _isEditing:1;
        unsigned int _inCustomizationMode:1;
        unsigned int _reserved:1;
        unsigned int _enabledAsDragSrc:1;
        unsigned int _enabledAsDragDest:1;
        unsigned int _usePaletteLabels:1;
        unsigned int _validatesItems:1;
        unsigned int _forceItemsToBeMinSize:1;
        unsigned int _useGridAlignment:1;
        unsigned int _autosizesToFitHorizontally:1;
        unsigned int transparentBackground:1;
        unsigned int _horizontalBaselineDrawingDisabled:1;
        unsigned int suppressedClipIndicatorDuringAnimation:1;
        unsigned int weStartedDrag:1;
        unsigned int dragOptimizationOn:1;
        unsigned int dragIsInsideView:1;
        unsigned int insertionOptimizationShouldEndAfterUpdates:1;
        unsigned int wantsKeyboardLoop:1;
        unsigned int clipIndicatorWasFirstResponder:1;
        unsigned int scheduledDelayedValidateVisibleItems:1;
        unsigned int canDeferDelayedValidateVisibleItems:1;
        unsigned int skippedLayoutWhileDisabled:1;
        unsigned int shouldHideAfterKeyboardHotKeyEvent:1;
        unsigned int _subviewLayoutInProgress:1;
        unsigned int RESERVED:6;
    } _tbvFlags;
    NSResponder *_windowPriorFirstResponder;
    char *_delayedValidationCancel;
}

+ (id)defaultMenu;
+ (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
+ (id)newViewForToolbar:(id)arg1 inWindow:(id)arg2 attachedToEdge:(unsigned long long)arg3;
- (void)_setLayoutInProgress:(BOOL)arg1;
- (BOOL)_layoutInProgress;
- (BOOL)_hasTransparentBackground;
- (void)_windowIsAddingOrRemovingSheet:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)_scheduleDelayedValidationAfterTime:(double)arg1;
- (void)_cancelAnyDelayedValidation;
- (unsigned long long)_autovalidationTypeForEvent:(id)arg1;
- (unsigned long long)_autovalidationTypeForTypedCharacters:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_noteToolbarShowsBaselinePropertyChanged;
- (void)_noteToolbarLayoutChanged;
- (void)_noteToolbarDisplayModeChanged;
- (void)_noteToolbarSizeModeChanged;
- (void)_noteToolbarModeChangedAndUpdateItemViewers:(SEL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)_shouldUseEngineFrameForResizingWithOldSuperviewSize:(struct CGSize)arg1;
- (double)_distanceFromBaseToTopOfWindow;
- (void)_sizeHorizontallyToFitWidth:(double)arg1;
- (void)_sizeHorizontallyToFit;
- (void)_sizeVerticallyToFit;
- (struct CGRect)_calcToolbarFrame;
- (void)_sizeToFit:(BOOL)arg1;
- (void)_endLiveResize;
- (void)_layoutDirtyItemViewersAndTileToolbar;
- (double)_minimumWidthEnsuringVisibilityOfAllItems;
- (struct __NSToolbarLayoutMetrics)_toolbarMetrics;
- (BOOL)_isToolbarDirectionOppositeOfSystemDirection;
- (struct _NSRange)_rangeOfCenteredItemsForItemViewers:(id)arg1;
- (double)_maximumItemViewerHeight;
- (void)_setNeedsDisplayForItemViewers:(id)arg1 movingFromFrames:(struct CGRect *)arg2 toFrames:(struct CGRect *)arg3;
- (BOOL)preservesContentDuringLiveResize;
- (BOOL)_layoutEnabled;
- (void)_enableLayout;
- (void)_disableLayout;
- (void)_fullLayout;
- (void)_setNeedsDisplayForItemIdentifierSelection:(id)arg1;
- (void)_setNeedsDisplayForItemViewerSelection:(id)arg1;
- (void)_setNeedsViewerLayout:(BOOL)arg1 itemViewers:(id)arg2;
- (void)_setNeedsModeConfiguration:(BOOL)arg1 itemViewers:(id)arg2;
- (long long)userInterfaceLayoutDirection;
- (id)description;
- (struct CGSize)_minimumSizeEnsuringVisibilityOfItem:(id)arg1;
- (struct CGAffineTransform)_getPixelAligningTransformForLayout;
- (void)_makeSureItemViewersInArray:(id)arg1 areSubviews:(BOOL)arg2 from:(long long)arg3 to:(long long)arg4;
- (void)_cycleWindows:(id)arg1;
- (void)_invalidateEffectiveVibrantBlendingStyle;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;
- (void)viewDidMoveToSuperview;
- (void)_makeFirstResponderForKeyboardHotKeyEvent;
- (id)_computePriorFirstResponder;
- (void)_returnFirstResponderToWindowFromKeyboardHotKeyEvent;
- (BOOL)_isKeyLoopGroup;
- (void)_computeToolbarItemKeyboardLoopIfNecessary;
- (void)_computeToolbarItemKeyboardLoop;
- (void)_detatchNextAndPreviousForAllSubviews;
- (void)_detatchNextAndPreviousForView:(id)arg1;
- (void)_makeSureFirstResponderIsNotInInvisibleItemViewer;
- (void)_removeClipIndicatorFromSuperview;
- (id)_clippedItemViewers;
- (id)_visibleItemViewers;
- (id)_allItems;
- (void)_superSetFrameSize:(struct CGSize)arg1;
- (void)_syncItemSetAndUpdateItemViewersWithSEL:(SEL)arg1 setNeedsModeConfiguration:(BOOL)arg2 sizeToFit:(BOOL)arg3 setNeedsDisplay:(BOOL)arg4 updateKeyLoop:(BOOL)arg5;
- (void)_syncItemSet;
- (void)_adjustClipIndicatorPosition;
- (void)_setClipIndicatorItemsFromItemViewers:(id)arg1;
- (void)_createClipIndicatorIfNecessary;
- (void)layout;
- (BOOL)_subviewLayoutInProgress;
- (void)_setBaselineSeparatorStyle:(long long)arg1;
- (long long)_baselineSeparatorStyle;
- (void)_updateBaselineView;
- (struct CGRect)_frameForBaselineView:(id)arg1;
- (void)_setBaselineView:(id)arg1;
- (id)_baselineView;
- (void)updateLayer;
- (Class)_classToCheckForWantsUpdateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawBackgroundFillInClipRect:(struct CGRect)arg1;
- (id)_currentBackgroundColor;
- (BOOL)_drawsBaseline;
- (void)_windowChangedKeyState;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)_mouseUpWithEvent:(id)arg1 forView:(id)arg2;
- (void)_addToolbarItemToToolbarFromMenuItem:(id)arg1;
- (void)removeToolbarItem:(id)arg1;
- (void)_printVerboseDebuggingInformation:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)resetToolbarToDefaultConfiguration:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_hitTest:(struct CGPoint *)arg1 dragTypes:(id)arg2;
- (id)_findHitItemViewer:(struct CGPoint)arg1;
- (id)_hitTestToBlockWindowResizing:(struct CGPoint)arg1 forResizeDirection:(long long)arg2;
- (BOOL)_shouldStealHitTestForCurrentEvent;
- (BOOL)_isEditing;
- (BOOL)_isInConfigurationMode;
- (BOOL)_isInCustomizationWindow;
- (BOOL)_isInCustomizationMode;
- (void)_endCustomizationMode;
- (void)_beginCustomizationMode;
- (void)_beginTempEditingMode;
- (void)_forceResetTexturedWindowDragMargins;
- (double)_leadingFlexibleSpaceOffset;
- (struct CGRect)_validItemViewerBoundsAssumingClipIndicatorShown;
- (struct CGRect)_validItemViewerBounds;
- (struct CGRect)_validItemViewerBoundsAssumingClipIndicatorNotShown;
- (void)_unsuppressClipIndicatorAfterAnimationIfNecessary;
- (void)_suppressClipIndicatorDuringAnimation;
- (void)set_clipIndicator:(id)arg1;
- (id)_clipIndicator;
- (BOOL)_clipIndicatorIsShowing;
- (void)_swapToolbarItemViewerAfterView:(id)arg1;
- (void)_swapToolbarItemViewerPreviousToView:(id)arg1;
- (void)_swapToolbarItemViewerInDirection:(long long)arg1 relativeToView:(id)arg2;
- (void)_selectToolbarItemViewerAfterView:(id)arg1;
- (void)_selectToolbarItemViewerPreviousToView:(id)arg1;
- (void)_selectToolbarItemViewerInDirection:(long long)arg1 relativeToView:(id)arg2;
- (long long)numberOfItems;
- (id)clippedItems;
- (id)visibleItems;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (Class)_toolbarItemViewerClass;
- (void)_endSubviewsBeingBorrowed;
- (void)_beginSubviewsBeingBorrowed;
- (id)toolbar;
- (void)setToolbar:(id)arg1;
- (BOOL)_isPaletteView;
- (BOOL)_wantsKeyboardLoop;
- (void)_setWantsKeyboardLoop:(BOOL)arg1;
- (id)_validDestinationForDragsWeInitiate;
- (void)_setDrawsBaseline:(BOOL)arg1;
- (void)_setForceItemsToBeMinSize:(BOOL)arg1;
- (void)_setAllItemsTransparentBackground:(BOOL)arg1;
- (void)dealloc;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (BOOL)_inTexturedWindow;
- (void)_toolbarDidChangeDraggedTypesFrom:(id)arg1 to:(id)arg2;
- (BOOL)wantsLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)privateDragTypes;
- (void)_toolbarViewCommonInit;
- (void)adjustToWindow:(id)arg1 attachedToEdge:(unsigned long long)arg2;
- (const struct __NSToolbarMetrics *)_metrics;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)_setImageOnDragSession:(id)arg1 withOffset:(struct CGPoint)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)_beginSrcDragItemWithEvent:(id)arg1;
- (BOOL)_isItemViewerMoveable:(id)arg1;
- (BOOL)_beginSrcDragItemViewerWithEvent:(id)arg1;
- (double)_computeEarliestDateForDragAnimationForInfo:(id)arg1;
- (unsigned long long)_draggingModeForInfo:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)_wantsUserCancelledOperation;
- (BOOL)_canMoveItemAsSource:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)dstDraggingDepositedAtPoint:(struct CGPoint)arg1 draggingInfo:(id)arg2;
- (void)dstDraggingExitedAtPoint:(struct CGPoint)arg1 draggingInfo:(id)arg2;
- (void)_dstDraggingExitedAtPoint:(struct CGPoint)arg1 draggingInfo:(id)arg2 stillInViewBounds:(BOOL)arg3;
- (unsigned long long)dstDraggingMovedToPoint:(struct CGPoint)arg1 draggingInfo:(id)arg2;
- (unsigned long long)dstDraggingEnteredAtPoint:(struct CGPoint)arg1 draggingInfo:(id)arg2;
- (id)_itemForDraggingInfo:(id)arg1 draggingSource:(id)arg2;
- (BOOL)_isAcceptableDragSource:(id)arg1 pasteboard:(id)arg2 dragInfo:(id)arg3;
- (unsigned long long)_findIndexOfFirstDuplicateItemWithItemIdentifier:(id)arg1;
- (struct CGPoint)convertOriginForRTLIfNecessary:(struct CGPoint)arg1 view:(id)arg2;
- (void)beginUpdateInsertionAnimationAtIndex:(long long)arg1 throwAwayCacheWhenDone:(BOOL)arg2;
- (void)_dragEndedNotification:(id)arg1;
- (void)_endInsertionOptimizationWithDragSource:(id)arg1 force:(BOOL)arg2;
- (void)_startInsertionOptimizationWithDragSource:(id)arg1;
- (void)insertItemViewer:(id)arg1 atIndex:(long long)arg2;
- (void)removeItemViewerAtIndex:(long long)arg1;
- (long long)_layoutOrderInsertionIndexForPoint:(struct CGPoint)arg1 previousIndex:(long long)arg2;
- (id)_dragDataInsertionGapItemViewer;
- (id)_createInsertionGapItemForItemViewer:(id)arg1 forDraggingSource:(id)arg2;
- (struct CGRect)_rectOfItemAtIndex:(long long)arg1;
- (id)_dragDataItemViewer;
- (id)_computeDragImageFromItemViewer:(id)arg1;
- (id)_findItemViewerAtPoint:(struct CGPoint)arg1;
- (void)_unregisterForToolbarNotifications:(id)arg1;
- (void)_registerForToolbarNotifications:(id)arg1;
- (void)_toolbarContentsAttributesChanged:(id)arg1;
- (void)_toolbarAttributesChanged:(id)arg1;
- (void)_toolbarContentsChanged:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsSelectedChildrenAttributeSettable;
- (id)accessibilitySelectedChildrenAttribute;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsOverflowButtonAttributeSettable;
- (id)accessibilityOverflowButtonAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end

