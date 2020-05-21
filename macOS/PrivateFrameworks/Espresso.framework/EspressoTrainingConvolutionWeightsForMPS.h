//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Espresso/EspressoConvolutionWeightsForMPS.h>

__attribute__((visibility("hidden")))
@interface EspressoTrainingConvolutionWeightsForMPS : EspressoConvolutionWeightsForMPS
{
    _Bool is_training;
    id <MTLBuffer> _weightsBuffer;
    id <MTLBuffer> _biasesBuffer;
}

- (void).cxx_destruct;
@property(retain) id <MTLBuffer> biasesBuffer; // @synthesize biasesBuffer=_biasesBuffer;
@property(retain) id <MTLBuffer> weightsBuffer; // @synthesize weightsBuffer=_weightsBuffer;
- (unsigned int)weightsLayout;
- (BOOL)ready;
- (float *)biasTerms;
- (void *)weights;
- (id)initWithParams:(struct convolution_uniforms)arg1 forMode:(_Bool)arg2;

@end

