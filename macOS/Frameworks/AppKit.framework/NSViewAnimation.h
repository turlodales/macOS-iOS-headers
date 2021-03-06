//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class NSArray;

@interface NSViewAnimation : NSAnimation
{
    NSArray *_viewAnimations;
    id _viewAnimationInfo;
    id _windowAnimationInfo;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_drawView:(id)arg1;
- (void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2;
- (void)_freeViewAnimationInfo;
- (void)_startAnimation;
- (void)setCurrentProgress:(float)arg1;
@property(copy) NSArray *viewAnimations;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithViewAnimations:(id)arg1;
- (id)_screen;
- (void)_clearAnimationInfo;
- (void)_setupAnimationInfo;

@end

