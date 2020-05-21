//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSImage, NSView;

@protocol _MKBalloonCalloutViewConfiguring <NSObject>
@property(readonly, nonatomic, getter=_balloonImage) NSImage *balloonImage;
@property(readonly, nonatomic, getter=_balloonStrokeColor) NSColor *balloonStrokeColor;
@property(readonly, nonatomic, getter=_balloonTintColor) NSColor *balloonTintColor;
@property(readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;

@optional
@property(readonly, nonatomic, getter=_balloonInnerStrokeColor) NSColor *balloonInnerStrokeColor;
@property(readonly, nonatomic, getter=_balloonContentView) NSView *balloonContentView;
- (BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double *)arg1;
@end

