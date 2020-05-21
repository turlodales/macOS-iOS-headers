//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurPreProcess : CIFilter
{
    CIImage *inputImage;
    CIImage *inputBlurmapImage;
    NSNumber *inputUseMetal;
}

@property(copy, nonatomic) NSNumber *inputUseMetal; // @synthesize inputUseMetal;
@property(retain) CIImage *inputBlurmapImage; // @synthesize inputBlurmapImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernelMetal;
- (id)_kernel;

@end

