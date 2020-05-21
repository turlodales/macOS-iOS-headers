//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class NSWindow;

@interface _NSWindowTransformAnimation : NSAnimation
{
    NSWindow *_animatingWindow;
    NSWindow *_originalWindow;
    CDUnknownBlockType _animateToProgress;
    double _currentAnimationAlpha;
    unsigned long long _type;
    struct CGPoint _startPoint;
    struct CGPoint _anchorPoint;
    id _space;
    CDUnknownBlockType _completionBlock;
    double _scaleAmount;
    unsigned int _animateAlpha:1;
    unsigned int _originalHasParentWindow:1;
    unsigned int _windowTransformAnimationReservedFlags:30;
}

+ (id)windowTransformAnimationWithWindow:(id)arg1 type:(long long)arg2 interruptingAnimation:(id)arg3;
+ (void)waitForAnimationToCompleteOnWindows:(id)arg1 forFullScreen:(BOOL)arg2;
+ (id)_originalDocumentWindowForWindow:(id)arg1;
+ (void)endDocumentWindowDuplication;
+ (void)beginDocumentWindowDuplicationForOriginalDocument:(id)arg1;
+ (BOOL)isRestoringPersistentWindows;
+ (void)endPersistentUIWindowRestoring;
+ (void)beginPersistentUIWindowRestoring;
+ (BOOL)isDuplicatingADocumentWindow;
+ (void)endNewDocumentWindowCreation;
+ (void)beginNewDocumentWindowCreation;
@property struct CGPoint normalizedAnchorPoint; // @synthesize normalizedAnchorPoint=_anchorPoint;
@property struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(readonly) double currentAnimationAlpha; // @synthesize currentAnimationAlpha=_currentAnimationAlpha;
- (void)dealloc;
- (void)_duplicateAnimationStopped;
- (void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2;
- (void)_cleanUpAnimation;
- (void)setCurrentProgress:(float)arg1;
- (void)startAnimation;
- (void)finishConfiguration;
- (CDUnknownBlockType)_configureAnimationBlock;
- (id)_windowBaseAlphas;
- (id)_windowTransformAnchors;
- (void)_gatherChildWindowAnchors:(id)arg1 forWindow:(id)arg2 anchorPoint:(struct CGPoint)arg3;
- (id)_stringForAnimationType;
@property(readonly) NSWindow *window;
- (void)setWindowSendDocmentUpTranslationProgress:(double)arg1;
- (void)setWindowShakeProgress:(double)arg1;
- (void)setAnimationAlphaValue:(double)arg1;
- (BOOL)isOrderOutAnimation;
- (BOOL)isOrderFrontAnimation;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
@property(setter=_setAnimatesAlpha:) BOOL _animatesAlpha;
@property struct CGPoint anchorPoint;
@property(setter=_setScaleAmount:) double _scaleAmount;
- (id)initWithWindow:(id)arg1 type:(long long)arg2 interruptingAnimation:(id)arg3;
- (id)_screen;

@end

