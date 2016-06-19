//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_queue>;

@protocol AVQueuedSampleBufferRendering <NSObject>
@property(readonly, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property(readonly, retain) struct OpaqueCMTimebase *timebase;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject<OS_dispatch_queue> *)arg1 usingBlock:(void (^)(void))arg2;
- (void)flush;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@end

