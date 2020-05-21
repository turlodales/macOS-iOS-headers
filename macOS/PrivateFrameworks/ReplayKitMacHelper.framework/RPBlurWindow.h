//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ReplayKitMacHelper/RPBorderlessEffectWindow.h>

@class CALayer;

@interface RPBlurWindow : RPBorderlessEffectWindow
{
    CALayer *blurLayer;
    BOOL animatesTransitions;
}

- (void).cxx_destruct;
@property BOOL animatesTransitions; // @synthesize animatesTransitions;
@property(retain) CALayer *blurLayer; // @synthesize blurLayer;
- (void)dealloc;
- (void)animateBlurLayerToFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2;
- (void)startTransitionOut;
- (void)continueBlurWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(BOOL)arg2 currentMediaTime:(double)arg3;
- (void)continueBlurWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(BOOL)arg2;
- (void)startBlurWithServiceScreenFrame:(struct CGRect)arg1 initialLayerTransform:(struct CGAffineTransform)arg2;
@property struct CGRect blurFrame;
- (void)setProxyPropertiesOnBlurLayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1 noSourceWindow:(BOOL)arg2;

@end

