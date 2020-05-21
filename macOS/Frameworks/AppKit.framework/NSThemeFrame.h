//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTitledFrame.h>

#import "NSViewLayerContentScaleDelegate.h"

@class NSButton, NSString, NSTitlebarContainerView, NSView, NSVisualEffectView;

@interface NSThemeFrame : NSTitledFrame <NSViewLayerContentScaleDelegate>
{
    NSButton *toolbarButton;
    int _toolbarVisibleStatus;
    NSView *_temporaryContentView;
    struct CGSize _showToolbarPreWindowSize;
    NSButton *fullScreenButton;
    long long leftGroupTrackingTagNum;
    long long rightGroupTrackingTagNum;
    struct {
        unsigned int mouseInsideLeftGroup:1;
        unsigned int disableMouseInsideLeftGroup:1;
        unsigned int mouseInsideRightGroup:1;
        unsigned int bottomCornerRounded:2;
        unsigned int movableByBottomBar:1;
        unsigned int removingToolbarForEnteringFullScreen:1;
        unsigned int suppressTitleBackgroundDrawing:1;
        unsigned int suppressTitleDrawing:1;
        unsigned int supresssBackgroundCellDrawing:1;
        unsigned int hasCachedWindowCornerSizes:1;
        unsigned int autoFlattenEnabled:1;
        unsigned int addingKnownSubview:1;
        unsigned int hasUnknownSubview:1;
        unsigned int titlebarViewInFullScreen:1;
        unsigned int useViewsHeight:1;
        unsigned int useViewsMinHeight:1;
        unsigned int ignoreFullScreenMask:1;
        unsigned int pendingWillChangeCount:8;
        unsigned int reserved:5;
    } _tFlags;
    int widgetState;
    NSString *_displayName;
    NSButton *lockButton;
    double topBorderThickness;
    double bottomBorderThickness;
    struct CGSize _stoplightOffset;
    double _customTitlebarHeight;
    double _customTitlebarHeightPriorToFSMode;
}

