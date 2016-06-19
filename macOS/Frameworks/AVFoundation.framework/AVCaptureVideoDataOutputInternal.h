//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureVideoSettings, NSObject<OS_dispatch_queue>;

@interface AVCaptureVideoDataOutputInternal : NSObject
{
    id <AVCaptureVideoDataOutputSampleBufferDelegate> delegate;
    NSObject<OS_dispatch_queue> *clientQueue;
    struct __CFDictionary *videoDecompressorUnits;
    struct __CFDictionary *videoFrameRateGovernorUnits;
    struct __CFDictionary *videoCompressorUnits;
    struct __CFDictionary *videoToProcsUnits;
    struct __CFDictionary *callbackData;
    AVCaptureVideoSettings *videoSettings;
    BOOL alwaysDiscardsLateVideoFrames;
}

- (void)finalize;
- (void)dealloc;
- (id)init;

@end

