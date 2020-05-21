//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CKDRecordCachePool : NSObject
{
    NSMutableDictionary *_pools;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_recordExpiryQueue;
}

+ (void)performWithClientContext:(id)arg1 scope:(long long)arg2 block:(CDUnknownBlockType)arg3;
+ (id)sharedPool;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordExpiryQueue; // @synthesize recordExpiryQueue=_recordExpiryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *pools; // @synthesize pools=_pools;
- (void)releaseCache:(id)arg1;
- (id)acquireCacheWithContext:(id)arg1 scope:(long long)arg2;
- (id)_poolForContext:(id)arg1;
- (void)_purgeRecordCachesForApplicationContainerPaths:(id)arg1 expiryDate:(id)arg2;
- (id)init;

@end

