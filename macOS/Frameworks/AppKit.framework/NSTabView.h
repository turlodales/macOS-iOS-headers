//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSFont, NSLayoutConstraint, NSTabViewItem;

@interface NSTabView : NSView
{
    id _tabViewItems;
    NSTabViewItem *_selectedTabViewItem;
    NSFont *_font;
    struct __NSTabViewTypeFlags {
        unsigned int tabViewBorderType:3;
        unsigned int tabPosition:5;
        unsigned int reserved:24;
    } _typeFlags;
    BOOL _allowTruncatedLabels;
    id <NSTabViewDelegate> _delegate;
    BOOL _tabViewUnusedBOOL1;
    BOOL _drawsBackground;
    NSTabViewItem *_pressedTabViewItem;
    long long _endTabWidth;
    long long _maxOverlap;
    double _tabHeight;
    NSTabViewItem *_tabViewItemWithKeyView;
    NSView *_originalNextKeyView;
    NSLayoutConstraint *_tabViewMinimumSizeConstraint;
    struct __NSTabViewDelegateRespondTo {
        unsigned int shouldSelectTabViewItem:1;
        unsigned int willSelectTabViewItem:1;
        unsigned int didSelectTabViewItem:1;
        unsigned int didChangeNumberOfTabViewItems:1;
        unsigned int reserved:28;
    } _delegateRespondTo;
    struct __NSTabViewFlags {
        unsigned int needsLayout:1;
        unsigned int controlTint:3;
        unsigned int controlSize:2;
        unsigned int wiringNibConnections:1;
        unsigned int wiringInteriorLastKeyView:1;
        unsigned int originalNextKeyViewChanged:1;
        unsigned int liveResizeSkippedResetToolTips:1;
        unsigned int subviewsAddedForTabs:1;
        unsigned int allowsPropertyChange:1;
        unsigned int ownedByTabViewController:1;
        unsigned int reserved:19;
    } _flags;
    NSTabViewItem *_focusedTabViewItem;
    void *_tabViewUnused2;
}

