//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface GEOCacheUsageMonitor : NSObject
{
    NSMutableDictionary *_typeToHits;
    NSMutableDictionary *_typeToMisses;
    NSMutableDictionary *_tileCacheHitData;
    NSMutableDictionary *_tileCacheMissData;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
- (void)_flush;
- (void)flush;
- (void)recordTileCacheMissForReason:(unsigned char)arg1 missType:(int)arg2 tileKey:(const struct _GEOTileKey *)arg3 loadError:(id)arg4;
- (void)recordTileCacheMissForReason:(unsigned char)arg1 missType:(int)arg2 tileKey:(const struct _GEOTileKey *)arg3 tileSizeInBytes:(unsigned int)arg4 httpStatus:(unsigned int)arg5;
- (void)recordTileCacheHitForReason:(unsigned char)arg1 tileSource:(unsigned char)arg2 firstAccess:(BOOL)arg3 tileKey:(const struct _GEOTileKey *)arg4 tileSizeInBytes:(unsigned int)arg5;
- (void)_recordTileCacheEventWithKey:(id)arg1 cacheEventDict:(id)arg2 tileSizeInBytes:(unsigned int)arg3 error:(id)arg4;
- (void)recordCacheMissForType:(int)arg1;
- (void)recordCacheHitForType:(int)arg1;
- (void)_startTimerIfNecessary;
- (void)dealloc;
- (id)init;

@end

