//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "PKCanvasViewDelegate.h"

@class NSColor, NSTrackingArea, PKCanvasView, PKDrawing, PKInk;

@interface AKInkSignatureView : NSView <PKCanvasViewDelegate>
{
    BOOL _hasStrokes;
    NSColor *_strokeColor;
    PKCanvasView *_canvasView;
    PKInk *_ink;
    PKDrawing *_latestDrawing;
    NSTrackingArea *_trackingArea;
}

- (void).cxx_destruct;
@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain) PKDrawing *latestDrawing; // @synthesize latestDrawing=_latestDrawing;
@property(copy) PKInk *ink; // @synthesize ink=_ink;
@property(retain) PKCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property BOOL hasStrokes; // @synthesize hasStrokes=_hasStrokes;
@property(retain, nonatomic) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)canvasViewDrawingDidChange:(id)arg1;
- (struct CGPath *)copyPotracedPathAndReturnDrawing:(id *)arg1;
- (void)clear;
- (void)_updateInk;
- (void)layout;
- (void)teardown;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

