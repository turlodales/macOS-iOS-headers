//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceSegmentGenerator : VNEspressoModelFileBasedDetector
{
    struct shared_ptr<vision::mod::FaceSegmenterDNN> _faceSegmenterDNN;
}

+ (float)_faceSegmenterMaximumInputImageAspectRatio;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_fillFaceSegmentLabelToProbabilityMap:(id)arg1 error:(id *)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (BOOL)supportsProcessingDevice:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (BOOL)_getNumberOfSupportedFaceSegments:(unsigned long long *)arg1 forRequestRevision:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_getFaceSegmenterInputImageSize:(struct CGSize *)arg1 forRequestRevision:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;

@end

