//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIForwardFakeBoost : CIFilter
{
    double _inputBoost;
    CIImage *_inputImage;
}

+ (id)kernel;
- (void).cxx_destruct;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
@property double inputBoost; // @synthesize inputBoost=_inputBoost;
- (id)outputImage;

@end

