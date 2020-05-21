//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject
{
    AVCaptureResolvedPhotoSettingsInternal *_internal;
    BOOL _stillImageStabilizationEnabled;
}

+ (id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2;
@property(readonly, getter=isStillImageStabilizationEnabled) BOOL stillImageStabilizationEnabled; // @synthesize stillImageStabilizationEnabled=_stillImageStabilizationEnabled;
@property(readonly) CDStruct_e83c9415 photoProcessingTimeRange;
@property(readonly) unsigned long long expectedPhotoCount;
@property(readonly, getter=isDualCameraFusionEnabled) BOOL dualCameraFusionEnabled;
@property(readonly, getter=isVirtualDeviceFusionEnabled) BOOL virtualDeviceFusionEnabled;
@property(readonly, getter=isRedEyeReductionEnabled) BOOL redEyeReductionEnabled;
@property(readonly, getter=isFlashEnabled) BOOL flashEnabled;
- (CDStruct_79c71658)dimensionsForSemanticSegmentationMatteOfType:(id)arg1;
@property(readonly) CDStruct_79c71658 portraitEffectsMatteDimensions;
@property(readonly) CDStruct_79c71658 livePhotoMovieDimensions;
@property(readonly) CDStruct_79c71658 rawPhotoDimensions;
@property(readonly) CDStruct_79c71658 rawEmbeddedThumbnailDimensions;
@property(readonly) CDStruct_79c71658 embeddedThumbnailDimensions;
@property(readonly) CDStruct_79c71658 previewDimensions;
@property(readonly) CDStruct_79c71658 photoDimensions;
@property(readonly) long long uniqueID;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2;

@end

