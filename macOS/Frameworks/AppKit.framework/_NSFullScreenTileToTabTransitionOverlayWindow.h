//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSFullScreenTileResizeCrossfadeOverlayWindow.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface _NSFullScreenTileToTabTransitionOverlayWindow : _NSFullScreenTileResizeCrossfadeOverlayWindow
{
    struct CGRect _startingTileFrame;
    struct CGRect _finalTabFrame;
    CALayer *_finalTabLayer;
    CALayer *_finalTabBackgroundLayer;
    CALayer *_realTabCoverLayer;
}

- (void)configureAnimationToFinalStateWithDuration:(double)arg1;
- (void)captureAfterWindowsUsingTileFrame:(struct CGRect)arg1 destinationTab:(id)arg2;
- (void)captureBeforeWindowsUsingTileFrame:(struct CGRect)arg1;
- (struct CGRect)closingTileTargetFrame;
- (void)dealloc;

@end

