//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceprintGenerator : VNDetector
{
    shared_ptr_b26ea6de m_FaceDescriptorImpl;
    struct shared_ptr<vision::mod::FaceFrontalizer> m_FaceFrontalizerImpl;
    struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> m_DescriptorAugmenter;
    struct shared_ptr<unsigned char> m_FaceFrontalizerWorkingBuffer;
    struct vImage_Buffer m_FaceFrontalizerImageBuffer;
    BOOL _useLowPriorityMode;
    unsigned long long _metalContextPriority;
    unsigned long long _length;
}

+ (BOOL)shouldDumpDebugIntermediates;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (CDUnknownFunctionPointerType)getFaceJunkClassifier;
+     // Error parsing type: 16@0:8, name: frontalizer
+ (struct __CVBuffer *)cropFaceBoundingBoxFrom:(id)arg1 cropBounds:(struct CGRect)arg2 error:(id *)arg3;
+ (struct CGRect)faceBoundingBox:(id)arg1;
+ (CDUnknownFunctionPointerType)faceDescriptorCreator;
+ (id)configurationOptionKeysForDetectorKey;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) BOOL useLowPriorityMode; // @synthesize useLowPriorityMode=_useLowPriorityMode;
- (void)printDebugInfoFor:(struct __CVBuffer *)arg1 imageBuffer:(id)arg2 originalImageLumaCrop:(struct vImage_Buffer)arg3 faceBBoxInLumaCropCoordinates:(struct CGRect)arg4 magnifiedBBoxInLumaCropCoordinates:(struct _Geometry2D_rect2D_)arg5;
- (BOOL)isFaceprinterCompatibleWithFaceprinterCreatedWithOptions:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;
@property(readonly, nonatomic) unsigned long long metalContextPriority;

@end

