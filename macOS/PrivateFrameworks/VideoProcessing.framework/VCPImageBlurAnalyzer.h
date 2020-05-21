//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPBlurAnalyzer.h>

@class NSArray, VCPCNNBlurAnalyzer, VCPCNNData, VCPCNNModel;

@interface VCPImageBlurAnalyzer : VCPBlurAnalyzer
{
    float _sharpnessBlocks[16];
    NSArray *_faces;
    VCPCNNModel *_faceModel;
    VCPCNNData *_faceInput;
    BOOL _useGPU;
    BOOL _sdof;
    float _contrast;
    VCPCNNBlurAnalyzer *_blurAnalyzer;
    float _sharpness;
    float _textureScore;
}

- (void).cxx_destruct;
@property(readonly) float textureScore; // @synthesize textureScore=_textureScore;
@property(readonly) float sharpness; // @synthesize sharpness=_sharpness;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)computeLocalSharpness:(struct __CVBuffer *)arg1;
- (void)spatialPooling;
- (int)computeSharpnessScore:(float *)arg1 forFacesInImage:(struct __CVBuffer *)arg2;
- (void)setFaceResults:(id)arg1;
- (id)initWithFaceResults:(id)arg1 sdof:(BOOL)arg2;

@end

