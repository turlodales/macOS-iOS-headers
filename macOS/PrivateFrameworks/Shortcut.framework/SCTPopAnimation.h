//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class SCTHelpPointerView;

__attribute__((visibility("hidden")))
@interface SCTPopAnimation : NSAnimation
{
    SCTHelpPointerView *mAnimatedView;
    float mSlope;
    float mScale;
    float mScaleStep;
}

- (void)setCurrentProgress:(float)arg1;
- (void)startAnimation;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

