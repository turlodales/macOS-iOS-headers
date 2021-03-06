//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSLayoutConstraint, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicFactoidView : MKPlaceSectionRowView
{
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    BOOL _isStandAlone;
    _MKUILabel *_keyLabel;
    _MKUILabel *_valueLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _MKUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) _MKUILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void)_contentSizeDidChange;
- (id)_keyLabelFont;
- (void)setUpConstraints;
- (id)_valueLabelWithString:(id)arg1;
- (id)_keyLabelWithString:(id)arg1;
- (id)initWithTextItem:(id)arg1 isStandAloneFactoid:(BOOL)arg2;

@end

