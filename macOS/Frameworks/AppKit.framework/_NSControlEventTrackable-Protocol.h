//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent, NSView;

@protocol _NSControlEventTrackable <NSObject>
@property(setter=_setInSendAction:) BOOL _inSendAction;
@property(readonly) unsigned long long sendActionOnMask;
@property(readonly) BOOL isContinuous;
@property(readonly) BOOL isEnabled;
@property(getter=isHighlighted) BOOL highlighted;
- (BOOL)_sendActionFrom:(NSView *)arg1;
- (BOOL)_shouldSendActionForEventType:(unsigned long long)arg1;
- (void)_controlContinueTrackingPeriodically:(NSEvent *)arg1 inView:(NSView *)arg2;
- (BOOL)_controlContinueTrackingPressure:(NSEvent *)arg1 inView:(NSView *)arg2;
- (void)_controlStopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(NSView *)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)_controlContinueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(NSView *)arg3;
- (BOOL)_controlStartTrackingAt:(struct CGPoint)arg1 inView:(NSView *)arg2;
- (BOOL)_hitTestForTrackMouseEvent:(NSEvent *)arg1 inRect:(struct CGRect)arg2 ofView:(NSView *)arg3;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
- (void)setNextState;
@end

