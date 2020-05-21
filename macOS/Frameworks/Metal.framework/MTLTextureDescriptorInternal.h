//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLTextureDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLTextureDescriptorInternal : MTLTextureDescriptor
{
    struct MTLTextureDescriptorPrivate _private;
}

- (BOOL)validateWithDevice:(id)arg1;
- (const struct MTLTextureDescriptorPrivate *)descriptorPrivate;
- (BOOL)isDrawable;
- (void)setIsDrawable:(BOOL)arg1;
- (void)setFramebufferOnly:(BOOL)arg1;
- (BOOL)framebufferOnly;
- (BOOL)writeSwizzleEnabled;
- (void)setWriteSwizzleEnabled:(BOOL)arg1;
- (unsigned int)swizzleKey;
- (void)setSwizzleKey:(unsigned int)arg1;
- (CDStruct_a06f635e)swizzle;
- (void)setSwizzle:(CDStruct_a06f635e)arg1;
- (void)setTextureUsage:(unsigned long long)arg1;
- (unsigned long long)textureUsage;
- (void)setUsage:(unsigned long long)arg1;
- (unsigned long long)usage;
- (void)setHazardTrackingMode:(unsigned long long)arg1;
- (unsigned long long)hazardTrackingMode;
- (void)setResourceOptions:(unsigned long long)arg1;
- (unsigned long long)resourceOptions;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)storageMode;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (unsigned long long)protectionOptions;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (unsigned long long)cpuCacheMode;
- (void)setResourceIndex:(unsigned long long)arg1;
- (unsigned long long)resourceIndex;
- (void)setForceResourceIndex:(BOOL)arg1;
- (BOOL)forceResourceIndex;
- (void)setAllowGPUOptimizedContents:(BOOL)arg1;
- (BOOL)allowGPUOptimizedContents;
- (void)setArrayLength:(unsigned long long)arg1;
- (unsigned long long)arrayLength;
- (void)setSampleCount:(unsigned long long)arg1;
- (unsigned long long)sampleCount;
- (void)setMipmapLevelCount:(unsigned long long)arg1;
- (unsigned long long)mipmapLevelCount;
- (void)setDepth:(unsigned long long)arg1;
- (unsigned long long)depth;
- (void)setHeight:(unsigned long long)arg1;
- (unsigned long long)height;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;
- (void)setPixelFormat:(unsigned long long)arg1;
- (unsigned long long)pixelFormat;
- (void)setTextureType:(unsigned long long)arg1;
- (unsigned long long)textureType;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end

