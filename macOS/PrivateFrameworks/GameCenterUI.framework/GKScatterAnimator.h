//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKBubblePathAnimator.h>

@interface GKScatterAnimator : GKBubblePathAnimator
{
    long long _focusBubbleType;
}

+ (double)preferredDuration;
@property(nonatomic) long long focusBubbleType; // @synthesize focusBubbleType=_focusBubbleType;
- (BOOL)scatterBubble:(id)arg1 shouldMoveUpAmongBubbles:(id)arg2;
- (BOOL)scatterBubble:(id)arg1 shouldMoveLeftAmongBubbles:(id)arg2 context:(id)arg3;
- (id)scatterBubblesSortedLeftToRightInContext:(id)arg1;
- (id)scatterAnimationsForBubble:(id)arg1 sortedBubbles:(id)arg2 contractPoint:(id)arg3 context: /* Error: Ran out of types for this method. */;
- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (double)minimumDurationForViewAnimations;

@end

