//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIExposureAdjust : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputEV;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputEV; // @synthesize inputEV;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (BOOL)_isIdentity;

@end

