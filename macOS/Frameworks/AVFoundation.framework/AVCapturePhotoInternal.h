//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings;

__attribute__((visibility("hidden")))
@interface AVCapturePhotoInternal : NSObject
{
    struct opaqueCMSampleBuffer *sampleBuffer;
    AVCaptureResolvedPhotoSettings *resolvedSettings;
    AVCapturePhotoSettings *unresolvedSettings;
}

@end

