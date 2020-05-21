//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenu, NSMutableDictionary, NSStatusBar, NSStatusBarButton, NSString, NSView, NSWindow;

@interface NSStatusItem : NSObject
{
    NSStatusBar *_fStatusBar;
    double _fLength;
    NSWindow *_fWindow;
    NSView *_fView;
    int _fPriority;
    unsigned long long _fFlags;
    id _statusItemMenu;
    NSMutableDictionary *_replicants;
    NSString *_displayIdentifier;
}

+ (id)_itemInStatusBar:(id)arg1 withLength:(double)arg2 withPriority:(long long)arg3 systemInsertOrder:(long long)arg4;
+ (void)_statusItems:(id)arg1 setHidden:(BOOL)arg2;
- (void)setAllowsVibrancy:(BOOL)arg1;
- (BOOL)allowsVibrancy;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)_allowReplication;
- (void)_windowNeedsReplicantUpdate:(id)arg1;
- (void)_enableStatusItemImageReplication;
- (void)_disableStatusItemImageReplication;
- (void)_updateReplicantsUnlessMenuIsTracking:(id)arg1;
- (void)_setSubitemOffsets:(const int *)arg1 count:(unsigned long long)arg2;
- (id)_confiningDisplayID;
- (unsigned long long)_confiningSpaceID;
- (unsigned int)_statusItemFlags;
- (BOOL)_shouldReplicate;
- (BOOL)_isExitFullScreen;
- (void)_removeAllReplicants;
- (void)_replicateWithKeys:(id)arg1;
- (int)_priority;
- (id)_displayIdentifier;
- (void)_setDisplayIdentifier:(id)arg1;
- (id)screen;
- (BOOL)_moveToScreen:(id)arg1;
- (id)_moveToScreenContainingActiveMenuBar;
- (void)_swapScreensWithReplicant:(id)arg1;
- (void)_rawSetDisplayIdentifier:(id)arg1;
- (void)_updateReplicants;
- (BOOL)_drawingReplicantViewWithoutSideEffects;
- (BOOL)_drawingReplicantView;
- (void)_recursiveSetNeedsDisplayWithoutDirtyingReplicantForView:(id)arg1;
- (void)_updateReplicant:(id)arg1;
- (void)_removeReplicantForKey:(id)arg1;
- (void)_setBackgroundStyle:(long long)arg1;
- (long long)_backgroundStyle;
- (void)_adjustLengthDueToViewFrameChange:(id)arg1;
- (void)_adjustLength;
- (id)_button;
@property(readonly) NSStatusBarButton *button;
- (id)_window;
@property(getter=isVisible) BOOL visible;
@property unsigned long long behavior;
- (BOOL)_isDragging;
- (void)_completeStatusItemDrag;
- (void)_startStatusItemDrag;
- (void)_noteDraggedLongEnoughToAllowRemoval;
- (id)_navigationController;
- (BOOL)_terminateOnRemoval;
- (BOOL)_allowsUserRemoval;
- (unsigned long long)_effectiveBehavior;
- (void)_validateBehavior:(unsigned long long)arg1;
- (BOOL)_hasNavigationHighlight;
- (void)_setNavigationHighlight:(BOOL)arg1;
- (BOOL)_participatesInNavigationLoop;
@property(copy) NSString *autosaveName;
- (id)_defaultAutosaveName;
- (void)_restorePreferencesFromAutosaveName;
- (BOOL)_allowItemDragging;
- (void)_autosavePosition;
- (void)_itemMovedDuringDrag;
- (void)_cleanUpDragCursorIfNeeded;
- (BOOL)_isInstalled;
- (void)_uninstall;
- (void)_install;
- (id)_visibleDefaultsKey;
- (id)_preferredPositionDefaultsKey;
- (id)_defaultsKeyForAutosaveProperty:(id)arg1;
- (id)_initInStatusBar:(id)arg1 withLength:(double)arg2 withPriority:(long long)arg3 hidden:(BOOL)arg4 systemInsertOrder:(long long)arg5;
- (id)_initInStatusBar:(id)arg1 withLength:(double)arg2 withPriority:(long long)arg3 hidden:(BOOL)arg4;
- (id)_initInStatusBar:(id)arg1 withLength:(double)arg2 withPriority:(long long)arg3;
- (id)_initInStatusBar:(id)arg1 withLength:(double)arg2 withPriority:(long long)arg3 systemInsertOrder:(long long)arg4;
- (void)setView:(id)arg1;
- (void)_activeMenuBarDrawingStyleDidChange;
- (void)_propagateBackgroundStyle;
- (id)view;
- (void)drawStatusBarBackgroundInRect:(struct CGRect)arg1 withHighlight:(BOOL)arg2;
- (long long)backgroundStyleForHighlight:(BOOL)arg1;
- (void)_setPopupMenuAssociation:(id)arg1;
- (void)_removePopupMenuAssociation:(id)arg1;
- (id)_popupMenuBeingOpened;
- (void)popUpStatusItemMenu:(id)arg1;
- (long long)sendActionOn:(unsigned long long)arg1;
- (void)setHighlightMode:(BOOL)arg1;
- (BOOL)highlightMode;
- (void)setToolTip:(id)arg1;
- (id)toolTip;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
@property(retain) NSMenu *menu;
- (id)_statusItemMenu;
- (void)setAlternateImage:(id)arg1;
- (id)alternateImage;
- (void)_statusBarButtonDidSetImagePosition;
- (void)_statusBarButtonDidSetAlternateImage;
- (void)_statusBarButtonDidSetImage;
- (void)_statusBarButtonDidSetTitle;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setAttributedTitle:(id)arg1;
- (id)attributedTitle;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)_updateButtonImagePosition;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setDoubleAction:(SEL)arg1;
- (SEL)doubleAction;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)_setHidden:(BOOL)arg1;
- (BOOL)_isHidden;
- (void)_clearAutosavedState;
- (void)_clearAutosavedPreferredPosition;
@property double length;
- (void)_setSystemInsertOrder:(long long)arg1;
- (long long)_systemInsertOrder;
@property(readonly) __weak NSStatusBar *statusBar;
- (void)dealloc;
- (id)_accessibilityContainer;

@end

