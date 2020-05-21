//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLCounterSampleBufferDescriptor.h>

#import "NSCopying.h"

@class NSString;

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying>
{
    id <MTLCounterSet> _counterSet;
    unsigned long long _storageMode;
    NSString *_label;
    unsigned long long _sampleCount;
}

- (void)setSampleCount:(unsigned long long)arg1;
- (unsigned long long)sampleCount;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)storageMode;
- (void)setCounterSet:(id)arg1;
- (id)counterSet;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

