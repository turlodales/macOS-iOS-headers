//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLRenderPassDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor
{
    struct MTLRenderPassDescriptorPrivate _private;
}

+ (id)renderPassDescriptor;
- (const struct MTLRenderPassDescriptorPrivate *)_descriptorPrivate;
- (BOOL)validate:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;
- (unsigned long long)getSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (void)setSamplePositions:(const CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (void)setRasterizationRateMap:(id)arg1;
- (id)rasterizationRateMap;
- (unsigned long long)defaultRasterSampleCount;
- (void)setDefaultRasterSampleCount:(unsigned long long)arg1;
- (BOOL)openGLModeEnabled;
- (void)setOpenGLModeEnabled:(BOOL)arg1;
- (BOOL)isDitherEnabled;
- (void)setDitherEnabled:(BOOL)arg1;
- (unsigned long long)renderTargetHeight;
- (void)setRenderTargetHeight:(unsigned long long)arg1;
- (unsigned long long)renderTargetWidth;
- (void)setRenderTargetWidth:(unsigned long long)arg1;
- (unsigned long long)renderTargetArrayLength;
- (void)setRenderTargetArrayLength:(unsigned long long)arg1;
- (id)visibilityResultBuffer;
- (void)setVisibilityResultBuffer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)stencilAttachment;
- (void)setStencilAttachment:(id)arg1;
- (id)depthAttachment;
- (void)setDepthAttachment:(id)arg1;
- (id)colorAttachments;
- (id)init;

@end

