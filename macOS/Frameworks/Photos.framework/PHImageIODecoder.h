//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHImageDecoder.h>

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

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

