//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData
{
    AVCaptureSynchronizedSampleBufferDataInternal *_internal;
}

@property(readonly) long long droppedReason;
@property(readonly) BOOL sampleBufferWasDropped;
@property(readonly) struct opaqueCMSampleBuffer *sampleBuffer;

@end

