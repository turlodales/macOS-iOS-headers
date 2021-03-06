//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface UIRTDrawFocusView : NSView
{
    double _width;
    double _opacity;
    NSColor *_color;
    int _kind;
    BOOL _isPreview;
}

+ (void)initialize;
- (void)drawRect:(struct CGRect)arg1;
- (void)setIsPreview:(BOOL)arg1;
- (void)setKind:(int)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)strokeOpacity;
- (void)setStrokeOpacity:(double)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

