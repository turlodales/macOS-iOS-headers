//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTimer;

@interface ScreenSaverView : NSView
{
    NSTimer *_animationTimer;
    double _timeInterval;
    BOOL _isPreview;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
}

+ (BOOL)spansScreens;
+ (BOOL)performGammaFade;
+ (BOOL)performGammaFadeForModuleWithPath:(id)arg1;
+ (unsigned long long)backingStoreType;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (BOOL)hidEvent:(id)arg1;
- (BOOL)isMouseInteractive;
- (BOOL)isKeyboardInteractive;
- (void)setScreenSaverModule:(id)arg1;
- (id)screenSaverModule;
@property(readonly, getter=isPreview) BOOL preview;
- (id)configureSheet;
- (BOOL)hasConfigureSheet;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayMessage:(id)arg1;
- (void)animateOneFrame;
- (void)_oneStep:(id)arg1;
- (BOOL)windowFlushEnabled;
- (struct CGRect)boundsInPixels;
- (double)_scaleFactor;
@property(readonly, getter=isAnimating) BOOL animating;
- (void)_resetTimer;
- (void)stopAnimation;
- (void)startAnimation;
@property double animationTimeInterval;
- (void)finalize;
- (void)dealloc;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isPreview:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

