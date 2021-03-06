//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSHIPresentationInstance, NSMutableArray, NSSet, NSStatusItem, NSWindow, _NSFullScreenTransitionOverlayWindow;

__attribute__((visibility("hidden")))
@interface _NSFullScreenTransition : NSObject
{
    unsigned int _transitionedWid;
    unsigned long long _tileSpaceID;
    unsigned long long _parentSpaceID;
    NSStatusItem *exitStatusItem;
    NSWindow *fullScreenWindow;
    unsigned long long fullScreenPresentationOptions;
    unsigned long long _startingSpaceID;
    struct CGRect _tileRect;
    NSHIPresentationInstance *_nsPresentationInstance;
    id _transitionedWindowBeforeContents;
    id _transitionedWindowAfterContents;
    struct CGRect _transitionedWindowBeforeSnapshotFrame;
    struct CGRect _shadowDeltaRect;
    _NSFullScreenTransitionOverlayWindow *_overlayWindow;
    NSMutableArray *_backgroundWindows;
    NSSet *_participatingWindowNums;
    NSArray *_participatingWindowNumsForEntering;
    NSArray *_participatingWindowNumsForExiting;
    NSSet *_dockAppointedAllSpaceWindowNumbers;
    long long _fullScreenState;
    BOOL needsBackgroundWindowOrdering;
    BOOL _suppressImplicitFullScreenForOtherWindows;
    BOOL _hasCustomBackgroundColor;
    unsigned int _exitReplacementWindowID;
    BOOL _reducedMotion;
}

