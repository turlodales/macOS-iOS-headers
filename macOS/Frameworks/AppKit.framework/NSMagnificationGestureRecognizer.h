//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

@class _NSGestureRecognizerTransformAnalyzer;

@interface NSMagnificationGestureRecognizer : NSGestureRecognizer
{
    struct CGPoint _location;
    struct CGPoint _translation;
    double _magnification;
    id _touchID1;
    id _touchID2;
    double _initialTouchDistance;
    _NSGestureRecognizerTransformAnalyzer *_transformAnalyzer;
}

@property double magnification; // @synthesize magnification=_magnification;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)translateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)reset;
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (void)_appendSubclassDescription:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

