//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MPAnimationPath.h>

@class NSMutableSet;

@interface MPAnimationPathKeyframed : MPAnimationPath
{
    NSMutableSet *_keyframes;
}

+ (id)animationPath;
- (double)relativeTimeForKeyframe:(id)arg1;
- (id)parent;
- (id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 forDuration:(double)arg4;
- (id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 forDuration:(double)arg3;
- (id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3;
- (id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2;
- (id)createKeyframeWithPoint:(struct CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3;
- (id)newKeyframeWithPoint:(struct CGPoint)arg1 atTime:(double)arg2;
- (id)createKeyframeWithPoint:(struct CGPoint)arg1 atTime:(double)arg2;
- (id)createKeyframeWithScalar:(double)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3;
- (id)newKeyframeWithScalar:(double)arg1 atTime:(double)arg2;
- (id)createKeyframeWithScalar:(double)arg1 atTime:(double)arg2;
- (void)removeAllKeyframes;
- (void)removeKeyframes:(id)arg1;
- (void)removeKeyframe:(id)arg1;
- (void)addKeyframes:(id)arg1;
- (void)addKeyframe:(id)arg1;
- (id)orderedKeyframes;
- (id)keyframes;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)fullDebugLog;
- (void)dump;
- (double)parentMainDuration;
- (double)parentPhaseOutDuration;
- (double)parentPhaseInDuration;
- (void)setAnimationPath:(id)arg1;
- (void)cleanup;
- (void)copyKeyframes:(id)arg1;

@end

