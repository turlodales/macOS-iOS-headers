//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAAdjustmentStack.h>

@class IPAPhotoAdjustmentPipeline;

@interface IPAPhotoAdjustmentStack : IPAAdjustmentStack
{
    long long _orientation;
    IPAPhotoAdjustmentPipeline *_pipeline;
    struct PFIntSize_st _inputSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IPAPhotoAdjustmentPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct PFIntSize_st inputSize; // @synthesize inputSize=_inputSize;
- (id)_debugDescriptionSuffix;
- (id)maskUUIDs;
- (id)minimumVersionForFormat:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