+ (void)_prepareRenameField:(id)arg1 forEditingMode:(unsigned long long)arg2;
+ (double)_fileButtonSpacingWidthForWindowWithStyleMask:(unsigned long long)arg1;
+ (struct CGSize)_sizeOfTitlebarFileButtonForWindowWithStyleMask:(unsigned long long)arg1;
+ (unsigned long long)_validateStyleMask:(unsigned long long)arg1;
+ (double)_contentToFrameMaxYHeight:(unsigned long long)arg1;
+ (double)_contentToFrameMinYHeight:(unsigned long long)arg1;
+ (double)_contentToFrameMaxXWidth:(unsigned long long)arg1;
+ (double)_contentToFrameMinXWidth:(unsigned long long)arg1;
+ (struct CGSize)sizeOfTitlebarButtons:(unsigned long long)arg1;
+ (BOOL)_resizeFromEdge;
+ (double)_resizeHeight:(unsigned long long)arg1;
+ (double)_titlebarHeight:(unsigned long long)arg1;
+ (double)_sideTitlebarWidth:(unsigned long long)arg1;
+ (double)_windowTitlebarTitleMinHeight:(unsigned long long)arg1;
+ (double)_windowSideTitlebarTitleMinWidth:(unsigned long long)arg1;
+ (double)minFrameWidthWithTitle:(id)arg1 styleMask:(unsigned long long)arg2;
+ (double)_maxXTitlebarWidgetInset:(unsigned long long)arg1;
+ (double)_minXTitlebarWidgetInset:(unsigned long long)arg1;
+ (double)_windowFileButtonSpacingWidth:(unsigned long long)arg1;
+ (double)_windowTitlebarButtonSpacingWidth:(unsigned long long)arg1;
+ (double)_minYWindowBorderHeight:(unsigned long long)arg1;
+ (double)_maxXWindowBorderWidth:(unsigned long long)arg1;
+ (double)_minXWindowBorderWidth:(unsigned long long)arg1;
+ (double)_windowBorderThickness:(unsigned long long)arg1;
+ (BOOL)automaticallyNotifiesObserversOf_backdropView;
+ (void)_installMenuTrackingObserver;
+ (id)_cuiMaskOnlyOptionsForWindowType:(struct __CFString *)arg1 cornerMask:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
+ (void)clearCornerMaskOnLayer:(id)arg1;
+ (void)drawBevel:(struct CGRect)arg1 inFrame:(struct CGRect)arg2 topCornerRounded:(BOOL)arg3 bottomCornerRounded:(BOOL)arg4;
+ (void)drawBevel:(struct CGRect)arg1 inFrame:(struct CGRect)arg2 topCornerRounded:(BOOL)arg3 bottomCornerRounded:(BOOL)arg4 isHUD:(BOOL)arg5 isDarkWindow:(BOOL)arg6;
+ (id)_renameFieldForWindowWithStyleMask:(unsigned long long)arg1;
+ (id)containingThemeFrameFromView:(id)arg1;
@property double customTitlebarHeightPriorToFSMode; // @synthesize customTitlebarHeightPriorToFSMode=_customTitlebarHeightPriorToFSMode;
- (void)_windowWillExitFullscreen:(id)arg1;
- (void)_windowWillEnterFullscreen:(id)arg1;
@property double titlebarAlphaValue;
- (void)animationDidStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_animateFromStartingTitleControlState;
- (void)_endTitleAnimation;
- (void)_updateButtonsBecauseTitleChanged:(BOOL)arg1 havingATitleChanged:(BOOL)arg2;
- (void)_beginTitleAnimation;
- (BOOL)_doLayerBackedTitleAnimations;
- (void)_setSuppressTitleControlDrawing:(BOOL)arg1;
- (void)_snapshotStartingTitleControlState;
- (struct CGRect)_titleControlRect;
- (id)_snapshotCurrentTitleControlStateInRect:(struct CGRect)arg1;
- (void)setTitle:(id)arg1;
- (void)updateTitleTextField;
- (void)_invalidateDocumentIcon;
- (void)setRepresentedFilename:(id)arg1;
- (void)setRepresentedURL:(id)arg1;
- (BOOL)_shouldShowDocumentIcon;
- (BOOL)_shouldRepresentFilename;
- (void)_setDisplayName:(id)arg1;
- (id)_displayName;
- (id)menuForEvent:(id)arg1;
- (id)menu;
- (BOOL)handleMouseDragged:(id)arg1;
- (BOOL)handleRightMouseDown:(id)arg1;
- (BOOL)handleMouseDown:(id)arg1;
- (id)_windowForFSMouseEventInTransparentTitlebar:(id)arg1;
- (BOOL)_mouseIsInTitleOrIconArea:(id)arg1;
- (BOOL)shouldAttemptResize;
- (BOOL)_shouldDoClientSideDragWithEvent:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)_shouldSendMouseDownToAutosaveButton:(id)arg1;
- (void)allowTitleDrawing;
- (void)_renamingDidEndNormally:(BOOL)arg1;
- (void)_didEnd:(BOOL)arg1 renameWithTitle:(id)arg2 editingRange:(struct _NSRange)arg3 grantHandler:(CDUnknownBlockType)arg4;
- (void)_willStartRenameWithTitle:(id)arg1 editingRange:(struct _NSRange)arg2;
- (BOOL)_mouseInTitleRect:(id)arg1;
- (BOOL)_mouseInPopupRect:(id)arg1;
- (BOOL)_inactiveButtonsNeedMask;
- (BOOL)_hasToolbar;
- (BOOL)_hidingToolbar;
- (BOOL)_hidingTitlebar;
- (BOOL)_hidingTitlebarOrInAnotherWindow;
- (BOOL)alwaysShowTitlebar;
- (BOOL)_hasCustomTitlebarHeight;
- (BOOL)_isFullScreen;
- (BOOL)_isMiniaturizable;
- (BOOL)_isClosable;
- (BOOL)_isResizable;
- (BOOL)_isSheet;
- (void)_setSheet:(BOOL)arg1;
- (double)_sheetHeightAdjustment;
- (BOOL)_isUtility;
- (void)_resetTitleFont;
- (void)_invalidateTitleCellSize;
- (struct CGRect)_minYBorderRect;
- (struct CGRect)_maxYBorderRect;
- (struct CGRect)_maxXBorderRect;
- (struct CGRect)_minXBorderRect;
- (struct CGRect)_texturedMaxXminYResizeRect;
- (double)_contentToFrameMaxYHeight;
- (double)_contentToFrameMinYHeight;
- (double)_contentToFrameMaxXWidth;
- (double)_contentToFrameMinXWidth;
- (double)_maxXTitlebarDragWidth;
- (double)_minXTitlebarDragWidth;
- (double)_maxYTitlebarDragHeight;
- (struct CGRect)_autosaveButtonRevealOverRect;
@property double buttonRevealAmount; // @dynamic buttonRevealAmount;
@property(readonly) double titleHeightToHideInFullScreen; // @dynamic titleHeightToHideInFullScreen;
- (struct CGRect)_commandPopupRect;
- (void)_tileTitlebarAndRedisplay:(BOOL)arg1;
- (void)_updateButtonPositions;
- (void)_setButton:(id)arg1 frameOrigin:(struct CGPoint)arg2;
- (void)_setToolbarMockView:(id)arg1;
- (id)_toolbarMockView;
- (struct CGPoint)_autosaveButtonOrigin;
- (struct CGRect)_effectiveAutosaveButtonFrame;
- (struct CGSize)_effectiveAutosaveButtonFrameSize;
- (struct CGPoint)_autosaveButtonSeparatorFieldOrigin;
- (struct CGPoint)_fileButtonOrigin;
- (struct CGPoint)_lockButtonOrigin;
- (struct CGPoint)_toolbarButtonOrigin;
- (struct CGPoint)_collapseButtonOrigin;
- (struct CGPoint)_fullScreenButtonOrigin;
- (struct CGPoint)_zoomButtonOrigin;
- (struct CGPoint)_closeButtonOrigin;
- (BOOL)_shouldCenterTrafficLights;
- (double)_maxXTitlebarButtonsWidth;
- (double)_minXTitlebarButtonsWidth;
- (double)_toolbarLeadingSpace;
- (double)_toolbarTrailingSpace;
- (double)_maxXTitlebarWidgetInset;
- (double)_minXTitlebarWidgetInset;
- (double)_windowFileButtonSpacingWidth;
- (double)_windowTitlebarButtonSpacingWidth;
- (struct CGSize)sizeOfTitlebarToolbarButton;
- (struct CGSize)_sizeOfTitlebarFileButton;
- (double)_windowTitlebarTitleMinHeight;
- (struct CGRect)titlebarRect;
- (struct CGRect)titlebarRectIncludingToolbar;
- (struct CGPoint)_adjustPointToTitlebarView:(struct CGPoint)arg1;
- (struct CGRect)_adjustRectToTitlebarView:(struct CGRect)arg1;
- (struct CGRect)_titlebarTitleRect;
- (struct CGRect)_defaultTitlebarTitleRect;
- (BOOL)_shouldFlipTitleStuffForRTL;
- (BOOL)_shouldFlipTrafficLightsForRTL;
- (struct CGRect)_maxTitlebarTitleRect;
- (double)_titlebarHeight;
@property struct CGSize stoplightOffset;
@property double customTitlebarHeight; // @synthesize customTitlebarHeight=_customTitlebarHeight;
- (double)_titlebarHeight2;
- (double)_sideTitlebarWidth;
- (double)_minYTitlebarTitleOffset;
- (double)_minYTitlebarButtonsOffset;
- (struct CGSize)_titleCellSize;
- (void)_size:(struct CGSize *)arg1 ofCell:(id)arg2 withTitle:(id)arg3;
- (double)_maxYWindowBorderHeight;
- (double)_minYWindowBorderHeight;
- (double)_maxXWindowBorderWidth;
- (double)_minXWindowBorderWidth;
- (double)_windowResizeBorderThickness;
- (double)_windowTitlebarYResizeBorderThickness;
- (double)_windowTitlebarXResizeBorderThickness;
- (double)_windowBorderThickness;
- (struct CGSize)minFrameSize;
- (double)_maxXTitlebarDecorationMinWidth;
- (double)_minXTitlebarDecorationMinWidth;
- (struct CGSize)miniaturizedSize;
- (id)_hitTestToBlockWindowResizing:(struct CGPoint)arg1 forResizeDirection:(long long)arg2;
- (BOOL)_mouseInGroup:(id)arg1;
- (void)_setTemporaryMouseOutsideLeftGroup:(BOOL)arg1;
- (void)_setMouseEnteredGroup:(BOOL)arg1 entered:(BOOL)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateMouseTracking;
- (void)_updateWidgets;
- (struct CGRect)_rightGroupRect;
- (struct CGRect)_leftGroupRect;
- (void)mouseExitedLeftButtonGroup;
- (void)mouseEnteredLeftButtonGroup;
- (struct CGRect)leftButtonGroupFrameInTitlebarView;
- (struct CGRect)_frameConvertedToSelf:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_hitTest:(struct CGPoint)arg1 ignoringResizeRegion:(BOOL)arg2;
- (BOOL)_shouldBeTreatedAsInkEventInInactiveWindow:(id)arg1;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (void)drawWindowBackgroundRegion:(struct CGSRegionObject *)arg1;
- (void)drawWindowBackgroundRect:(struct CGRect)arg1;
- (void)_drawTexturedBackgroundRegion:(struct CGSRegionObject *)arg1;
- (void)_drawTexturedThemeBackgroundRect:(struct CGRect)arg1;
- (void)_drawTexturedBackground;
- (double)_topHeightForTexturedBackground;
- (double)_additionalTopHeightForFloatingToolbar;
- (void)_drawNormalBackgroundRegion:(struct CGSRegionObject *)arg1;
- (void)_drawNormalThemeBackgroundRect:(struct CGRect)arg1;
- (void)_commonBackgroundAlphaDrawHandler:(CDUnknownBlockType)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawTexturedWindowWithClipRect:(struct CGRect)arg1;
- (void)_drawTexturedWindowWithClipRect:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)usesCustomDrawing;
- (void)_drawCoreUIHUD;
- (void)_drawCoreUIHUDInRect:(struct CGRect)arg1;
- (struct __CFString *)_currentHUDPresentationStateValue;
- (double)_bottomBarHeight;
- (double)_topBarHeight;
- (double)startingYLocationForSheets;
- (double)_topBarHeightWithoutContentBorderThickness;
- (unsigned long long)styleMask;
- (double)contentBorderThicknessForEdge:(unsigned long long)arg1;
- (void)setContentBorderThickness:(double)arg1 forEdge:(unsigned long long)arg2;
- (void)_bottomBarHeightChanged;
- (void)_titleBarViewHeightChanged;
- (void)_computeHeightOfTop:(BOOL)arg1 bottom:(BOOL)arg2;
- (void)_texturedComputeHeightOfTop:(BOOL)arg1 bottom:(BOOL)arg2;
- (void)_drawToolbarTransitionIfNecessary;
- (void)_reacquireToolbarFullScreenAuxiliaryView:(id)arg1;
- (void)_reacquireToolbarViewFromFullScreenWindowAndShow:(BOOL)arg1;
- (void)_surrenderToolbarViewForFullScreenWindow;
- (void)updateTitlebarViewBlendingMode;
- (BOOL)_needsBehindWindowBlendingForFullScreenTitlebar;
- (void)_hideToolbarWithAnimation:(BOOL)arg1;
- (void)_showToolbarWithAnimation:(BOOL)arg1;
- (void)_showHideToolbar:(int)arg1 resizeWindow:(BOOL)arg2 animate:(BOOL)arg3;
- (struct CGRect)_adjustToolbarFrameIfNecessary:(struct CGRect)arg1;
- (void)_syncBottomAuxillaryViewPositions;
- (void)_syncTopAuxillaryViewPositions;
- (void)_syncSideAuxillaryViewPositions;
- (long long)_effectiveLayoutAttributeForAttribute:(long long)arg1;
- (double)_minXInsetForAccessoryViews;
- (void)_enumerateAuxViewControllersOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_enumerateAuxViewControllersOfType:(long long)arg1 useEffectiveLayoutAttribute:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_auxViewControllers;
- (struct CGRect)_auxiliaryViewStartingFrame;
- (void)_syncToolbarPosition;
- (void)_toolbarFrameSizeChanged:(id)arg1 oldSize:(struct CGSize)arg2;
- (void)_reshapeContentAndToolbarView:(int)arg1 withOldToolbarFrameSize:(struct CGSize)arg2 resizeWindow:(BOOL)arg3 animate:(BOOL)arg4;
- (BOOL)_growWindowReshapeContentAndToolbarView:(int)arg1 withOldToolbarFrameSize:(struct CGSize)arg2 animate:(BOOL)arg3;
- (void)_layerBackedAnimateToolbarWithReason:(int)arg1 showToolbarPostWindowFrame:(struct CGRect)arg2;
- (void)_animateToolbarWithReason:(int)arg1 showToolbarPostWindowFrame:(struct CGRect)arg2;
- (void)_growContentReshapeContentAndToolbarView:(int)arg1 animate:(BOOL)arg2;
- (struct CGRect)_calculateToolbarFrameAndUpdateSize:(BOOL)arg1;
- (BOOL)_isTitlebarSubview:(id)arg1;
- (void)addTitlebarSubview:(id)arg1;
- (void)handleSetFrameCommonRedisplay;
- (BOOL)_usingToolbarShowHideWeightingOptimization;
- (void)_setToolbarShowHideResizeWeightingOptimizationOn:(BOOL)arg1;
- (struct CGRect)_contentRectIncludingToolbarAtHome;
- (struct CGRect)_contentRectExcludingToolbar;
- (struct CGRect)contentRect;
- (struct CGSize)minFrameSizeForMinContentSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (BOOL)_hasFullSizeContentView;
- (BOOL)_standardShadowOKIgnoringShapeCustomization;
- (double)_distanceFromToolbarBaseToTitlebar;
- (double)_toolbarOffsetIfTitleIsHidden;
- (double)_currentToolbarHeightWhileAnimating;
- (struct CGRect)_toolbarViewFrame;
- (id)_toolbar;
- (id)_toolbarView;
- (BOOL)_toolbarIsManagedByExternalWindow;
- (BOOL)_toolbarIsHidden;
- (BOOL)_hasToolbarReservedSpace;
- (BOOL)_toolbarIsShown;
- (BOOL)_toolbarIsInTransition;
- (void)_setToolbarVisibleStatus:(int)arg1;
- (BOOL)_canHaveToolbar;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_didChangeContentLayoutRect;
- (void)_willChangeContentLayoutRect;
- (void)setBoundsSize:(struct CGSize)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (void)dealloc;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setStyleMask:(unsigned long long)arg1;
- (void)_updateBackdropView;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (BOOL)_shouldUseDarkAppearanceInHUDWindows;
- (void)_setBackdropView:(id)arg1;
@property(readonly) NSVisualEffectView *_backdropView;
- (BOOL)_needsVisualEffectViewBackgroundWithMaterial:(long long *)arg1 blendingMode:(long long *)arg2;
- (void)_updateTemporaryContentViewFrame;
- (void)_unfloatTitlebarAndToolbarIfNeeded;
- (void)_floatTitlebarAndToolbarFromInit:(BOOL)arg1;
@property(retain) NSView *temporaryContentView; // @dynamic temporaryContentView;
- (void)removeUnderTitlebarView:(id)arg1 withAssociatedWithView:(id)arg2;
- (void)addUnderTitlebarView:(id)arg1 withAssociatedWithView:(id)arg2;
- (void)_titleBarAssociatedViewFrameChanged:(id)arg1;
- (void)_updateAllUnderTitlebarViews;
- (void)_updateUnderTitlebarViewFrame:(id)arg1 associatedView:(id)arg2 titlebarViewFrame:(struct CGRect)arg3;
- (void)_updateTitlebarContainerViewFrameIfNecessary;
- (double)fullScreenTitlebarMinHeight;
- (double)fullScreenTitlebarMaxHeight;
- (void)titlebarAppearsTransparentChanged;
- (BOOL)_titlebarViewAppearsTransparent;
- (BOOL)_themeFrameShouldDrawTitlebar;
- (void)windowTitleModeChanged;
- (void)_noteToolbarLayoutChanged;
- (void)_setTitlebarViewController:(id)arg1;
- (id)_titlebarViewControllerIfAvailable;
- (id)titlebarAccessoryViewControllers;
- (id)titlebarViewController;
- (void)_relayoutBottomAuxiliaryViews;
- (void)relayoutAuxiliaryViewsOfType:(unsigned long long)arg1;
- (void)_relayoutAuxiliaryViewsOfType:(unsigned long long)arg1;
- (void)_syncAuxillaryViewPositions;
- (void)_moveTitlebarViewsToView:(id)arg1;
- (struct CGRect)_currentTitlebarContainerViewFrame;
- (BOOL)shouldStartWindowDragForEvent:(id)arg1;
- (id)_preferredAppearance;
- (void)viewDidChangeEffectiveAppearance;
- (id)_makeTitlebarViewWithFrame:(struct CGRect)arg1;
- (void)_updateTitleSeparatorViewIfNeeded;
- (void)_updateContentViewFrame;
- (void)_setLayoutEngine:(id)arg1;
- (void)_updateContentLayoutGuideFrame;
- (struct CGRect)_contentLayoutRect;
- (id)initWithFrame:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 owner:(id)arg3;
- (BOOL)_canAddWindowTabs;
- (BOOL)_canFloatForTabsOrTitlebar:(BOOL)arg1;
- (BOOL)_wantsFloatingTitlebar;
@property(readonly) id contentLayoutGuide;
- (void)_ensureContentLayoutGuide;
- (void)_setContentLayoutGuide:(id)arg1;
- (id)_contentLayoutGuide;
- (void)_ensureContentLayoutView;
- (void)_setContentLayoutView:(id)arg1;
- (id)_contentLayoutView;
- (void)_setButtonHidingView:(id)arg1;
- (id)_buttonHidingView;
- (id)fullScreenButton;
- (void)_setRenameField:(id)arg1;
- (id)renameField;
- (void)_setAutosaveButtonSeparatorField:(id)arg1;
- (id)_autosaveButtonSeparatorField;
- (void)_setAutosaveButton:(id)arg1;
- (id)autosaveButton;
- (id)lockButton;
- (id)toolbarButton;
- (id)_nonModalDocumentError;
- (void)_setNonModalDocumentError:(id)arg1;
- (id)_documentAutosavingError;
- (void)_setDocumentAutosavingError:(id)arg1;
- (void)_setDocumentButtonEnabled:(BOOL)arg1;
- (long long)_documentEditingState;
- (void)_setDocumentEditingState:(long long)arg1 animate:(BOOL)arg2;
- (void)setDocumentEdited:(BOOL)arg1;
- (void)_updateButtonsWithDocumentEdited:(BOOL)arg1;
- (void)_resetTitleBarButtons;
- (id)makeRenameField;
- (id)newFullScreenButton;
- (id)newAutosaveButton;
- (id)newFileButton;
- (id)newLockButton;
- (id)newToolbarButton;
- (id)newMiniaturizeButton;
- (id)newZoomButton;
- (id)newCloseButton;
- (void)_updateButtonState;
- (void)_updateButtons;
- (BOOL)_wantsLeftHandButtons;
- (BOOL)_showsAutosaveButton;
- (void)_addButtonSubview:(id)arg1;
- (BOOL)_isZoomButtonEnabled;
- (id)_possiblyAdjustedHitTestResult:(id)arg1;
- (id)titleBarViewsForMouseHitTest;
- (void)_setButtonsShown:(BOOL)arg1;
- (void)addFileButton:(id)arg1;
- (void)removeFromSuperview;
- (void)addSubview:(id)arg1;
- (void)addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_replaceKnownSubview:(id)arg1 with:(id)arg2;
- (void)_addKnownSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_addKnownSubview:(id)arg1;
- (BOOL)canAddUnderTitlebarViews;
- (BOOL)shouldRoundCornersInFullScreen;
- (void)setThemeFrameWidgetState:(int)arg1;
- (double)contentAlpha;
- (void)viewDidEndLiveResize;
- (id)contentFill;
- (BOOL)_isTexturedWindow;
- (BOOL)_isHUDWindow;
- (void)_didRemoveLayer;
- (void)layout;
- (void)_windowChangedKeyState;
- (void)_updateTitleBarField;
- (BOOL)_alwaysNeedsTitleBarTextField;
- (void)backgroundColorChanged:(id)arg1;
- (unsigned long long)_currentThemeStyle;
- (void)_updateTitleTextField;
- (long long)_backgroundStyleForTitleTextField;
- (BOOL)_shouldHideTitleView;
- (BOOL)_hasTopAlignedAccessoryView;
- (id)_currentTitleTextFieldAttributedString;
- (struct CGRect)_titleTextFieldFrame;
- (void)_removeTitleTextField;
- (void)_setTitleTextField:(id)arg1;
- (id)_titleTextField;
- (void)_removeBackgroundLayer;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)_updateBackgroundLayer;
- (void)_setDrawHandlerDelegate:(id)arg1;
- (id)_drawHandlerDelegate;
- (void)_displayLayer:(id)arg1;
- (id)_cornerMask;
- (id)_fullScreenCornerMaskImage;
- (BOOL)_shouldRoundCornersForSurface;
- (void)_cuiMakeOrUpdateBackgroundLayer:(id *)arg1 topHeight:(double)arg2 drawTopSeparator:(BOOL)arg3 bottomHeight:(double)arg4 forTitlebar:(BOOL)arg5;
- (void)_cuiMakeOrUpdateBackgroundLayer:(id *)arg1;
- (void)_cuiMakeOrUpdateBackgroundLayerForTitlebarView:(id *)arg1;
- (struct __CFString *)_cuiWindowType;
- (id)_cuiOptionsForWindowType:(struct __CFString *)arg1 topHeight:(double)arg2 drawTopSeparator:(BOOL)arg3 bottomBarHeight:(double)arg4 shouldSetScaleKey:(BOOL)arg5 forTitlebar:(BOOL)arg6;
- (id)_cuiOptionsForCornerMaskForWindowType:(struct __CFString *)arg1;
- (id)_cuiOptionsForHUDIncludeScaleKey:(BOOL)arg1;
- (struct __CFString *)_currentThemeStateKey;
- (struct CGRect)_backgroundLayerFrame;
- (id)opaqueAncestor;
- (BOOL)isOpaque;
- (void)updateLayer;
- (BOOL)_titlebarViewShouldRoundCorners;
- (void)_updateRoundCornerMaskWhenLayerBacked;
- (void)windowCornerMaskChanged;
- (void)_setCornerMaskIfNeeded;
- (void)_clearCornerMaskIfNeeded;
- (void)updateWindowCornerMaskOnLayer:(id)arg1 forTitlebar:(BOOL)arg2;
- (void)_updateLayerMasksToBoundsFromView;
- (void)_setBackgroundLayer:(id)arg1;
- (id)_backgroundLayer;
- (BOOL)_hasRegularDrawWindowBackground;
- (BOOL)wantsUpdateLayer;
- (void)setLayer:(id)arg1;
- (void)drawFrame:(struct CGRect)arg1;
- (void)_drawFrameRects:(struct CGRect)arg1;
- (void)_drawTitleBar:(struct CGRect)arg1;
- (BOOL)_shouldDrawTitlebarTitle;
- (BOOL)_titleVisibilityIsHidden;
- (BOOL)_wantsTitleString;
- (void)_drawTitleBarBackgroundInClipRect:(struct CGRect)arg1;
- (BOOL)_wantsUnifiedToolbar;
- (BOOL)_isOnePieceTitleAndToolbarWithToolbarNotHidden;
- (BOOL)_wantsSideUtilityTitleBar;
- (void)_drawTitleStringInClip:(struct CGRect)arg1;
- (id)_currentTitleColor;
- (void)_drawNormalTitleBar;
- (struct CGRect)_normalTitleBarFrame;
- (void)_drawSideUtilityTitleBar;
- (int)_currentThemeState;
- (void)_drawUnifiedToolbar:(int)arg1;
- (void)_drawTransparentTitlebarInRect:(struct CGRect)arg1;
- (void)_drawUnifiedToolbarWithState:(int)arg1 inFrame:(struct CGRect)arg2;
- (long long)_visibleAuxViewControllersCount;
- (BOOL)_needsTitlebarSeparator;
- (struct CGRect)_unifiedToolbarFrame;
- (void)_drawUnifiedToolbarBackgroundInRect:(struct CGRect)arg1 withState:(long long)arg2;
- (void)_setFrameNeedsDisplay:(BOOL)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)_invalidateAllButtons;
- (void)_drawRectFrameNeedsDisplay:(BOOL)arg1;
- (struct CGRect)_separatorRectForInactiveWindow;
- (BOOL)_wantsToolbarHeightTitlebarWithoutToolbar;
- (BOOL)_isOnePieceTitleAndToolbar;
- (void)_setTextShadow:(BOOL)arg1;
- (void)_drawFrameInterior:(struct CGRect *)arg1 clip:(struct CGRect)arg2;
- (BOOL)_wantsTitleBar;
- (struct CGSRegionObject *)_regionForOpaqueDescendants:(struct CGRect)arg1 forMove:(BOOL)arg2 forUnderTitlebar:(BOOL)arg3;
- (struct CGSRegionObject *)_opaqueFullSizeContentViewRegionWithClipRect:(struct CGRect)arg1;
- (void)drawOverlayRect:(struct CGRect)arg1;
- (struct CGRect)overlayBounds;
- (void)_setContentView:(id)arg1;
- (void)setAssociatedViewsToUnderTitlebarViews:(id)arg1;
- (id)associatedViewsToUnderTitlebarViews;
- (id)_createAuxiliaryTitlebarViewContainerViewIfNecessary;
- (void)_setAuxiliaryTitlebarViewContainerView:(id)arg1;
- (id)_auxiliaryTitlebarViewContainerView;
- (void)setTitlebarContainerView:(id)arg1;
@property(readonly) NSTitlebarContainerView *titlebarContainerView;
- (void)setTitlebarView:(id)arg1;
- (id)titlebarView;
- (void)_maskCorners:(struct CGRect)arg1;
- (void)_maskCorners:(unsigned long long)arg1 clipRect:(struct CGRect)arg2;
- (void)shapeWindow;
- (struct CGSRegionObject *)_createWindowOpaqueShape;
- (struct CGRect)_bottomRightCornerRect;
- (struct CGRect)_bottomLeftCornerRect;
- (struct CGRect)_bottomCornerRect;
- (struct CGSize)_bottomCornerSize;
- (struct CGSize)_bottomCornerSizeForRegularWindows;
- (struct CGSize)_topCornerSize;
- (struct CGSize)_topCornerSizeForRegularWindows;
- (BOOL)topCornerRounded;
- (BOOL)bottomCornerRounded;
- (void)setBottomCornerRounded:(BOOL)arg1;
- (double)_bottomCornerHeight;
- (void)_getWindowMaskCornerDimensionsLeftCornerWidth:(double *)arg1 rightCornerWidth:(double *)arg2 topCornerHeight:(double *)arg3 bottomCornerHeight:(double *)arg4;
- (CDStruct_d2b197d1)_getCachedWindowCornerSizes;
- (BOOL)_createWindowShapeMask:(struct CGImage **)arg1 centerRect:(struct CGRect *)arg2 scale:(double *)arg3;
- (float)roundedCornerRadius;
- (BOOL)_effectiveMovableByBottomBar;
- (void)_setMovableByBottomBar:(BOOL)arg1;
- (BOOL)_movableByBottomBar;
- (struct CGRect)activationRect;
- (BOOL)_isDarkWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

