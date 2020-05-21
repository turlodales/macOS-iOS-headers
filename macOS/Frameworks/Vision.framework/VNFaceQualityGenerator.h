//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceQualityGenerator : VNDetector
{
    struct shared_ptr<vision::mod::FaceQualityPredictor> _mFaceQualityPredictor;
    struct FaceQualityOptions _mNetworkOptions;
}

+ (id)configurationOptionKeysForDetectorKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;
- (BOOL)supportsProcessingDevice:(id)arg1;

@end

