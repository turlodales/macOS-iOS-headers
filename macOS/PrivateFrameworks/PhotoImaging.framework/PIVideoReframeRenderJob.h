//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NURenderJob.h"

@class NSArray;

@interface PIVideoReframeRenderJob : NURenderJob
{
    NSArray *_keyframes;
    double _confidence;
    CDStruct_996ac03c _stabCropRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) CDStruct_996ac03c stabCropRect; // @synthesize stabCropRect=_stabCropRect;
@property(readonly, copy, nonatomic) NSArray *keyframes; // @synthesize keyframes=_keyframes;
- (id)result;
- (BOOL)_createKeyframesFromReframer:(id)arg1 videoTrack:(id)arg2 viewRect:(CDStruct_996ac03c)arg3 timedMetadata:(id)arg4 error:(out id *)arg5;
- (BOOL)_createStabilizedKeyframesFromReframer:(id)arg1 videoTrack:(id)arg2 viewRect:(CDStruct_996ac03c)arg3 timedMetadata:(id)arg4 error:(out id *)arg5;
- (void)_writeDiagnosticFilesForReframer:(id)arg1 metadata:(id)arg2;
- (BOOL)prepare:(out id *)arg1;
- (id)videoReframeRequest;
- (id)scalePolicy;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsRenderStage;

@end

