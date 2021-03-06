//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PVImageBuffer;

@interface PVCMSampleBuffer : NSObject
{
    struct opaqueCMSampleBuffer *_sampleBufferRef;
    PVImageBuffer *_backingPVImageBuffer;
}

+ (id)sampleBufferWithPVImageBuffer:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2 frameDuration:(CDStruct_1b6d18a9)arg3;
+ (struct opaqueCMSampleBuffer *)createCMSampleBufferForPVImageBuffer:(id)arg1 timingInfo:(CDStruct_d2aef016)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) PVImageBuffer *backingPVImageBuffer; // @synthesize backingPVImageBuffer=_backingPVImageBuffer;
@property(readonly, nonatomic) struct opaqueCMSampleBuffer *sampleBufferRef; // @synthesize sampleBufferRef=_sampleBufferRef;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationTimeStamp;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end

