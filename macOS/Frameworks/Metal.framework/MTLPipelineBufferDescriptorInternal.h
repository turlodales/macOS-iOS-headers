//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLPipelineBufferDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor
{
    struct MTLPipelineBufferDescriptorPrivate _private;
}

- (const struct MTLPipelineBufferDescriptorPrivate *)_descriptorPrivate;
- (void)setMutability:(unsigned long long)arg1;
- (unsigned long long)mutability;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isDefault;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

