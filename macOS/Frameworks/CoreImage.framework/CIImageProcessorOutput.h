//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIImageProcessorInOut.h>

#import "CIImageProcessorOutput.h"

__attribute__((visibility("hidden")))
@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput>
{
    id <MTLCommandBuffer> _cmdBuffer;
}

- (_Bool)metalCommandBufferRequested;
@property(readonly, nonatomic) id <MTLCommandBuffer> metalCommandBuffer;
@property(readonly, nonatomic) id <MTLTexture> metalTexture;
@property(readonly, nonatomic) void *baseAddress;
- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 bounds:(struct CGRect)arg3 context:(struct Context *)arg4;

// Remaining properties
@property(readonly, nonatomic) unsigned long long bytesPerRow;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) struct CGRect region;
@property(readonly, nonatomic) struct __IOSurface *surface;

@end

