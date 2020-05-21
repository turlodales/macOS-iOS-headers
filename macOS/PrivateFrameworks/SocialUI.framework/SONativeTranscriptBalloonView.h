//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer, IMDynamicGradientLayer, NSImage, NSLayoutConstraint;

@interface SONativeTranscriptBalloonView : NSView
{
    struct IMBalloonDescriptor_t _balloonDescriptor;
    IMDynamicGradientLayer *_dynamicGradientLayer;
    NSLayoutConstraint *_leadingContentFieldConstraint;
    NSLayoutConstraint *_trailingContentFieldConstraint;
    CALayer *_maskLayer;
    NSImage *_maskImage;
    struct CGRect _contentCenter;
    NSView *_contentView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct IMBalloonDescriptor_t balloonDescriptor; // @synthesize balloonDescriptor=_balloonDescriptor;
@property(readonly, nonatomic) struct NSEdgeInsets edgeInsets; // @dynamic edgeInsets;
- (id)backgroundMaskLayer;
- (void)sizeToFitWithMaximumWidth:(double)arg1;
- (void)_updateMask;
- (void)_setMaskPropertiesOnLayer:(id)arg1;
- (id)_maskLayer;
- (void)_updateConstraints;
- (void)setMaximumWidth:(double)arg1;
- (id)_backgroundColor;
- (void)contentsDidChange;
- (void)addConstraintsToContentView:(id)arg1 withLayoutPadding:(struct NSEdgeInsets)arg2;
- (void)setContentView:(id)arg1 withLayoutPadding:(struct NSEdgeInsets)arg2;
- (void)setGradientWithGradientReferenceView:(id)arg1;
- (void)viewDidChangeBackingProperties;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_updateBackground;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)test_gradientLayer;

@end

