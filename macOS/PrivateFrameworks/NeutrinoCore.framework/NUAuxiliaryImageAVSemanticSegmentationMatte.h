//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUAuxiliaryImage.h"

@class AVSemanticSegmentationMatte, NSString;

@interface NUAuxiliaryImageAVSemanticSegmentationMatte : NSObject <NUAuxiliaryImage>
{
    long long _auxiliaryImageType;
    AVSemanticSegmentationMatte *_avSemanticSegmentationMatte;
}

- (void).cxx_destruct;
@property(readonly) AVSemanticSegmentationMatte *avSemanticSegmentationMatte; // @synthesize avSemanticSegmentationMatte=_avSemanticSegmentationMatte;
@property(readonly) long long auxiliaryImageType; // @synthesize auxiliaryImageType=_auxiliaryImageType;
- (struct __CVBuffer *)cvPixelBufferRef;
- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;
- (id)underlyingAVSemanticSegmentationMatte;
- (id)initAuxiliaryImageFromAVSemanticSegmentationMatte:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

