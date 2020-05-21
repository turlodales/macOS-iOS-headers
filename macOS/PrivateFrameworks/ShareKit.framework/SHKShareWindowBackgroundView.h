//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSTextField, NSTextView;

@interface SHKShareWindowBackgroundView : NSView
{
    NSTextView *_messageTextView;
    NSTextField *_charactersCountTextField;
    NSView *_partsSeparatorTopView;
    NSView *_partsSeparatorBottomView;
    int _textureStyle;
    BOOL _hasLinesOfNonDefaultHeight;
    NSColor *_backgroundFillColor;
    BOOL _doNotDrawThirdSeparationLine;
}

+ (id)defaultAnimationForKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL doNotDrawThirdSeparationLine; // @synthesize doNotDrawThirdSeparationLine=_doNotDrawThirdSeparationLine;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBevelInRect:(struct CGRect)arg1;
- (void)drawBevel;
- (void)drawScalableImage:(id)arg1 scaleTopLeft:(struct CGPoint)arg2 scaleBottomRight:(struct CGPoint)arg3 inFrame:(struct CGRect)arg4;
- (BOOL)drawGrid;
- (void)drawHorizontalSeparationLineAtHeight:(double)arg1 horizontalPadding:(double)arg2;
- (void)drawHorizontalSeparationLineAtHeight:(double)arg1;
- (void)drawTexture;
- (void)_endClip;
- (void)_beginClip;
- (id)_bezierPath;
@property(copy) NSColor *backgroundFillColor;
@property int textureStyle; // @synthesize textureStyle=_textureStyle;
- (id)SHKBackgroundFillColor;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

