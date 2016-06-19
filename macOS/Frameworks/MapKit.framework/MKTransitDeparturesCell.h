//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

#import "MKMultiLineLabelContainer.h"

@class MKImageView, NSArray, NSButton, NSDate, NSLayoutConstraint, NSStackView, NSString, NSTimeZone, _MKUILabel;

@interface MKTransitDeparturesCell : MKCustomSeparatorTableViewCell <MKMultiLineLabelContainer>
{
    MKImageView *_lineImageView;
    MKImageView *_incidentIconImageView;
    _MKUILabel *_primaryLabel;
    _MKUILabel *_secondaryLabel;
    _MKUILabel *_tertiaryLabel;
    NSStackView *_secondaryTextStackView;
    _MKUILabel *_departureLabel;
    NSArray *_additionalDepartureLabels;
    NSStackView *_departureStackView;
    NSLayoutConstraint *_labelLeadingMarginConstraint;
    NSLayoutConstraint *_labelBufferConstraint;
    NSArray *_labelToDepartureConstraints;
    NSArray *_buttonToDepartureConstraints;
    double _lineImageCenteringValue;
    NSLayoutConstraint *_lineImageToContainerTrailingConstraint;
    NSLayoutConstraint *_lineImageViewTopConstraint;
    NSLayoutConstraint *_lineImageViewToBottomConstraint;
    NSLayoutConstraint *_primaryToTopConstraint;
    NSLayoutConstraint *_departureStackViewToBottomConstraint;
    NSLayoutConstraint *_lineImageViewCenteringConstraint;
    NSLayoutConstraint *_primaryLabelCenteringConstraint;
    NSLayoutConstraint *_departureLabelCenteringConstraint;
    BOOL _needsInitialConstraints;
    BOOL _showNoConnectionEmDash;
    BOOL _centerContent;
    BOOL _showIncidentIcon;
    BOOL _incidentButtonHidden;
    BOOL _inactive;
    double _lineImageViewSize;
    NSArray *_departures;
    unsigned long long _departureStyle;
    NSDate *_countdownReferenceDate;
    NSTimeZone *_departureTimeZone;
    NSButton *_incidentButton;
    NSString *_incidentTitle;
    id <MKTransitDeparturesCellDelegate> _delegate;
}

+ (id)displayableCountdowDepartureDatesFromDates:(id)arg1 withReferenceDate:(id)arg2;
+ (void)_enumerateMinutesUntilDepartureDates:(id)arg1 withReferenceDate:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)_nowString;
+ (id)_departureLabelAttributes;
+ (id)_departureSubtextAttributes;
+ (id)_singleCountdownSubtext;
+ (id)timestampSecondaryFont;
+ (id)defaultSecondaryFont;
+ (id)strongSecondaryFont;
+ (id)_primaryFont;
+ (id)_departureSubtextFont;
+ (id)_upcomingTimestampFont;
+ (id)_departureLabelFont;
+ (double)labelMarginWithLineImageViewWidth:(double)arg1;
+ (double)maxLineImageWidthforWidth:(double)arg1 compressed:(BOOL)arg2;
+ (double)_minTextWidth:(BOOL)arg1;
+ (double)_maxExpectedDepartureLabelWidth;
+ (void)_calculateMaxLabelWidths;
+ (BOOL)_needsUpdateMaxLabelWidths;
@property(nonatomic, getter=isInactive) BOOL inactive; // @synthesize inactive=_inactive;
@property(nonatomic) __weak id <MKTransitDeparturesCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *incidentTitle; // @synthesize incidentTitle=_incidentTitle;
@property(nonatomic, getter=isIncidentButtonHidden) BOOL incidentButtonHidden; // @synthesize incidentButtonHidden=_incidentButtonHidden;
@property(retain, nonatomic) NSButton *incidentButton; // @synthesize incidentButton=_incidentButton;
@property(nonatomic, getter=isShowingIncidentIcon) BOOL showIncidentIcon; // @synthesize showIncidentIcon=_showIncidentIcon;
@property(nonatomic) BOOL centerContent; // @synthesize centerContent=_centerContent;
@property(nonatomic, getter=isShowingNoConnectionEmDash) BOOL showNoConnectionEmDash; // @synthesize showNoConnectionEmDash=_showNoConnectionEmDash;
@property(retain, nonatomic) NSTimeZone *departureTimeZone; // @synthesize departureTimeZone=_departureTimeZone;
@property(retain, nonatomic) NSDate *countdownReferenceDate; // @synthesize countdownReferenceDate=_countdownReferenceDate;
@property(nonatomic) unsigned long long departureStyle; // @synthesize departureStyle=_departureStyle;
@property(retain, nonatomic) NSArray *departures; // @synthesize departures=_departures;
@property(nonatomic) double lineImageViewSize; // @synthesize lineImageViewSize=_lineImageViewSize;
- (void).cxx_destruct;
- (id)multilineTextFieldsWithinContainer;
- (BOOL)_isRTL;
- (void)_incidentButtonPressed;
- (void)_removeIncidentButton;
- (void)_addIncidentButton;
- (void)_addEmDashAttributes:(id)arg1;
- (unsigned long long)_displayableDeparturesCount;
- (void)_enumerateMinutesUntilDepartureTimesWithBlock:(CDUnknownBlockType)arg1;
- (void)refreshDeparturesDisplay;
- (unsigned long long)_departureLabelStyle;
@property(readonly, nonatomic) double labelMargin;
- (void)setShowNoConnectionEnDash:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setTertiaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setLineImage:(id)arg1 compressed:(BOOL)arg2 center:(BOOL)arg3 centeringWidth:(double)arg4;
- (void)_setLineImageColumnCentered:(BOOL)arg1 withImageWidth:(double)arg2 centeringWidth:(double)arg3;
- (void)_removeIncidentIcon;
- (void)_addIncidentIcon;
- (id)_incidentIcon;
- (void)_updateLineImageViewConstraints;
- (void)_updateConstraintValues;
- (void)_updateLabelFonts;
- (BOOL)isOpaque;
- (void)layout;
- (void)infoCardThemeChanged:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

