//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKCalloutView.h>

@class CALayer, CAShapeLayer, MKImageView, NSColor, NSImage, NSView;

@interface _MKBalloonCalloutView : MKCalloutView
{
    NSView *_shadowView;
    NSView *_containerView;
    NSColor *_balloonTintColor;
    NSColor *_strokeColor;
    NSColor *_innerStrokeColor;
    CAShapeLayer *_balloonShape;
    CALayer *_balloonInnerStrokeLayer;
    MKImageView *_balloonBodyImageView;
    MKImageView *_tailView;
    NSView *_innerBackgroundView;
    MKImageView *_imageView;
    struct CGSize _intrinsicSize;
    struct CGSize _shadowSize;
    BOOL _originatesAsSmallBalloon;
    double _croppedImageScale;
    MKImageView *_contentViewMaskView;
    NSView *_contentView;
    long long _style;
    NSImage *_image;
    double _smallBalloonScale;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSColor *innerStrokeColor; // @synthesize innerStrokeColor=_innerStrokeColor;
@property(copy, nonatomic) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double smallBalloonScale; // @synthesize smallBalloonScale=_smallBalloonScale;
@property(nonatomic) BOOL originatesAsSmallBalloon; // @synthesize originatesAsSmallBalloon=_originatesAsSmallBalloon;
@property(copy, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSColor *balloonTintColor; // @synthesize balloonTintColor=_balloonTintColor;
- (BOOL)calloutContainsPoint:(struct CGPoint)arg1;
- (void)dismissAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)hideCalloutAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showCalloutAnimated:(BOOL)arg1;
- (void)_updateCroppedImage;
- (void)viewDidMoveToWindow;
- (BOOL)isFlipped;
- (void)layout;
- (double)_innerDiameter;
- (struct CGRect)_centerFrame;
- (struct CGSize)intrinsicContentSize;
- (void)_updateStyle;
- (void)_commonInit;
- (id)initWithStyle:(long long)arg1;
- (id)initWithAnnotationView:(id)arg1;

@end

