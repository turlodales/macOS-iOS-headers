//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCameraCalibrationData, AVCapturePhotoInternal, AVCaptureResolvedPhotoSettings, AVDepthData, AVPortraitEffectsMatte, NSDictionary, NSString;

@interface AVCapturePhoto : NSObject
{
    AVCapturePhotoInternal *_internal;
}

- (long long)lensStabilizationStatus;
- (long long)sequenceCount;
- (id)bracketSettings;
- (struct CGImage *)previewCGImageRepresentation;
- (struct CGImage *)CGImageRepresentation;
- (id)fileDataRepresentationWithCustomizer:(id)arg1;
- (id)fileDataRepresentation;
@property(readonly) NSString *sourceDeviceType;
@property(readonly) long long photoCount;
@property(readonly) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property(readonly) AVCameraCalibrationData *cameraCalibrationData;
@property(readonly) NSDictionary *metadata;
- (id)semanticSegmentationMatteForType:(id)arg1;
@property(readonly) AVPortraitEffectsMatte *portraitEffectsMatte;
@property(readonly) AVDepthData *depthData;
@property(readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property(readonly) struct __CVBuffer *previewPixelBuffer;
@property(readonly) struct __CVBuffer *pixelBuffer;
@property(readonly, getter=isRawPhoto) BOOL rawPhoto;
@property(readonly) CDStruct_1b6d18a9 timestamp;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 captureRequest:(id)arg2;

@end

