//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSImage, NSLayoutConstraint;

@interface MKImageView : NSView
{
    NSLayoutConstraint *_aspectRatioConstraint;
    NSImage *_currentImage;
    BOOL _shouldHighlight;
    NSImage *_highlightImage;
    NSImage *_image;
    NSColor *_highlightColor;
    long long _imageContentMode;
}

@property long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property BOOL shouldHighlight; // @synthesize shouldHighlight=_shouldHighlight;
@property(retain, nonatomic) NSImage *highlightImage; // @synthesize highlightImage=_highlightImage;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)removeConstraintToMaintainAspectRatio;
- (void)setConstraintToMaintainAspectRatio;
- (void)setBackgroundStyle:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (id)_currentImage;
- (void)_setCurrentImage:(id)arg1;
- (void)invalidateHighlightImage;
@property(retain, nonatomic) NSColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

