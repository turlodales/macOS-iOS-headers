//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UXNavigationControllerDelegate.h"
#import "UXViewControllerAnimatedTransitioning.h"
#import "UXViewControllerInteractiveTransitioning.h"

@class KHPinchGestureRecognizer, NSString, NSView;

@interface KHPinchTransitionController : NSObject <UXNavigationControllerDelegate, UXViewControllerAnimatedTransitioning, UXViewControllerInteractiveTransitioning>
{
    BOOL _interactionDisabled;
    BOOL _rotationDisabled;
    BOOL _hasActiveInteraction;
    id <KHPinchTransitionControllerDelegate> _delegate;
    double _pinchingScaleFactor;
    double _transitioningThreshold;
    double _transitionDuration;
    double _progress;
    id <UXViewControllerContextTransitioning> _context;
    long long _navigationOperation;
    KHPinchGestureRecognizer *_activeTransitioningPinch;
}

- (void).cxx_destruct;
@property(nonatomic) __weak KHPinchGestureRecognizer *activeTransitioningPinch; // @synthesize activeTransitioningPinch=_activeTransitioningPinch;
@property(nonatomic) long long navigationOperation; // @synthesize navigationOperation=_navigationOperation;
@property(nonatomic) __weak id <UXViewControllerContextTransitioning> context; // @synthesize context=_context;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) double transitioningThreshold; // @synthesize transitioningThreshold=_transitioningThreshold;
@property(nonatomic) double pinchingScaleFactor; // @synthesize pinchingScaleFactor=_pinchingScaleFactor;
@property(nonatomic) BOOL hasActiveInteraction; // @synthesize hasActiveInteraction=_hasActiveInteraction;
@property(nonatomic) BOOL rotationDisabled; // @synthesize rotationDisabled=_rotationDisabled;
@property(nonatomic) BOOL interactionDisabled; // @synthesize interactionDisabled=_interactionDisabled;
@property(nonatomic) __weak id <KHPinchTransitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endInteractionWithVelocity:(double)arg1;
- (void)updateInteractionWithProgress:(double)arg1 offset:(struct UXOffset)arg2 rotation:(double)arg3;
- (void)didBeginInteractionAtPoint:(struct CGPoint)arg1;
- (BOOL)shouldBeginInteraction:(id)arg1;
- (BOOL)navigationController:(id)arg1 shouldBeginInteractivePopFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)startInteractiveTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
@property(readonly, nonatomic) NSView *activeTransitioningTarget;
- (void)addTargetForTransitioning:(id)arg1;
- (void)_setupPinchGestureForView:(id)arg1;
- (id)initWithTarget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

