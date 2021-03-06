//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class CALayer, _NSFullScreenTileResizeCrossfadeOverlayLayer;

__attribute__((visibility("hidden")))
@interface _NSFullScreenTileResizeCrossfadeOverlayWindow : NSPanel
{
    CALayer *_rootLayer;
    unsigned long long _tileID;
    unsigned long long _parentID;
    unsigned long long _closingSpaceID;
    unsigned long long _openingSpaceID;
    BOOL _doResize;
    BOOL _lockedMenuBar;
    struct CGRect _targetFrame;
    struct CGRect _targetTileFrame;
    _NSFullScreenTileResizeCrossfadeOverlayLayer *_beforeTileLayer;
    _NSFullScreenTileResizeCrossfadeOverlayLayer *_afterTileLayer;
    _NSFullScreenTileResizeCrossfadeOverlayLayer *_closingTileLayer;
    _NSFullScreenTileResizeCrossfadeOverlayLayer *_openingTileLayer;
}

@property unsigned long long openingSpaceID; // @synthesize openingSpaceID=_openingSpaceID;
- (void)dealloc;
- (void)disableAutomaticTermination;
- (void)enableAutomaticTermination;
- (void)close;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)_setWindowTag;
- (BOOL)_shouldAutoFlattenLayerTree;
- (void)animateSwapWithDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureAnimationToFinalStateWithDuration:(double)arg1;
- (struct CGRect)closingTileTargetFrame;
- (void)captureAfterWindowsUsingTileFrame:(struct CGRect)arg1;
- (void)captureBeforeWindowsUsingTileFrame:(struct CGRect)arg1;
- (void)doFinalBeforeSetupWithAfterFrame:(struct CGRect)arg1;
- (id)windowIDsForCaptureOnSpace:(unsigned long long)arg1;
- (id)windowIDsForCaptureOnSpace:(unsigned long long)arg1 predicate:(CDUnknownBlockType)arg2;
- (id)initWithTileID:(unsigned long long)arg1 parentSpaceID:(unsigned long long)arg2 closingSpaceID:(unsigned long long)arg3 screen:(id)arg4 doResize:(BOOL)arg5 placeInWallSpace:(BOOL)arg6;

@end

