//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCVegaJSMouseEventInterface.h"

@interface CCVegaJSMouseEvent : NSObject <CCVegaJSMouseEventInterface>
{
    _Bool propagationStopped;
    _Bool defaultPrevented;
    _Bool isConsumed;
    double clientX;
    double clientY;
    double movementX;
    double movementY;
}

@property(nonatomic) _Bool isConsumed; // @synthesize isConsumed;
@property(nonatomic) _Bool defaultPrevented; // @synthesize defaultPrevented;
@property(nonatomic) _Bool propagationStopped; // @synthesize propagationStopped;
@property(nonatomic) double movementY; // @synthesize movementY;
@property(nonatomic) double movementX; // @synthesize movementX;
@property(nonatomic) double clientY; // @synthesize clientY;
@property(nonatomic) double clientX; // @synthesize clientX;
- (void)stopPropagation;
- (void)preventDefault;
- (id)initWithLocation:(struct CGPoint)arg1 movement:(struct CGPoint)arg2;

@end

