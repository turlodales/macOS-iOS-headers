//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsMotionEstimationPipeline.h>

@class MTLMotionEstimationPipelineDescriptor;

@interface MTLDebugMotionEstimationPipeline : MTLToolsMotionEstimationPipeline
{
    MTLMotionEstimationPipelineDescriptor *_descriptor;
}

@property(readonly, nonatomic) MTLMotionEstimationPipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;

@end

