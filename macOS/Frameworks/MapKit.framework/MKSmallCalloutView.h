//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSLayoutConstraint, NSLayoutGuide, NSString, NSView<_MKCalloutAccessoryView>, _MKSmallCalloutPassthroughButton, _MKUILabel;

@interface MKSmallCalloutView : NSView
{
    _MKUILabel *_titleLabel;
    _MKUILabel *_subtitleLabel;
    NSView<_MKCalloutAccessoryView> *_leftView;
    NSView<_MKCalloutAccessoryView> *_rightView;
    NSView<_MKCalloutAccessoryView> *_externalLeftView;
    NSView<_MKCalloutAccessoryView> *_externalRightView;
    NSView<_MKCalloutAccessoryView> *_detailView;
    struct CGSize _preferredContentSize;
    BOOL _shouldPositionTitleForMapsTransitionMovingSideways;
    _MKSmallCalloutPassthroughButton *_maskedContainerView;
    NSView *_unmaskedContainerView;
    CDStruct_51745937 _mapDisplayStyle;
    BOOL _needsPreferredContentSizeUpdate;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    NSLayoutConstraint *_unmaskedContainerLeadingConstraint;
    NSLayoutConstraint *_unmaskedContainerTrailingConstraint;
    NSArray *_titleLabelConstraints;
    NSLayoutConstraint *_titleBaselineFromTopMinimumConstraint;
    NSLayoutConstraint *_titleBaselineFromTopConstraint;
    NSLayoutConstraint *_titleMinimumBaselineToBottomConstraint;
    NSLayoutGuide *_centerContentLeadingGuide;
    NSLayoutGuide *_centerContentTrailingGuide;
    NSLayoutConstraint *_leftViewMinCalloutWidthConstraint;
    NSLayoutConstraint *_leftViewHorizontalPositionConstraint;
    NSLayoutConstraint *_leftViewTopSpacerBottomConstraint;
    NSLayoutConstraint *_leftViewCenterContentMarginConstraint;
    NSLayoutGuide *_leftViewTopSpacer;
    NSLayoutGuide *_leftViewLeftSpacer;
    NSLayoutConstraint *_rightViewMinCalloutWidthConstraint;
    NSLayoutConstraint *_rightViewHorizontalPositionConstraint;
    NSLayoutConstraint *_rightViewTopSpacerBottomConstraint;
    NSLayoutConstraint *_rightViewCenterContentMarginConstraint;
    NSLayoutGuide *_rightViewTopSpacer;
    NSLayoutGuide *_rightViewRightSpacer;
    NSLayoutConstraint *_detailViewMinTopConstraint;
    NSLayoutConstraint *_detailViewBottomConstraint;
    NSLayoutConstraint *_detailViewTrailingConstraint;
    long long _arrowDirection;
}

@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) CDStruct_51745937 mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
- (void).cxx_destruct;
- (void)_updateAccessoryViewStyles;
- (BOOL)canDisplayCompleteTitleWhenExpanded;
- (void)setDetailView:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) NSView *detailView;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) NSView *rightView;
@property(retain, nonatomic) NSView *leftView;
@property(copy, nonatomic) NSString *calloutSubtitle;
- (void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSString *calloutTitle;
@property(readonly, nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
- (void)_updatePreferredContentSize;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)_setNeedsUpdatePreferredContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)reset;
- (void)dealloc;
@property(nonatomic) double maximumWidth;
@property(nonatomic) double minimumWidth;
- (id)initWithFrame:(struct CGRect)arg1;

@end

