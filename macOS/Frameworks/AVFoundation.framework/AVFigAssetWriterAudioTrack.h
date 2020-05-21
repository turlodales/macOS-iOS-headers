//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVFigAssetWriterTrack.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack
{
    NSMutableArray *_pendingAudioSampleBuffers;
}

- (BOOL)markEndOfDataReturningError:(id *)arg1;
- (void)prepareToEndSession;
- (BOOL)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (BOOL)_flushPendingSampleBuffersReturningError:(id *)arg1;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(BOOL)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(BOOL)arg6 error:(id *)arg7;

@end

