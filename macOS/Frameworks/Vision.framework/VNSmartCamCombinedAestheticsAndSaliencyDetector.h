//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNSmartCamCombinedAestheticsAndSaliencyDetector : VNEspressoModelFileBasedDetector
{
}

- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)_classifyAesthetics:(BOOL)arg1 generateSaliencyHeatMap:(BOOL)arg2 for32BGRAImageInPixelBuffer:(struct __CVBuffer *)arg3 withOptions:(id)arg4 modelInputImageSize:(struct CGSize)arg5 originalImageSize:(struct CGSize)arg6 regionOfInterest:(struct CGRect)arg7 warningRecorder:(id)arg8 error:(id *)arg9;

@end

