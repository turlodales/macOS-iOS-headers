//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNFaceLandmarkDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorRevision1 : VNFaceLandmarkDetector
{
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkAlgorithmImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkMouthRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkRightEyeRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkLeftEyeRefinerImpl;
    BOOL modelFilesWereMemmapped;
    id <VNModelFile> mCoreLandmarkModelFileHandle;
    id <VNModelFile> mLandmarkRefinerModelFileHandle;
}

+ (void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(struct __CVBuffer *)arg2 alignedBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_)arg3 meanShapeInLumaIntermediate:(const vector_f48c7054 *)arg4 landmarkPointsInLumaIntermediate:(const vector_f48c7054 *)arg5;
+ (BOOL)shouldDumpDebugIntermediates;
+ (id)configurationOptionKeysForDetectorKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)cascadeStepCountLoaded;
- (unsigned long long)cascadeStepCountInOriginalModel;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (BOOL)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id *)arg2;
- (BOOL)loadRefinersAndReturnError:(id *)arg1;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;

@end

