//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureMetadataInputInternal;

@interface AVCaptureMetadataInput : AVCaptureInput
{
    AVCaptureMetadataInputInternal *_internal;
}

+ (id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 clock:(struct OpaqueCMClock *)arg2;
- (BOOL)appendTimedMetadataGroup:(id)arg1 error:(id *)arg2;
- (id)ports;
- (void)dealloc;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 clock:(struct OpaqueCMClock *)arg2;
- (id)init;

@end

