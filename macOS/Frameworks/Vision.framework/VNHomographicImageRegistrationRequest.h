//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageRegistrationRequest.h>

@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest
{
}

- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)allowsCachingOfResults;
- (BOOL)_calculateHomographicWarpTransform:(CDStruct_8e0628e6 *)arg1 ofFloatingImagePixelBuffer:(struct __CVBuffer *)arg2 ontoReferenceImagePixelBuffer:(struct __CVBuffer *)arg3 usingImageRegistrationContext:(struct ImageRegistrationCtx_s *)arg4 glContext:(void *)arg5 seededWithPreviousWarpTransform:(const CDStruct_8e0628e6 *)arg6 error:(id *)arg7;
- (BOOL)_createN:(unsigned long long)arg1 CVPixelBuffers:(struct __CVBuffer **)arg2 withPixelFormat:(unsigned int)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id *)arg6;
- (struct __CVBuffer *)_createHomographicPixelBufferFromImageBuffer:(id)arg1 cropRect:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4;

@end

