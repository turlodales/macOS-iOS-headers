//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage;

@interface PIInverseFakeBoost : CIFilter
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

