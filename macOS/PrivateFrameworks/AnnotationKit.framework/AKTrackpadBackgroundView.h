//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSGradient;

@interface AKTrackpadBackgroundView : NSView
{
    NSColor *_topColor;
    NSColor *_bottomColor;
    NSGradient *_gradient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSGradient *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) NSColor *bottomColor; // @synthesize bottomColor=_bottomColor;
@property(retain, nonatomic) NSColor *topColor; // @synthesize topColor=_topColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

