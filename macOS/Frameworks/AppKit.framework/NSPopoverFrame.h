//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSVisualEffectView.h>

@class NSFloatRange;

@interface NSPopoverFrame : NSVisualEffectView
{
    id _privatePopoverFrameData;
    struct {
        unsigned int useDragWindowAppearance:1;
        unsigned int unused1:1;
        unsigned int unused2:1;
        unsigned int unused3:1;
        unsigned int unused4:1;
        unsigned int unused5:1;
        unsigned int shouldInsetForAnchor:1;
        unsigned int doingSolidFillHack:1;
        unsigned int wantsDragWindowAppearance:1;
        unsigned int _reserved:23;
    } _flags;
}

+ (id)defaultAnimationForKey:(id)arg1;
+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 appearance:(id)arg2 anchorSize:(struct CGSize)arg3 contentInset:(struct NSEdgeInsets)arg4 hasTitlebar:(BOOL)arg5;
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 appearance:(id)arg2 anchorSize:(struct CGSize)arg3 contentInset:(struct NSEdgeInsets)arg4 hasTitlebar:(BOOL)arg5;
+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 appearance:(id)arg2 anchorSize:(struct CGSize)arg3 contentInset:(struct NSEdgeInsets)arg4;
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 appearance:(id)arg2 anchorSize:(struct CGSize)arg3 contentInset:(struct NSEdgeInsets)arg4;
+ (struct CGSize)minFrameSizeForMinContentSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;
+ (BOOL)automaticallyNotifiesObserversOfAnchorPoint;
- (id)_verticalRangesForAreasOfInterest;
@property(retain, nonatomic) NSFloatRange *rangeOfInterest2;
@property(retain, nonatomic) NSFloatRange *rangeOfInterest1;
- (void)setRangeOfInterest:(id *)arg1 sourceRange:(id)arg2;
- (void)_closeButtonPressed:(id)arg1;
- (BOOL)_hasTitlebar;
- (struct CGRect)titlebarRect;
- (BOOL)_hasActiveDragTypes;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_markAnchorRectAsNeedingDisplay;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)_isBorderView;
- (void)_drawFrameShadowAndFlushContext:(id)arg1;
- (void)tileAndSetWindowShape:(BOOL)arg1 updateContentView:(BOOL)arg2;
- (void)tileAndSetWindowShape:(BOOL)arg1;
- (void)shapeWindow;
- (void)_setFrameNeedsDisplay:(BOOL)arg1;
- (id)opaqueAncestor;
- (BOOL)isOpaque;
- (struct CGRect)dragRectForFrameRect:(struct CGRect)arg1;
- (double)_distanceFromToolbarBaseToTitlebar;
- (void)_hideToolbarWithAnimation:(BOOL)arg1;
- (void)_showToolbarWithAnimation:(BOOL)arg1;
- (BOOL)_toolbarIsManagedByExternalWindow;
- (BOOL)_toolbarIsHidden;
- (BOOL)_toolbarIsShown;
- (BOOL)_toolbarIsInTransition;
- (BOOL)_canHaveToolbar;
- (id)zoomButton;
- (id)minimizeButton;
- (id)closeButton;
- (unsigned long long)styleMask;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)_windowChangedKeyState;
- (void)_windowWillOrderOnScreen;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidChangeBackingProperties;
- (void)_drawFrameMaskInRect:(struct CGRect)arg1;
- (void)_clearFrameMask;
- (id)_frameMask;
- (BOOL)_createWindowShapeMask:(struct CGImage **)arg1 centerRect:(struct CGRect *)arg2 scale:(double *)arg3;
- (id)_cuiOptionsForCornerMaskForWindowType:(struct __CFString *)arg1;
- (void)_updatePopoverCornerMaskOnLayer:(id)arg1;
- (void)drawOverlayRect:(struct CGRect)arg1;
- (struct CGRect)overlayBounds;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)wantsUpdateLayer;
- (struct CGPoint)_adjustedForBoundsAnchorPoint:(struct CGPoint)arg1 anchorEdge:(unsigned long long)arg2;
- (id)_popoverIfAvailable;
- (void)drawBackgroundInRect:(struct CGRect)arg1 ofView:(id)arg2 anchorEdge:(unsigned long long)arg3 anchorPoint:(struct CGPoint)arg4;
- (id)_coreUIOptionsWithAnchorEdge:(unsigned long long)arg1 anchorPoint:(struct CGPoint)arg2 anchorSize:(struct CGSize)arg3 shouldInsetForAnchor:(BOOL)arg4 areasOfInterest:(id)arg5;
- (struct NSEdgeInsets)_cui_alignmentRectInsets;
- (id)_cui_optionsForCurrentState;
- (BOOL)_isBackdropCompatible;
- (struct CGPath *)_newMinimalAppearancePathInBounds:(struct CGRect)arg1 anchorEdge:(unsigned long long)arg2 anchorPoint:(struct CGPoint)arg3 topCapOnly:(BOOL)arg4 arrowOffset:(double)arg5;
- (struct CGPath *)_newMinimalAppearancePathInBounds:(struct CGRect)arg1 anchorEdge:(unsigned long long)arg2 arrowPosition:(double)arg3 topCapOnly:(BOOL)arg4 arrowOffset:(double)arg5;
@property(setter=_setWantsDragWindowAppearance:) BOOL _wantsDragWindowAppearance;
- (void)_setHasDragWindowAppearance:(BOOL)arg1;
- (BOOL)_hasDragWindowAppearance;
- (struct CGRect)_arrowRect;
- (void)_addTitlebarAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeTitlebarAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_metricsForPopoverFrame;
- (void)_tileAndRedisplay:(BOOL)arg1 updateContentView:(BOOL)arg2;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (void)_setDragImage:(id)arg1;
- (id)_dragImage;
- (void)dealloc;
@property BOOL shouldBlurBackground;
@property BOOL shouldInsetForAnchor;
- (void)_setAnchorPoint:(struct CGPoint)arg1 reshape:(BOOL)arg2;
@property struct CGPoint anchorPoint;
@property struct NSEdgeInsets contentInset;
@property struct CGSize anchorSize;
@property unsigned long long anchorEdge;
- (unsigned long long)effectiveAnchorEdge;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 owner:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPopoverInit;

@end

