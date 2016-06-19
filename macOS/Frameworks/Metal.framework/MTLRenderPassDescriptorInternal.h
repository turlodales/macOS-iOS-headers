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
- (unsigned long long)framebufferHeight;
- (void)setFramebufferHeight:(unsigned long long)arg1;
- (unsigned long long)framebufferWidth;
- (void)setFramebufferWidth:(unsigned long long)arg1;
- (unsigned long long)renderTargetArrayLength;
- (void)setRenderTargetArrayLength:(unsigned long long)arg1;
- (id)visibilityResultBuffer;
- (void)setVisibilityResultBuffer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
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

