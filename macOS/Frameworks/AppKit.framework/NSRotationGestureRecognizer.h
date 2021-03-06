//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

@interface NSRotationGestureRecognizer : NSGestureRecognizer
{
    struct CGPoint _location;
    struct CGPoint _reserved1;
    double _rotation;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property double rotationInDegrees; // @synthesize rotationInDegrees=_rotation;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)translateWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)reset;
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
@property double rotation;
- (void)_appendSubclassDescription:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

