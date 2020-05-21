//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSGestureRecognizer.h"

@class NSTimer;

@interface KHLongClickGestureRecognizer : NSGestureRecognizer
{
    NSTimer *_clickTimer;
    struct CGPoint _initialMouseLocation;
    double _minimumPressDuration;
    double _allowableMovement;
}

- (void).cxx_destruct;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
- (void)_minimumDurationElapsed:(id)arg1;
- (void)_stopTimer;
- (void)_startTimer;
- (void)reset;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

