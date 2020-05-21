//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXView.h>

#import "NSAccessibilityGroup.h"
#import "UXBarPositioning.h"

@class NSColor, NSMutableSet, NSString, NSView, UXView<_UXBarItemsContainer>, _UXSinglePixelLine;

@interface UXBar : UXView <NSAccessibilityGroup, UXBarPositioning>
{
    _UXSinglePixelLine *_decorationLine;
    NSMutableSet *_previousBarItemContainers;
    long long _containerTransitionAnimationCount;
    NSView *_placeholderTrailingView;
    BOOL _isInteractiveTransitioning;
    BOOL _trailingViewNeedsRemoval;
    NSColor *_barTintColor;
    double _interitemSpacing;
    double _height;
    double _baselineOffsetFromBottom;
    double _percent;
    UXView<_UXBarItemsContainer> *_nextItemContainer;
    NSView *_globalTrailingView;
    double _globalTrailingViewWidthMultiplier;
    UXView<_UXBarItemsContainer> *_barItemsContainer;
    struct NSEdgeInsets _decorationInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct NSEdgeInsets decorationInsets; // @synthesize decorationInsets=_decorationInsets;
@property(retain, nonatomic) UXView<_UXBarItemsContainer> *barItemsContainer; // @synthesize barItemsContainer=_barItemsContainer;
@property(nonatomic) double globalTrailingViewWidthMultiplier; // @synthesize globalTrailingViewWidthMultiplier=_globalTrailingViewWidthMultiplier;
@property(retain, nonatomic) NSView *globalTrailingView; // @synthesize globalTrailingView=_globalTrailingView;
@property(retain, nonatomic) UXView<_UXBarItemsContainer> *nextItemContainer; // @synthesize nextItemContainer=_nextItemContainer;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) BOOL trailingViewNeedsRemoval; // @synthesize trailingViewNeedsRemoval=_trailingViewNeedsRemoval;
@property(nonatomic) BOOL isInteractiveTransitioning; // @synthesize isInteractiveTransitioning=_isInteractiveTransitioning;
@property(nonatomic) double baselineOffsetFromBottom; // @synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(retain, nonatomic) NSColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void)_updateDecorationLine;
@property(readonly, nonatomic) long long barPosition;
- (struct CGSize)intrinsicContentSize;
- (void)_completeInteractiveTransition:(BOOL)arg1 duration:(double)arg2;
- (void)_finishInteractiveTransition:(BOOL)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateInteractiveTransition:(double)arg1;
- (void)_beginInteractiveTransitionToItemContainer:(id)arg1;
- (void)_animateTransitionFromContainer:(id)arg1 toContainer:(id)arg2 transition:(unsigned long long)arg3 duration:(double)arg4 fromValue:(double)arg5 toValue:(double)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_didCompleteContainerTransitionAnimation;
- (void)_transitionToContainer:(id)arg1 transition:(unsigned long long)arg2 duration:(double)arg3;
- (void)_updateTrailingViewWithItemContainer:(id)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
@property(nonatomic) BOOL bordered;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

