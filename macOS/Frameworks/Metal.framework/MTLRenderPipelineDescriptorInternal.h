//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLRenderPipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor
{
    struct MTLRenderPipelineDescriptorPrivate _private;
}

- (id)newSerializedVertexDataWithFlags:(unsigned long long)arg1 error:(id *)arg2;
- (id)serializeFragmentData;
- (void)validateWithDevice:(id)arg1;
- (void)setStencilAttachmentPixelFormat:(unsigned long long)arg1;
- (unsigned long long)stencilAttachmentPixelFormat;
- (void)setDepthAttachmentPixelFormat:(unsigned long long)arg1;
- (unsigned long long)depthAttachmentPixelFormat;
- (id)colorAttachments;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (const struct MTLRenderPipelineDescriptorPrivate *)_descriptorPrivate;
- (id)vertexDescriptor;
- (void)setVertexDescriptor:(id)arg1;
- (void)attachVertexDescriptor:(id)arg1;
- (id)fragmentFunction;
- (void)setFragmentFunction:(id)arg1;
- (id)vertexFunction;
- (void)setVertexFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)fastBlendDescriptorAtIndex:(unsigned long long)arg1;
- (void)reset;
- (void)setInputPrimitiveTopology:(unsigned long long)arg1;
- (unsigned long long)inputPrimitiveTopology;
- (void)setRasterizationEnabled:(BOOL)arg1;
- (BOOL)isRasterizationEnabled;
- (void)setAlphaToOneEnabled:(BOOL)arg1;
- (BOOL)isAlphaToOneEnabled;
- (void)setAlphaToCoverageEnabled:(BOOL)arg1;
- (BOOL)isAlphaToCoverageEnabled;
- (void)setSampleCoverage:(float)arg1;
- (float)sampleCoverage;
- (void)setSampleMask:(unsigned long long)arg1;
- (unsigned long long)sampleMask;
- (void)setSampleCount:(unsigned long long)arg1;
- (unsigned long long)sampleCount;
- (void)setTessellationOutputWindingOrder:(unsigned long long)arg1;
- (unsigned long long)tessellationOutputWindingOrder;
- (void)setTessellationFactorStepFunction:(unsigned long long)arg1;
- (unsigned long long)tessellationFactorStepFunction;
- (void)setTessellationControlPointIndexType:(unsigned long long)arg1;
- (unsigned long long)tessellationControlPointIndexType;
- (void)setTessellationFactorFormat:(unsigned long long)arg1;
- (unsigned long long)tessellationFactorFormat;
- (void)setTessellationFactorScaleEnabled:(BOOL)arg1;
- (BOOL)isTessellationFactorScaleEnabled;
- (void)setMaxTessellationFactor:(unsigned long long)arg1;
- (unsigned long long)maxTessellationFactor;
- (void)setTessellationPartitionMode:(unsigned long long)arg1;
- (unsigned long long)tessellationPartitionMode;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

