//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSImageView, NSLayoutGuide, NSMutableArray, NSString, NSTextField, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationItemView : NSView
{
    PKPaymentAuthorizationLayout *_paymentAuthorizationLayout;
    NSView *_badgeView;
    NSView *_accessoryView;
    NSString *_label;
    NSArray *_values;
    NSTextField *_labelTextField;
    NSMutableArray *_valueViews;
    NSImageView *_paymentFailureView;
    NSMutableArray *_labelConstraints;
    NSMutableArray *_valueConstraints;
    NSMutableArray *_accessoryConstraints;
    NSMutableArray *_paymentFailureConstraints;
    NSMutableArray *_badgeConstraints;
    NSLayoutGuide *_viewContentLeadingGuide;
    NSLayoutGuide *_viewContentTrailingGuide;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutGuide *viewContentTrailingGuide; // @synthesize viewContentTrailingGuide=_viewContentTrailingGuide;
@property(retain, nonatomic) NSLayoutGuide *viewContentLeadingGuide; // @synthesize viewContentLeadingGuide=_viewContentLeadingGuide;
@property(retain, nonatomic) NSMutableArray *badgeConstraints; // @synthesize badgeConstraints=_badgeConstraints;
@property(retain, nonatomic) NSMutableArray *paymentFailureConstraints; // @synthesize paymentFailureConstraints=_paymentFailureConstraints;
@property(retain, nonatomic) NSMutableArray *accessoryConstraints; // @synthesize accessoryConstraints=_accessoryConstraints;
@property(retain, nonatomic) NSMutableArray *valueConstraints; // @synthesize valueConstraints=_valueConstraints;
@property(retain, nonatomic) NSMutableArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) NSImageView *paymentFailureView; // @synthesize paymentFailureView=_paymentFailureView;
@property(retain, nonatomic) NSMutableArray *valueViews; // @synthesize valueViews=_valueViews;
@property(retain, nonatomic) NSTextField *labelTextField; // @synthesize labelTextField=_labelTextField;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) NSView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout; // @synthesize paymentAuthorizationLayout=_paymentAuthorizationLayout;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)setUpAccessibility;
- (id)_labelAttributedStringWithString:(id)arg1;
- (double)_baselineMarginForValueMode:(long long)arg1;
- (void)updateConstraints;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;

@end

