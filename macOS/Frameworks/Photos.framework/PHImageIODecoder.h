//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHImageDecoder.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHImageIODecoder : PHImageDecoder
{
    NSObject<OS_dispatch_queue> *_pendingRequestQueue;
    NSObject<OS_dispatch_queue> *_activeRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSemaphore;
}

+ (void)setMaxConcurrentDecodeCount:(long long)arg1;
+ (long long)maxConcurrentDecodeCount;
+ (id)sharedDecoder;
- (void).cxx_destruct;
- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 resizeMode:(long long)arg4 applyOrientationTransform:(BOOL)arg5 optimizeForDrawing:(BOOL)arg6 highPriority:(BOOL)arg7 waitUntilComplete:(BOOL)arg8 existingRequestHandle:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 resizeMode:(long long)arg4 applyOrientationTransform:(BOOL)arg5 optimizeForDrawing:(BOOL)arg6 highPriority:(BOOL)arg7 waitUntilComplete:(BOOL)arg8 completion:(CDUnknownBlockType)arg9;
- (id)init;

@end

