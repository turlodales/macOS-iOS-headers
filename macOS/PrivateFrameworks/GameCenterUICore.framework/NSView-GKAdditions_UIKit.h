//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "UIFocusEnvironment.h"

@class NSColor, NSString;

@interface NSView (GKAdditions_UIKit) <UIFocusEnvironment>
+ (void)performWithoutAnimation:(CDUnknownBlockType)arg1;
+ (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setNeedsFocusUpdate;
- (id)preferredFocusedView;
- (id)preferredFocusEnvironments;
@property(readonly, nonatomic) BOOL isFocused;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNeedsLayout;
- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (void)setNeedsDisplay;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)setNeedsUpdateConstraints;
@property(retain, nonatomic) NSColor *tintColor;
@property(nonatomic) struct CGPoint center;
@property(nonatomic) double alpha;
@property(nonatomic, getter=isOpaque) BOOL opaque;
- (id)_gkRecursiveDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkDescriptionCuzNSViewDescriptionIzLame;
- (id)_gkValueDescription;
- (id)_autoresizingDescription;
- (void)_uxAttachToViewController:(id)arg1;
- (void)_uxAttachToViewController:(id)arg1 withDropShadow:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

