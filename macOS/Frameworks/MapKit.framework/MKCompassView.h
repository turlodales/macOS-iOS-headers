//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CAGradientLayer, CALayer, CATextLayer;

@interface MKCompassView : NSView
{
    BOOL _wasDragged;
    BOOL _innerClick;
    struct CGPoint _clickPosition;
    BOOL _enabled;
    CALayer *rotationLayer;
    CALayer *tiltLayer;
    CATextLayer *textLayer;
    CAGradientLayer *gradientLayer;
    long long _outerRingTooltipTag;
    long long _innerDiscTooltipTag;
    long long _innerDiscTrackingRectTag;
}

@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct CGRect)_innerDiscRect;
- (void)updateTooltipForInnerDiscHovered:(BOOL)arg1;
- (void)updateTooltip;
- (void)updateHighlight;
- (void)viewDidMoveToWindow;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (BOOL)isPointInOuterRing:(struct CGPoint)arg1;
- (BOOL)isPointInInnerPortion:(struct CGPoint)arg1;
- (void)resetCompassFlatWithMapPitch:(double)arg1 pitchEnabled:(BOOL)arg2;
- (void)resetNeedleToNorthWithMapYaw:(double)arg1;
- (void)updateAccessibilityDescriptionWithAngle:(double)arg1;
- (void)viewDidChangeBackingProperties;
- (void)setupCompassForDPI:(BOOL)arg1;
- (BOOL)canBecomeKeyView;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)accessibilityIsIgnored;

@end

