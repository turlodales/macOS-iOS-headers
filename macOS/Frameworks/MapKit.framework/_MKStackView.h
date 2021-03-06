//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSHashTable;
@protocol _MKAnimationStackViewDelegate, _MKStackViewDelegate;

@interface _MKStackView : NSView
{
    NSArray *_stackConstraints;
    NSHashTable *_viewsNeedingWidthConstraints;
    BOOL _bottomConstraintShouldBeGreaterThanOrEqual;
    id <_MKStackViewDelegate> _stackDelegate;
    NSArray *_stackedSubviews;
    id <_MKAnimationStackViewDelegate> _stackAnimationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL bottomConstraintShouldBeGreaterThanOrEqual; // @synthesize bottomConstraintShouldBeGreaterThanOrEqual=_bottomConstraintShouldBeGreaterThanOrEqual;
@property(nonatomic) __weak id <_MKAnimationStackViewDelegate> stackAnimationDelegate; // @synthesize stackAnimationDelegate=_stackAnimationDelegate;
@property(copy, nonatomic) NSArray *stackedSubviews; // @synthesize stackedSubviews=_stackedSubviews;
@property(nonatomic) __weak id <_MKStackViewDelegate> stackDelegate; // @synthesize stackDelegate=_stackDelegate;
- (void)addSubview:(id)arg1;
- (void)_createConstraints;
- (void)setStackedSubviews:(id)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;

@end

