//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureAudioSettings, NSObject<OS_dispatch_queue>;

@interface AVCaptureAudioDataOutputInternal : NSObject
{
    id <AVCaptureAudioDataOutputSampleBufferDelegate> delegate;
    NSObject<OS_dispatch_queue> *clientQueue;
    struct __CFDictionary *splitterUnits;
    struct __CFDictionary *mixerUnits;
    struct __CFDictionary *audioConverterUnits;
    struct __CFDictionary *audioToProcsUnits;
    struct __CFDictionary *callbackData;
    AVCaptureAudioSettings *audioSettings;
}

- (void)finalize;
- (void)dealloc;
- (id)init;

@end

