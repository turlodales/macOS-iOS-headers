//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSObject<OS_dispatch_data>, NSObject<OS_dispatch_queue>, NSURLResponse, NSURLSessionTask;

@interface __NSCFURLSessionConnection : NSObject <NSCopying>
{
    NSURLSessionTask *_task;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <SessionConnectionDelegate> _delegate;
    NSURLResponse *_cacheResponse;
    NSObject<OS_dispatch_data> *_cacheData;
    unsigned long long _cacheDataMax;
    long long _maxCacheEntrySize;
}

@property(retain) id <SessionConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSURLSessionTask *task; // @synthesize task=_task;
- (void)_storeCachedResponse:(id)arg1;
- (id)_cachedResponse;
- (void)_tossCache;
- (void)_appendDataToCache:(id)arg1;
- (void)_setupForCache:(BOOL)arg1 expectedLength:(long long)arg2 response:(id)arg3;
- (void)setIsDownload:(BOOL)arg1;
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1;
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1;
- (void)expectedProgressTargetChanged;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setPriorityHint:(float)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)withWorkQueueAsync:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end

