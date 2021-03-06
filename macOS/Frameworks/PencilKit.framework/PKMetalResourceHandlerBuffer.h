//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKMetalBuffer;
@protocol MTLDevice;

@interface PKMetalResourceHandlerBuffer : NSObject
{
    id <MTLDevice> _device;
    PKMetalBuffer *_buffer;
    unsigned long long _currentOffset;
    unsigned long long _bufferSize;
    unsigned long long _options;
    BOOL _purgeable;
}

- (void).cxx_destruct;
- (id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void *)arg2 outOffset:(unsigned long long *)arg3;
- (id)initWithSize:(unsigned long long)arg1 options:(unsigned long long)arg2 device:(id)arg3 purgeable:(BOOL)arg4;

@end

