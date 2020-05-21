//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface RedPupilLocalizer : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputIterations;
    NSNumber *inputScale;
    NSNumber *inputDecay;
    NSNumber *inputGamma;
    NSNumber *inputClip;
    NSNumber *inputLocalizationRadius;
    CIVector *inputExtent;
    NSNumber *inputDebug;
    CIVector *inputAxisLong;
    CIVector *inputAxisShort;
    CIVector *inputPupilCenter;
    NSNumber *inputSearchAxisLong;
    NSNumber *inputSearchAxisShort;
}

@property(retain, nonatomic) NSNumber *inputSearchAxisShort; // @synthesize inputSearchAxisShort;
@property(retain, nonatomic) NSNumber *inputSearchAxisLong; // @synthesize inputSearchAxisLong;
@property(retain, nonatomic) CIVector *inputPupilCenter; // @synthesize inputPupilCenter;
@property(retain, nonatomic) CIVector *inputAxisShort; // @synthesize inputAxisShort;
@property(retain, nonatomic) CIVector *inputAxisLong; // @synthesize inputAxisLong;
@property(retain, nonatomic) NSNumber *inputDebug; // @synthesize inputDebug;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) NSNumber *inputLocalizationRadius; // @synthesize inputLocalizationRadius;
@property(retain, nonatomic) NSNumber *inputClip; // @synthesize inputClip;
@property(retain, nonatomic) NSNumber *inputGamma; // @synthesize inputGamma;
@property(retain, nonatomic) NSNumber *inputDecay; // @synthesize inputDecay;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputIterations; // @synthesize inputIterations;
- (id)outputImage;

@end

