//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSImage;

__attribute__((visibility("hidden")))
@interface CAPannerView : NSView
{
    double mAngle;
    struct CGPoint mCenterPoint;
    double mRadius;
    NSImage *backgroundImage;
    double indicatorWidth;
    NSColor *indicatorColor;
    BOOL mIsEnabled;
    BOOL mIsHighlighted;
}

- (BOOL)isFlipped;
- (void)setAngle:(double)arg1;
- (double)angle;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawKnobValueIndicator;
- (void)setAngleIndicatorColor:(id)arg1;
- (void)setAngleIndicatorWidth:(double)arg1;
- (void)setBackgroundImage:(id)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

