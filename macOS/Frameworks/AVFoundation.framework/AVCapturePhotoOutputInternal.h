//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureStillImageOutputUtils, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVCapturePhotoOutputInternal : NSObject
{
    struct __CFDictionary *videoDecompressorUnits;
    struct __CFDictionary *videoToProcsUnits;
    AVCaptureStillImageOutputUtils *tranformUtils;
    NSMutableArray *requests;
    BOOL isConsumerLive;
    BOOL highResolutionCaptureEnabled;
    long long maxPhotoQualityPrioritization;
    long long lastSettingsUniqueID;
    struct os_unfair_lock_s internalLock;
}

- (void)dealloc;
- (id)init;

@end

