//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerMultiDetector : VNDetector
{
    unsigned long long _model;
    shared_ptr_eb20c8f2 _defaultSceneClassificationHierarchicalModel;
    struct unique_ptr<vision::mod::ImageAnalyzer, std::__1::default_delete<vision::mod::ImageAnalyzer>> _imageAnalyzer;
    struct unordered_map<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>>> _imageAnalyzerJunkCustomClassifiers;
    struct unique_ptr<vision::mod::ImageAnalyzer_PCA, std::__1::default_delete<vision::mod::ImageAnalyzer_PCA>> _imageAnalyzerPCA256;
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    shared_ptr_53937872 _pipelineImageCorrectionNeed1CustomClassifier_DO_NOT_ACCESS_DIRECTLY;
    vector_950c3afd _cachedAllSceneClassificationsFromLastAnalysis;
}

+ (shared_ptr_eb20c8f2)createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;
+ (id)blacklistForModel:(unsigned long long)arg1;
+ (unsigned long long)modelForRequestClass:(Class)arg1 revision:(unsigned long long)arg2 detectionLevel:(unsigned long long)arg3;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (id)configurationOptionKeysForDetectorKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allJunkClassificationObservationsForOptions:(id)arg1 error:(id *)arg2;
- (id)sceneLabelOperationPointsForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
- (id)allKnownSceneClassificationsWithOptions:(id)arg1 error:(id *)arg2;
- (id)supportedImageSizeSetForProcessingOptions:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromCropRect:(struct CGRect)arg1 ofImageBuffer:(id)arg2 forNetworkInputImageSize:(struct _Geometry2D_size2D_)arg3 imageCropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;
- (BOOL)supportsProcessingDevice:(id)arg1;
- (BOOL)warmUpWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)_getLeafSceneObservations:(id *)arg1 hierarchySceneObservations:(id *)arg2 of32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg3 withOptions:(id)arg4 error:(id *)arg5;
- (id)_observationsForScene:(BOOL)arg1 junk:(BOOL)arg2 sceneprint:(BOOL)arg3 includingLabelsAndConfidences:(BOOL)arg4 compressedSceneprint:(BOOL)arg5 aesthetics:(BOOL)arg6 saliencyHeatMap:(BOOL)arg7 pipelineImageCorrectionNeed1:(BOOL)arg8 of32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg9 withOptions:(id)arg10 originalImageSize:(struct CGSize)arg11 regionOfInterest:(struct CGRect)arg12 warningRecorder:(id)arg13 error:(id *)arg14;
- (id)_observationsForTopN:(const unsigned long long *)arg1 sceneClassificationsInMap:(const unordered_map_b469de21 *)arg2 withMinimumConfidence:(float)arg3 labelBlackList:(id)arg4 sceneRequestRevisionNumber:(unsigned long long)arg5 operationPointsProvider:(id)arg6;
- (id)_observationsForTopN:(const unsigned long long *)arg1 lastAnalysisSceneLabelsWithMinimumConfidence:(float)arg2 excludeObfuscatedLabels:(BOOL)arg3 labelBlackList:(id)arg4 sceneRequestRevisionNumber:(unsigned long long)arg5 operationPointsProvider:(id)arg6;
- (vector_950c3afd *)_lastAnalysisSceneClassifications;
- (BOOL)_performAnalysis:(unsigned int)arg1 on32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)_saliencyObservationsForLastAnalysisWithRegionOfInterest:(struct CGRect)arg1 originalImageSize:(struct CGSize)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(id *)arg5;
- (id)_aestheticsObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (id)_sceneprintObservationsForLastAnalysisOfSceneprint:(BOOL)arg1 includingLabelsAndConfidencesInSceneprint:(BOOL)arg2 compressedSceneprint:(BOOL)arg3 options:(id)arg4 error:(id *)arg5;
- (struct ImageAnalyzer_PCA *)_sceneprintCompressorForCompression:(unsigned long long)arg1 error:(id *)arg2;
- (id)_pipelineImageCorrectionNeed1ForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (shared_ptr_53937872)_pipelineImageCorrectionNeed1CustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_53937872)_loadPipelineImageCorrectionNeed1CustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_junkObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (shared_ptr_6ef80be1)_junkCustomClassifiersForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_6ef80be1)_loadJunkCustomClassifiersForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_53937872)_loadCustomClassifierWithModelName:(id)arg1 labelsFileName:(id)arg2 classifierName:(id)arg3 inputBlobName:(id)arg4 outputBlobName:(id)arg5 espressoEngine:(int)arg6 espressoPlanFlags:(int)arg7 espressoStorageType:(int)arg8 espressoDeviceID:(int)arg9 error:(id *)arg10;
- (id)_sceneObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)_populateLeafSceneObservations:(id)arg1 hierarchySceneObservations:(id)arg2 forLastAnalysisWithOptions:(id)arg3 error:(id *)arg4;
- (unsigned int)_analysisTypeForScene:(BOOL)arg1 junk:(BOOL)arg2 sceneprint:(BOOL)arg3 includingLabelsAndConfidences:(BOOL)arg4 compressedSceneprint:(BOOL)arg5 aesthetics:(BOOL)arg6 saliencyHeatMap:(BOOL)arg7 pipelineImageCorrectionNeed1:(BOOL)arg8;
- (void)_tileRect:(struct CGRect)arg1 horizontally:(BOOL)arg2 vertically:(BOOL)arg3 windowAspectRatio:(double)arg4 overlapPercentage:(double)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 forNetworkInputImageSize:(struct _Geometry2D_size2D_)arg2 imageCropAndScaleOption:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (void)_getImageCropAndScaleOption:(unsigned long long *)arg1 networkRequiredInputImageSize:(struct _Geometry2D_size2D_ *)arg2 forOptions:(id)arg3;

@end

