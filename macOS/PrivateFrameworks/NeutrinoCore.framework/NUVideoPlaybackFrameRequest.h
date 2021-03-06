//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@class NSDictionary, NUColorSpace;

@interface NUVideoPlaybackFrameRequest : NURenderRequest
{
    NUColorSpace *_colorSpace;
    struct __CVBuffer *_destinationBuffer;
    NSDictionary *_videoFrames;
    CDStruct_1e2b2e48 _renderScale;
    CDStruct_1b6d18a9 _evaluationTime;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *videoFrames; // @synthesize videoFrames=_videoFrames;
@property(nonatomic) CDStruct_912cb5d2 renderScale; // @synthesize renderScale=_renderScale;
@property(nonatomic) CDStruct_1b6d18a9 evaluationTime; // @synthesize evaluationTime=_evaluationTime;
@property(retain, nonatomic) struct __CVBuffer *destinationBuffer; // @synthesize destinationBuffer=_destinationBuffer;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithComposition:(id)arg1;

@end

