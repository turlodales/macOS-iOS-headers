//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, MTLToolsFunction;

@interface MTLGPUDebugComputePipelineState : MTLToolsComputePipelineState
{
    MTLComputePipelineDescriptor *_descriptor;
    MTLComputePipelineReflection *_reflection;
}

@property(readonly, nonatomic) MTLComputePipelineReflection *reflection; // @synthesize reflection=_reflection;
- (void)dealloc;
@property(readonly, nonatomic) MTLToolsFunction *computeFunction;
- (id)initWithComputePipelineState:(id)arg1 descriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4;

@end

