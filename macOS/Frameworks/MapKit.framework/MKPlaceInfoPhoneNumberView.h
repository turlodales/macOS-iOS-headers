//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceInfoContactRowView.h>

@class _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoPhoneNumberView : MKPlaceInfoContactRowView
{
    _MKUILabel *_optsOutOfAdsView;
    BOOL _optsOutOfAds;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL optsOutOfAds; // @synthesize optsOutOfAds=_optsOutOfAds;
- (int)analyticsTarget;
- (Class)_labeledValueExpectedValueType;
- (id)formatPhoneNumber:(id)arg1;
- (id)_valueString;
- (id)_iconAccessibilityLabel;
- (id)_icon;
- (id)initWithFrame:(struct CGRect)arg1;

@end

