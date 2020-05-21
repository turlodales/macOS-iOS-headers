//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class NSImageView, NSTextField, NSTrackingArea, NSView;

@interface BCChatButton : NSControl
{
    BOOL _isInverted;
    long long _style;
    NSTextField *_label;
    NSTextField *_smallLabel;
    NSTrackingArea *_trackingArea;
    NSImageView *_iconImageView;
    NSView *_centeredView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSView *centeredView; // @synthesize centeredView=_centeredView;
@property(retain, nonatomic) NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSTextField *smallLabel; // @synthesize smallLabel=_smallLabel;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
@property(nonatomic) BOOL isInverted; // @synthesize isInverted=_isInverted;
@property(nonatomic) long long style; // @synthesize style=_style;
- (double)lastBaselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGRect)focusRingMaskBounds;
- (void)drawFocusRingMask;
- (BOOL)acceptsFirstResponder;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)color:(struct BCColor)arg1;
- (void)updateTrackingAreas;
- (void)setOpacityForView:(id)arg1 opacity:(double)arg2;
- (void)setTextForLabel:(id)arg1 label:(id)arg2;
- (void)layout;
- (void)sizeToFit;
- (void)setAccessibilityValues;
- (void)_setStyle:(long long)arg1;
- (struct CGSize)calculateButtonLayout;
- (void)updateButtonLayout;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)updateAppearanceForState:(long long)arg1;
- (void)createSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)setup;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;

@end

