//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@interface UXResizableImage : NSImage
{
    BOOL _alwaysStretches;
    BOOL _needsInsetUpdate;
    struct NSEdgeInsets _capInsets;
    NSImage *topLeftCorner;
    NSImage *topEdgeFill;
    NSImage *topRightCorner;
    NSImage *leftEdgeFill;
    NSImage *centerFill;
    NSImage *rightEdgeFill;
    NSImage *bottomLeftCorner;
    NSImage *bottomEdgeFill;
    NSImage *bottomRightCorner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *bottomRightCorner; // @synthesize bottomRightCorner;
@property(retain, nonatomic) NSImage *bottomEdgeFill; // @synthesize bottomEdgeFill;
@property(retain, nonatomic) NSImage *bottomLeftCorner; // @synthesize bottomLeftCorner;
@property(retain, nonatomic) NSImage *rightEdgeFill; // @synthesize rightEdgeFill;
@property(retain, nonatomic) NSImage *centerFill; // @synthesize centerFill;
@property(retain, nonatomic) NSImage *leftEdgeFill; // @synthesize leftEdgeFill;
@property(retain, nonatomic) NSImage *topRightCorner; // @synthesize topRightCorner;
@property(retain, nonatomic) NSImage *topEdgeFill; // @synthesize topEdgeFill;
@property(retain, nonatomic) NSImage *topLeftCorner; // @synthesize topLeftCorner;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(BOOL)arg5 hints:(id)arg6;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (void)updateNinePart;
- (id)imageWithRect:(struct CGRect)arg1;
- (struct CGRect)_gkContentStretchInPixels;
- (id)initWithImage:(id)arg1 capInsets:(struct NSEdgeInsets)arg2;

@end

