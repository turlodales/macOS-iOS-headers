//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapRefinementThreshold : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputThreshold;
}

@property(retain) NSNumber *inputThreshold; // @synthesize inputThreshold;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)kernel;

@end

