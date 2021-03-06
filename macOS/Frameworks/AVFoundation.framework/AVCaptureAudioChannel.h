//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject
{
    AVCaptureAudioChannelInternal *_internal;
}

@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(nonatomic) float volume;
@property(readonly, nonatomic) float peakHoldLevel;
@property(readonly, nonatomic) float averagePowerLevel;
- (void)invalidate;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end

