//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface GKNoiseMap : NSObject
{
    float *_map;
    BOOL _seamless;
    // Error parsing type: , name: _sampleCount
    NSDictionary *_gradientColors;
    // Error parsing type: , name: _size
    // Error parsing type: , name: _origin
}

+ (id)noiseMapWithNoise:(id)arg1 size:(BOOL)arg2 origin:sampleCount:seamless: /* Error: Ran out of types for this method. */;
+ (id)noiseMapWithNoise:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(readonly, nonatomic, getter=isSeamless) BOOL seamless; // @synthesize seamless=_seamless;
// Error parsing type for property sampleCount:
// Property attributes: T,R,N,V_sampleCount

// Error parsing type for property origin:
// Property attributes: T,R,N,V_origin

// Error parsing type for property size:
// Property attributes: T,R,N,V_size

- (void)setValue:(float)arg1 atPosition: /* Error: Ran out of types for this method. */;
- (float)interpolatedValueAtPosition: /* Error: Ran out of types for this method. */;
- (float)valueAtPosition: /* Error: Ran out of types for this method. */;
- (id)__colorData;
- (void)dealloc;
- (id)initWithNoise:(id)arg1 size:(BOOL)arg2 origin:sampleCount:seamless: /* Error: Ran out of types for this method. */;
- (id)initWithNoise:(id)arg1;
- (id)init;
- (int)mapIndexX:(int)arg1 y:(int)arg2;

@end