+ (Class)_classToCheckForRequiresConstraintBasedLayout;
+ (void)_setUsesToolTipsWhenTruncated:(BOOL)arg1;
+ (BOOL)_usesToolTipsWhenTruncated;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_doTestTabSwitchingPerformance;
- (void)_testTabSwitchingPerformance;
- (void)_setTabViewControllerAllowsPropertyChange:(BOOL)arg1;
- (BOOL)_tabViewControllerAllowsPropertyChange;
- (BOOL)_canMakePropertyChange;
- (id)_tabViewController;
- (BOOL)_tabViewOwnedByTabViewController;
- (void)_setTabViewItems:(id)arg1;
- (void)_setEndTabWidth:(double)arg1;
- (void)_setNeedsLayout:(BOOL)arg1;
- (void)_setCurrentTabHeight:(double)arg1;
- (double)_currentTabHeight;
- (void)_setMaxOverlap:(double)arg1;
- (double)_maxOverlap;
- (void)springLoadingExited:(id)arg1;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (void)springLoadingHighlightChanged:(id)arg1;
- (unsigned long long)springLoadingUpdated:(id)arg1;
- (unsigned long long)springLoadingEntered:(id)arg1;
- (void)_springLoadItem;
- (void)_setTabViewItemForSpringLoading:(id)arg1;
- (id)_tabViewItemForSpringLoading;
- (id)_hitTest:(struct CGPoint *)arg1 dragTypes:(id)arg2;
- (BOOL)mouseTracker:(id)arg1 didStopTrackingWithEvent:(id)arg2;
- (BOOL)mouseTracker:(id)arg1 shouldContinueTrackingWithEvent:(id)arg2;
- (BOOL)mouseTracker:(id)arg1 shouldStartTrackingWithEvent:(id)arg2;
- (id)_highlightColorForCell:(id)arg1;
- (id)_pressedTabViewItem;
- (void)_setPressedTabViewItem:(id)arg1;
- (void)_systemColorChanged:(id)arg1;
- (void)_invalidateTabsCache;
- (struct CGSize)_frameSizeForContentSize:(struct CGSize)arg1;
@property(readonly) struct CGRect contentRect;
- (void)_resizeSelectedTabViewItem;
- (void)removeFromSuperviewWithoutNeedingDisplay;
- (void)removeFromSuperview;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)_layoutTabs;
- (double)_doLayoutTabs:(double)arg1;
- (double)_tabHeight;
- (double)_endTabWidth;
- (double)_totalMinimumTabsLengthWithOverlap:(double)arg1;
- (double)_totalNominalTabsLengthWithOverlap:(double)arg1;
- (double)_totalTabsLength:(BOOL)arg1 overlap:(double)arg2;
@property(readonly) struct CGSize minimumSize;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(long long)arg2;
- (void)updateConstraints;
- (void)_setLayoutEngine:(id)arg1;
- (BOOL)_shouldUseSeparateLayoutEngineForItem:(id)arg1;
- (void)_updateMinimumSizeConstraint;
- (void)setTabViewMinimumSizeConstraint:(id)arg1;
- (id)tabViewMinimumSizeConstraint;
- (id)initWithCoder:(id)arg1;
- (id)_old_initWithCoder_NSTabView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_old_encodeWithCoder_NSTabView:(id)arg1;
@property __weak id <NSTabViewDelegate> delegate;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_windowChangedKeyState;
- (void)_drawBackgroundAndBorderInRect:(struct CGRect)arg1;
- (void)_drawBezelBorderInBounds:(struct CGRect)arg1 clipRect:(struct CGRect)arg2;
- (struct CGRect)_frameForBezelBorder;
- (BOOL)_coreUIDrawBezelInRect:(struct CGRect)arg1 withClip:(struct CGRect)arg2 flipped:(BOOL)arg3;
- (struct __CFDictionary *)_createCoreUIMaskOnlyBezelOptionsForTabItem:(id)arg1;
- (struct __CFDictionary *)_createCoreUIBezelOptionsFlipped:(BOOL)arg1;
- (struct CGRect)_hackFrameToMatchLegacyBezelRect:(struct CGRect)arg1;
- (int)_vibrancyBlendMode;
- (BOOL)allowsVibrancy;
- (BOOL)_coreUIDrawTab:(id)arg1 withState:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (struct __CFDictionary *)_copyCoreUIOptionsForTabViewItem:(id)arg1 withState:(unsigned long long)arg2 maskOnly:(BOOL)arg3 inRect:(struct CGRect)arg4;
- (struct CGRect)_tabRectForTabViewItem:(id)arg1;
- (struct CGRect)_themeTabAndBarArea;
- (struct CGRect)_themeContentRect;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)_minimumSizeNeedForTabItemLabel:(id)arg1;
- (struct CGSize)_nominalSizeNeedForTabItemLabel:(id)arg1;
- (struct CGRect)_titleRectForTabViewItem:(id)arg1;
- (struct CGRect)_labelRectForTabRect:(struct CGRect)arg1 forItem:(id)arg2;
- (void)_drawTabViewItem:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_drawThemeTab:(id)arg1 withState:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawTabsInDirtyRect:(struct CGRect)arg1;
- (void)_removeTabButtonSubviewIfNeeded;
- (void)_addTabViewButtonsIfNeeded;
- (void)_updateTabViewButtons;
- (void)_updateTabViewButtonsFrame;
- (struct CGRect)_tabViewButtonFrame;
- (void)_setTabViewButtons:(id)arg1;
- (id)_tabViewButtons;
- (BOOL)_usesSubviewsForButtons;
- (void)_removeBackgroundBezelLayer;
- (void)_updateBackgroundBezelLayerIfRequired;
- (void)_setBackgroundBezelMaskLayer:(id)arg1;
- (id)_backgroundBezelMaskLayer;
- (void)_setBackgroundBezelLayer:(id)arg1;
- (id)_backgroundBezelLayer;
- (struct CGRect)_bezelLayerFrame;
- (void)_addAndUpdateBezelLayerIfNeeded;
- (void)_didRemoveLayer;
- (void)updateLayer;
- (Class)_classToCheckForWantsUpdateLayer;
- (void)layout;
- (void)_performTabLayoutIfNeeded;
- (void)viewDidChangeBackingProperties;
- (void)_redisplayForStateChange;
- (BOOL)_shouldAppearActive;
- (double)_currentBorderWidth;
- (id)_currentBorderColor;
- (id)_currentBackgroundColor;
- (struct CGRect)focusRingMaskBounds;
- (void)drawFocusRingMask;
- (void)_accessibilityUpdateKeyboardFocusRingForTabViewItem:(id)arg1;
- (void)_setKeyboardFocusRingNeedsDisplayForTabViewItem:(id)arg1;
- (void)_setNeedsDisplayForTabViewItem:(id)arg1;
- (struct CGRect)_tabRectAdjustedForOverlap:(struct CGRect)arg1;
- (void)performClick:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)_keyboardNavigateToTabByDelta:(long long)arg1;
- (void)_keyboardNavigateToTabAtIndex:(long long)arg1;
- (void)_keyboardNavigateDoSelectOfFocusItem:(id)arg1;
- (void)_cancelDelayedKeyboardNavigationTabSwitch;
- (void)_previousNextTab:(long long)arg1 loop:(BOOL)arg2;
- (long long)_findPreviousNextTab:(long long)arg1 loop:(BOOL)arg2 invertForR2L:(BOOL)arg3 startingAtTabItem:(id)arg4;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (id)tabViewItemAtPoint:(struct CGPoint)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)selectPreviousTabViewItem:(id)arg1;
- (void)selectNextTabViewItem:(id)arg1;
- (void)selectLastTabViewItem:(id)arg1;
- (void)selectFirstTabViewItem:(id)arg1;
- (void)selectTabViewItemWithIdentifier:(id)arg1;
- (void)selectTabViewItemAtIndex:(long long)arg1;
- (void)takeSelectedTabViewItemFromSender:(id)arg1;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)selectTabViewItem:(id)arg1;
- (BOOL)_shouldSelectTabViewItem:(id)arg1;
- (void)_switchInitialFirstResponder:(id)arg1 lastKeyView:(id)arg2 forTabViewItem:(id)arg3;
- (id)_originalNextKeyView;
- (void)_concludeDefaultKeyLoopComputation;
- (void)_primitiveSetDefaultNextKeyView:(id)arg1;
- (id)_recursiveSetDefaultKeyViewLoop;
- (void)_recursiveBreakKeyViewLoop;
- (void)_prepareForDefaultKeyLoopComputation;
- (void)_primitiveSetPreviousKeyView:(id)arg1;
- (void)_primitiveSetNextKeyView:(id)arg1;
- (void)_finishedMakingConnections;
- (BOOL)_wiringNibConnections;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (BOOL)_isViewValidOriginalNextKeyView:(id)arg1;
- (void)setNextKeyView:(id)arg1;
- (void)_setNextKeyViewFor:(id)arg1 toNextKeyView:(id)arg2;
- (void)_setInteriorNextKeyView:(id)arg1;
- (void)_switchTabViewItem:(id)arg1 oldView:(id)arg2 withTabViewItem:(id)arg3 newView:(id)arg4 initialFirstResponder:(id)arg5 lastKeyView:(id)arg6;
- (id)_findFirstValidKeyViewStartingFrom:(id)arg1 inTabViewItem:(id)arg2;
- (BOOL)_hasKeyboardFocusInTabItem:(id)arg1;
- (BOOL)_hasKeyboardFocus;
- (id)currentEditor;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_removeTabViewItems:(id)arg1;
- (void)removeTabViewItem:(id)arg1;
- (void)insertTabViewItem:(id)arg1 atIndex:(long long)arg2;
- (void)addTabViewItem:(id)arg1;
- (void)_addedTab:(id)arg1 atIndex:(long long)arg2;
@property unsigned long long controlSize;
@property unsigned long long controlTint;
- (void)_didChangeTabViewType;
- (void)_willChangeTabViewType;
@property unsigned long long tabViewBorderType;
@property unsigned long long tabPosition;
@property unsigned long long tabViewType;
- (void)_setTabViewTypeFlags:(unsigned long long)arg1;
@property(retain) NSFont *font;
@property BOOL allowsTruncatedLabels;
- (void)_setWindow:(id)arg1;
- (id)_tabEnumerationFromLeftToRight;
- (BOOL)_tabIndexIsRightOrBottom:(unsigned long long)arg1;
- (BOOL)_tabIndexIsLeftOrTop:(unsigned long long)arg1;
- (BOOL)_tabsAreR2L;
- (BOOL)isOpaque;
@property BOOL drawsBackground;
- (BOOL)_hasBezelBorder;
- (BOOL)_hasTabs;
- (BOOL)_hasHorizontalOrientation;
- (unsigned long long)_tabOrientation;
- (BOOL)isFlipped;
@property(readonly) long long numberOfTabViewItems;
@property(readonly) NSTabViewItem *selectedTabViewItem;
- (long long)indexOfTabViewItemWithIdentifier:(id)arg1;
- (id)tabViewItemAtIndex:(long long)arg1;
- (long long)indexOfTabViewItem:(id)arg1;
@property(copy) NSArray *tabViewItems;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsContentsAttributeSettable;
- (id)accessibilityContentsAttribute;
- (BOOL)accessibilityIsTabsAttributeSettable;
- (id)accessibilityTabsAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityFocusedAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (id)ns_widgetType;

@end

