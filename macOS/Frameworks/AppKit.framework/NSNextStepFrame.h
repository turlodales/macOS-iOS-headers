//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMutableArray, NSTextFieldCell;

@interface NSNextStepFrame : NSView
{
    NSTextFieldCell *titleCell;
    NSMutableArray *edgeResizingTrackingAreas;
    id nsfReserved;
    unsigned long long styleMask;
    struct _frFlags {
        unsigned int defeatTitleWrap:1;
        unsigned int resizeByIncrement:1;
        unsigned int RESERVED:30;
    } fvFlags;
    struct CGSize sizingParams;
}

+ (unsigned long long)_validateStyleMask:(unsigned long long)arg1;
+ (struct CGSize)minContentSizeForMinFrameSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGSize)minFrameSizeForMinContentSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
+ (double)minFrameWidthWithTitle:(id)arg1 styleMask:(unsigned long long)arg2;
+ (void)load;
- (id)_autosaveButtonSeparatorField;
- (id)autosaveButton;
- (id)fileButton;
- (struct CGRect)_maxTitlebarTitleRect;
- (struct CGRect)_titlebarTitleRect;
- (struct CGPoint)_autosaveButtonOrigin;
- (struct CGPoint)_autosaveButtonSeparatorFieldOrigin;
- (struct CGPoint)_fileButtonOrigin;
- (void)_renamingDidEndNormally:(BOOL)arg1;
- (void)_didEnd:(BOOL)arg1 renameWithTitle:(id)arg2 editingRange:(struct _NSRange)arg3 grantHandler:(CDUnknownBlockType)arg4;
- (void)_willStartRenameWithTitle:(id)arg1 editingRange:(struct _NSRange)arg2;
- (void)_clearPressedButtons;
- (unsigned long long)styleMask;
- (void)setStyleMask:(unsigned long long)arg1;
- (struct CGSize)aspectRatio;
- (void)setAspectRatio:(struct CGSize)arg1;
- (struct CGSize)resizeIncrements;
- (void)setResizeIncrements:(struct CGSize)arg1;
- (void)helpRequested:(id)arg1;
- (BOOL)worksWhenModal;
- (void)setDocumentEdited:(BOOL)arg1;
- (void)_setNonactivatingPanel:(BOOL)arg1;
- (void)_setUtilityWindow:(BOOL)arg1;
- (void)_setCloseEnabled:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)tile;
- (void)viewDidEndLiveResize;
- (void)_resetDragMargins;
- (void)_clearDragMargins;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_calcTextRect:(struct CGRect *)arg1;
- (struct CGRect)titlebarRect;
- (BOOL)isOpaque;
- (void)updateLayer;
- (Class)_classToCheckForWantsUpdateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)usesCustomDrawing;
- (BOOL)needsFill;
- (double)contentAlpha;
- (id)contentFill;
- (BOOL)_isHUDWindow;
- (struct CGRect)titleRect;
- (id)setCloseAction:(SEL)arg1;
- (id)setCloseTarget:(id)arg1;
- (id)title;
- (id)titleFont;
- (id)_resize:(id)arg1;
- (id)doClose:(id)arg1;
- (void)setTitle:(id)arg1 andDefeatWrap:(BOOL)arg2;
- (void)setTitle:(id)arg1;
- (void)_setFrameNeedsDisplay:(BOOL)arg1;
- (struct CGSRegionObject *)_regionForOpaqueDescendants:(struct CGRect)arg1 forMove:(BOOL)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)_edgeResizingTrackingAreas;
- (void)updateTrackingAreas;
- (id)contentLayoutGuide;
- (void)dealloc;
- (id)doIconify:(id)arg1;
- (id)zoomButton;
- (id)minimizeButton;
- (id)closeButton;
- (void)_updateButtons;
- (struct CGRect)_validFrameForResizeFrame:(struct CGRect)arg1 fromResizeEdge:(unsigned long long)arg2;
- (struct CGSize)minFrameSizeForMinContentSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (id)opaqueAncestor;
- (void)backgroundColorChanged:(id)arg1;
- (void)shapeWindow;
- (struct CGSRegionObject *)_createWindowOpaqueShape;
- (struct CGRect)_windowOpaqueRect;
- (id)initWithFrame:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 owner:(id)arg3;
- (void)setRepresentedFilename:(id)arg1;
- (double)_distanceFromToolbarBaseToTitlebar;
- (void)_hideToolbarWithAnimation:(BOOL)arg1;
- (void)_showToolbarWithAnimation:(BOOL)arg1;
- (BOOL)_toolbarIsManagedByExternalWindow;
- (BOOL)_toolbarIsHidden;
- (BOOL)_toolbarIsShown;
- (BOOL)_toolbarIsInTransition;
- (BOOL)_canHaveToolbar;
- (struct CGRect)dragRectForFrameRect:(struct CGRect)arg1;

@end

