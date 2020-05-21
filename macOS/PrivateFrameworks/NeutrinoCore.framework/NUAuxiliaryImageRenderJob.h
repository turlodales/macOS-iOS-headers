//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class CIRenderTask, NUCVPixelBuffer;

@interface NUAuxiliaryImageRenderJob : NURenderJob
{
    unsigned int _pixelFormat;
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_cvBuffer;
    id <NUAuxiliaryImage> _auxiliaryImage;
    long long _auxiliaryImageType;
}

- (void).cxx_destruct;
@property long long auxiliaryImageType; // @synthesize auxiliaryImageType=_auxiliaryImageType;
@property(retain) id <NUAuxiliaryImage> auxiliaryImage; // @synthesize auxiliaryImage=_auxiliaryImage;
- (id)result;
- (void)cleanUp;
- (BOOL)complete:(out id *)arg1;
- (BOOL)render:(out id *)arg1;
- (BOOL)prepare:(out id *)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)scalePolicy;
- (BOOL)wantsRenderScaleClampedToNativeScale;
- (BOOL)wantsRenderNodeCached;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsOutputImage;
- (BOOL)wantsOutputGeometry;

@end

