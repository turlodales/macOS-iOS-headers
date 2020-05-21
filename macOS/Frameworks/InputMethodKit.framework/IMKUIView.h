//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IMKUIProperties, NSTimer, NSTrackingArea;

@interface IMKUIView : NSView
{
    BOOL _inScrubbingMode;
    BOOL _trackingMouseMovement;
    NSTimer *_pressingTimer;
    IMKUIProperties *_properties;
    NSTrackingArea *_trackingArea;
    double _intervalSinceLastTouchBegan;
}

@property(nonatomic, getter=isTrackingMouseMovement) BOOL trackingMouseMovement; // @synthesize trackingMouseMovement=_trackingMouseMovement;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSTimer *pressingTimer; // @synthesize pressingTimer=_pressingTimer;
@property(readonly, nonatomic) IMKUIProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) BOOL inScrubbingMode; // @synthesize inScrubbingMode=_inScrubbingMode;
- (void)shouldUpdateForPressAndHold:(id)arg1 position:(struct CGPoint)arg2 with:(long long)arg3;
- (void)touchesEnded:(id)arg1 position:(struct CGPoint)arg2;
- (void)scrubbed:(id)arg1 position:(struct CGPoint)arg2;
- (void)tapped:(id)arg1 position:(struct CGPoint)arg2;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (struct CGPoint)locationInViewWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)_setPressingTimer:(id)arg1;
- (void)stopAndInvalidatePressingTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 properties:(id)arg2;

@end