+ (unsigned long long)defaultFullScreenPresentationOptions;
@property unsigned long long startingSpaceID; // @synthesize startingSpaceID=_startingSpaceID;
@property(readonly) BOOL suppressImplicitFullScreenForOtherWindows; // @synthesize suppressImplicitFullScreenForOtherWindows=_suppressImplicitFullScreenForOtherWindows;
@property(readonly) unsigned long long fullScreenPresentationOptions; // @synthesize fullScreenPresentationOptions;
@property unsigned int transitionedWid; // @synthesize transitionedWid=_transitionedWid;
@property unsigned long long parentSpaceID; // @synthesize parentSpaceID=_parentSpaceID;
@property unsigned long long tileSpaceID; // @synthesize tileSpaceID=_tileSpaceID;
- (BOOL)_maybeAssignWindow:(id)arg1;
- (id)_createDockAppointedAllSpaceWindowNumsFromParticipatingWindowNumbers:(id)arg1;
- (void)_rebindAndReleaseDockAppointedAllSpaceWindows;
- (void)_setOrClearAllSpaceBindings:(BOOL)arg1;
- (void)_setFloatingWindowTag:(BOOL)arg1 forWindowNumbers:(id)arg2;
- (void)noteFullScreenSubspaceUpdated;
- (void)_postDidEnterFullScreenWithSuccess:(BOOL)arg1 animateIt:(BOOL)arg2 doKitAnimation:(BOOL)arg3 customWindows:(id)arg4 duration:(double)arg5 spid:(unsigned long long)arg6 subspid:(unsigned long long)arg7;
- (void)_doSucceededToEnterFullScreenWithAnimation:(BOOL)arg1 doKitAnimation:(BOOL)arg2 customWindows:(id)arg3 duration:(double)arg4 spid:(unsigned long long)arg5 subspid:(unsigned long long)arg6;
- (void)_doCarbonSynchronizationIfNeededWithAnimate:(BOOL)arg1;
- (void)setAsThePrincipalFullScreenWindowInSpace;
- (void)_doFailedToEnterFullScreenWithAnimation:(BOOL)arg1 doKitAnimation:(BOOL)arg2;
- (void)_performEnterFullScreenWithOptions:(CDStruct_5e576fff)arg1 customWindows:(id)arg2;
- (void)activateFullScreenPresentationOptions;
- (void)_makePresentationInstanceIfNeeded;
- (void)_doAfterEnterFullScreenWithAnimation:(BOOL)arg1;
- (void)_doBeforeEnterFullScreenWithAnimation:(BOOL)arg1;
- (void)enterFullScreenTransitionWithPresentationOptions:(unsigned long long)arg1 options:(CDStruct_5e576fff)arg2;
- (void)_startWatchingForWindowsNotInCustomWindows:(id)arg1;
- (id)_windowNumbersForBackgroundWindows;
- (id)_createBackgroundWindows;
@property(retain) NSWindow *fullScreenWindow;
- (void)failedToEnterFullScreenWithAnimation:(BOOL)arg1 whichIsKitAnimation:(BOOL)arg2;
- (BOOL)_shouldUseScreenBackgroundViewForFullScreen;
- (id)_customColorForBackgroundWindow;
- (void)_updateUserSpaceSavedFrameIfNeeded;
- (void)_associateWindowWithSpace;
- (struct CGRect)_windowFrameForFullScreenMode;
- (void)setCarbonCGOrderingForTransitionedWindowEnabled:(BOOL)arg1;
- (id)_maybeFilterParticipatingWindowNumbers:(id)arg1 byScreen:(id)arg2;
- (id)_participatingWindowNumbersForTransition:(long long)arg1 animation:(BOOL)arg2 customWindows:(id)arg3;
- (void)_setupToolbarWindowIfNeeded;
- (id)_getPossibleCustomWindowsForEnteringIntoFullScreen;
- (id)fullScreenTitle;
- (void *)carbonWindow;
- (id)cocoaWindow;
- (BOOL)disableMCExit;
- (void)displayChangedForMissionControlMoveOfWindow:(long long)arg1;
- (void)displayChanged;
- (void)adjustBackgroundWindowOrdering;
- (void)_resetSpaceState;
- (void)_cleanupBackgroundWindows;
- (id)createBackgroundWindowOnScreen:(id)arg1;
- (void)captureOverlayPreparingForClose;
- (void)captureCurrentAfterScreenShotsIncludingShadow:(BOOL)arg1 destinationSpace:(unsigned long long)arg2;
- (void)captureCurrentBeforeScreenShotsIncludingShadow:(BOOL)arg1 startingSpace:(unsigned long long)arg2;
- (id)copyWindowNumbersForScreenShot;
- (id)participatingWindowNumbersForExiting;
- (id)participatingWindowNumbersForEntering;
- (void)dealloc;
- (struct CGColor *)backgroundColor;
- (long long)shieldWindowNumber;
- (void)exitFullScreenInstantly;
- (void)enterFullScreenInstantly;
- (void)exitFullScreenTransitionFinished;
- (void)exitFullScreenStatusItemClicked:(id)arg1;
- (void)destroyExitFullScreenStatusItemIfNecessary;
- (void)makeExitFullScreenStatusItem;
- (void)startExitFullScreenTransitionForCGWindow:(unsigned int)arg1 targetFrame:(struct CGRect)arg2 duration:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)prepareToStartExitFullScreenTransitionForCGWindow:(unsigned int)arg1 snapshotStartFrame:(struct CGRect)arg2;
- (void)enterFullScreenTransitionFinished;
- (void)_startEnterFullScreenTransitionForCGWindow:(unsigned int)arg1 targetFrame:(struct CGRect)arg2 duration:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)swapOriginalWindowWithOverlayWindow;
- (void)makeAndSetupOverlayWindow;
- (void)_makeAndUpdateOverlayWindowIfNeeded;
- (BOOL)isLeftTile;
- (BOOL)hasSiblingFromThisApp;
- (BOOL)tileFillsScreen;
- (struct CGRect)wallSpaceRect;
- (struct CGRect)tileRect;
- (void)noteTileFrameChanged;
- (void)_cacheTileRect:(struct CGRect)arg1;
- (id)_screen;
- (void)orderTransitionedWindowFront;
- (void)prepareWindowForExitTransition;
- (void)setWindowToHaveFullScreenSize;
- (struct CGSize)transitionedWindowShadowOffset;
- (void)setTransitionedWindowFrame:(struct CGRect)arg1;
- (struct CGRect)transitionedWindowFrame;
- (void)_startFullScreenTransitionForCGWindow:(unsigned int)arg1 targetFrame:(struct CGRect)arg2 duration:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_takeEndingWindowSnapshots:(id)arg1 withShadow:(BOOL)arg2 onSpace:(unsigned long long)arg3;
- (void)_takeStartingWindowSnapshots:(id)arg1 withShadow:(BOOL)arg2 onSpace:(unsigned long long)arg3 clipRect:(struct CGRect)arg4;
- (struct CGRect)_updateShadowDeltaRect:(struct CGRect *)arg1 forFrame:(struct CGRect)arg2 basedOnImage:(struct CGImage *)arg3;
- (struct CGImage *)_getWindowSnapshotImageForWindowIDs:(id)arg1 withShadow:(BOOL)arg2 onSpace:(unsigned long long)arg3 clipRect:(struct CGRect)arg4;
- (void)relocateToParentSpace:(unsigned long long)arg1;
- (void)_discardWindowSnapshots;
- (void)setFullScreenState:(long long)arg1;
@property(readonly) struct OpaqueHIPresentationInstanceRef *presentationInstance;
- (long long)fullScreenState;
- (id)init;
- (void)tearDownFullScreenSpaceWithOptions:(CDStruct_c5157782)arg1;

@end

