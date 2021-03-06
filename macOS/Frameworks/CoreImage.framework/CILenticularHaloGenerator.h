//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CILenticularHaloGenerator : CIFilter
{
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputHaloRadius;
    NSNumber *inputHaloWidth;
    NSNumber *inputHaloOverlap;
    NSNumber *inputStriationStrength;
    NSNumber *inputStriationContrast;
    NSNumber *inputTime;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CILenticularHalo;

@end

