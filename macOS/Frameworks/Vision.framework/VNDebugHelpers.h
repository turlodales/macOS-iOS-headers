//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNDebugHelpers : NSObject
{
}

+ (BOOL)doesAreaOverlapBetweenRect:(struct CGRect)arg1 andOtherRect:(struct CGRect)arg2 withOverlapRatioGreaterThan:(double)arg3;
+ (BOOL)doesAreaOverlapSignificantlyBetweenRect:(struct CGRect)arg1 andOtherRect:(struct CGRect)arg2;
+ (float)computeNormalizedCosineDistanceOfFaceprint:(id)arg1 toFaceprint:(id)arg2;

@end

