//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

@class ShotflowDetectorANFDv2, VNFaceBBoxAligner;

__attribute__((visibility("hidden")))
@interface VNANFDMultiDetector : VNEspressoModelFileBasedDetector
{
    ShotflowDetectorANFDv2 *_mMultiHeadedANFDDetector;
    VNFaceBBoxAligner *_faceBBoxAligner;
}

+ (void)_printDebugInfo:(id)arg1 detectedObjectsRaw:(id)arg2 faceDetectorBGRAImage:(struct __CVBuffer *)arg3 tempImage:(struct vImage_Buffer)arg4;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)knownAnimalIdentifiers;
+ (id)detectedAnimalObjectClassToAnimalName;
+ (id)detectedObjectRequestClassToRequestInfo;
+ (id)detectedObjectClassToRequestClass;
+ (float)faceDetectorChunkAspectRatio;
+ (Class)detectorClass;
- (void).cxx_destruct;
- (id)_alignFace:(id)arg1 imageBuffer:(id)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (BOOL)supportsProcessingDevice:(id)arg1;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;

@end

