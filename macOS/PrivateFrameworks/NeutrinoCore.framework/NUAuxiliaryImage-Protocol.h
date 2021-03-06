//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class AVDepthData, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, NSDictionary;

@protocol NUAuxiliaryImage <NSObject>
@property(readonly) long long auxiliaryImageType;
- (struct __CVBuffer *)cvPixelBufferRef;
- (unsigned int)pixelFormatType;
- (NSDictionary *)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;

@optional
- (AVSemanticSegmentationMatte *)underlyingAVSemanticSegmentationMatte;
- (AVPortraitEffectsMatte *)underlyingAVPortraitEffectsMatte;
- (AVDepthData *)underlyingAVDepthData;
@end

