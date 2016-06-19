//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _MKRotationGestureRecognizer : NSObject
{
    id _target;
    SEL _action;
    BOOL _enabled;
    long long _state;
    struct CGPoint _location;
    double _rotationInDegrees;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (struct CGPoint)locationInView:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
@property(readonly, nonatomic) double rotation;
- (void)_setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

