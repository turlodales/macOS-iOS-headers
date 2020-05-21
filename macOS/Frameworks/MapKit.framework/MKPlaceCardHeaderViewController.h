//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import "MKETAProviderObserver.h"
#import "MKModuleViewControllerProtocol.h"
#import "_MKStackViewDelegate.h"

@class MKImageView, MKPlaceSectionRowView, MKVibrancyAwareLabelView, NSArray, NSLayoutConstraint, NSLayoutGuide, NSString, NSURL, NSView, _MKDataHeaderModel, _MKLocalizedHoursBuilder, _MKTokenAttributedString, _MKUILabel;

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <_MKStackViewDelegate, MKModuleViewControllerProtocol, MKETAProviderObserver>
{
    unsigned long long _layout;
    MKPlaceSectionRowView *_titleSectionView;
    MKPlaceSectionRowView *_labelsSectionView;
    MKImageView *_logoImageView;
    _MKUILabel *_titleOnlyLabel;
    _MKUILabel *_firstLabel;
    _MKUILabel *_secondLabel;
    _MKUILabel *_secondaryNameLabel;
    MKVibrancyAwareLabelView *_thirdLabel;
    NSView *_thirdDisplayedLabel;
    NSArray *_constraints;
    NSLayoutGuide *_leadingGuide;
    NSURL *_logoURL;
    _MKDataHeaderModel *_dataModel;
    _MKTokenAttributedString *_titleToken;
    _MKTokenAttributedString *_secondaryNameToken;
    _MKTokenAttributedString *_distanceToken;
    _MKTokenAttributedString *_ratingsToken;
    _MKTokenAttributedString *_priceToken;
    _MKTokenAttributedString *_categoryToken;
    _MKTokenAttributedString *_openStateToken;
    _MKTokenAttributedString *_userLocationToken;
    _MKTokenAttributedString *_venueToken;
    _MKTokenAttributedString *_verifiedToken;
    NSLayoutConstraint *_secondLabelToFirstLabelConstraint;
    double _secondLabelToFirstLabelConstraintConstantMax;
    double _secondLabelToFirstLabelConstraintConstantMin;
    BOOL _isUserLocation;
    BOOL _optionSmallScreen;
    BOOL _constraintsCreated;
    BOOL _notVerified;
    id <_MKPlaceItem> _placeItem;
    id <GEOTransitLineItem> _lineItem;
    id <MKPlaceCardHeaderViewControllerDelegate> _delegate;
    _MKLocalizedHoursBuilder *_localizedHoursBuilder;
}

+ (double)minimalModeHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) _MKLocalizedHoursBuilder *localizedHoursBuilder; // @synthesize localizedHoursBuilder=_localizedHoursBuilder;
@property(nonatomic) __weak id <MKPlaceCardHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property(readonly, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
- (void)infoCardThemeChanged;
- (void)updateContent;
- (void)_contentSizeDidChange;
- (void)_contentSizeDidChangeNotificationHandler;
- (void)setConstraints;
- (void)updateViews;
- (void)_createViews;
- (id)newLabel;
- (BOOL)_mapItemShouldDisplayDistance:(id)arg1;
- (void)ETAProviderUpdated:(id)arg1;
- (void)_loadLogo;
- (BOOL)_isLikelyToShowDistance;
- (void)_setupDatas;
- (id)_openStateString;
- (id)_reviewLabelText;
- (id)_verifiedText;
- (id)_secondaryNameTitle;
- (BOOL)_hasSecondaryName;
- (id)_currentTitle;
- (double)secondaryNameLabelPadding;
- (void)animateSecondLabelWithPercentage:(double)arg1;
@property(nonatomic) double contentAlpha;
- (void)updateHeaderTitle;
- (void)viewDidLoad;
- (void)_commonInit;
- (id)initWithLineItem:(id)arg1 layout:(unsigned long long)arg2;
- (id)initWithPlaceItem:(id)arg1 layout:(unsigned long long)arg2;
- (id)secondaryNameTimingFunction;
- (id)titleFont;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

