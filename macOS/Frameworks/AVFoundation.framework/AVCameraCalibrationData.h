//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCameraCalibrationDataInternal, NSData;

@interface AVCameraCalibrationData : NSObject
{
    AVCameraCalibrationDataInternal *_internal;
}

- (id)_distortionLookupTableFromCoefficients:(id)arg1 distortionCenter:(struct CGPoint)arg2 pixelSize:(float)arg3 referenceDimensions:(struct CGSize)arg4 lookupTableLength:(int)arg5;
- (void)dealloc;
- (id)_initEmpty;
- (struct CGImageMetadata *)copyAuxiliaryMetadata;
- (id)cameraCalibrationDataWithExifOrientation:(unsigned int)arg1;
- (id)initWithDepthMetadataDictionary:(id)arg1;
- (id)initWithAuxiliaryMetadata:(struct CGImageMetadata *)arg1;
- (id)cameraCalibrationDataDictionary;
- (id)initWithCameraCalibrationDataDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) struct CGPoint lensDistortionCenter;
@property(readonly, nonatomic) NSData *inverseLensDistortionLookupTable;
@property(readonly, nonatomic) NSData *lensDistortionLookupTable;
@property(readonly, nonatomic) float pixelSize;
@property(readonly, nonatomic) CDStruct_14d5dc5e extrinsicMatrix;
@property(readonly, nonatomic) struct CGSize intrinsicMatrixReferenceDimensions;
@property(readonly, nonatomic) CDStruct_8e0628e6 intrinsicMatrix;
- (id)description;
- (id)debugDescription;

@end

