//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetImageGenerator, NSLock, NSMutableDictionary, VideoMovie;

__attribute__((visibility("hidden")))
@interface FrameGenerator : NSObject
{
    AVAssetImageGenerator *m_imageGenerator;
    VideoMovie *m_movie;
    NSMutableDictionary *m_fetchNotificationList;
    NSLock *m_fetchLock;
    CDStruct_1b6d18a9 m_timeToleranceBefore;
    CDStruct_1b6d18a9 m_timeToleranceAfter;
    BOOL m_requestedTimeTolerance;
    BOOL m_disablePosterFrame;
    BOOL m_cropImage;
    struct CGRect m_cropRect;
    float m_rotation;
    long long _maximumCacheSize;
    struct CGSize m_maximumSize;
}

+ (void)logAllQueuedTimes;
+ (BOOL)isAnythingFetching;
+ (void)resumeFetching;
+ (void)pauseFetching;
+ (void)removeQueueEntriesForGenerator:(id)arg1;
+ (void)queueGenerator:(id)arg1 forTimes:(id)arg2 highPriority:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)queueNextItem;
+ (void)queueOne:(id)arg1 times:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)changeTimesToHighPriority:(id)arg1 forGenerator:(id)arg2;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (void)setCachedFrame:(id)arg1 forMovie:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 canPoster:(BOOL)arg4 size:(struct CGSize)arg5 withRotation:(double)arg6 maximumCacheSize:(long long)arg7;
+ (id)cachedFrameForMovie:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 nearby:(BOOL)arg3 actualTime:(CDStruct_1b6d18a9 *)arg4 size:(struct CGSize)arg5 withRotation:(double)arg6;
+ (id)imageKeyForTime:(int)arg1 size:(struct CGSize)arg2 withRotation:(float)arg3;
+ (void)nukeCaches;
+ (void)setupCaches;
+ (void)ensureCacheDirectoryExists;
+ (id)posterFrameForMovie:(id)arg1;
+ (id)posterCacheKeyForMovie:(id)arg1;
+ (id)posterCacheDirectory;
@property(readonly, nonatomic) long long maximumCacheSize; // @synthesize maximumCacheSize=_maximumCacheSize;
@property(nonatomic) float rotation; // @synthesize rotation=m_rotation;
@property(nonatomic) BOOL disablePosterFrame; // @synthesize disablePosterFrame=m_disablePosterFrame;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=m_maximumSize;
@property(retain, nonatomic) VideoMovie *movie; // @synthesize movie=m_movie;
- (void)cropImage:(struct CGRect)arg1;
- (void)changeTimesToHighPriority:(id)arg1;
- (BOOL)fetchTimeInQueue:(CDStruct_1b6d18a9)arg1;
- (void)logQueuedTimes;
@property(readonly, nonatomic) BOOL isQueueEmpty;
- (BOOL)isFetching:(CDStruct_1b6d18a9)arg1;
- (void)cancelFetchingOutsideActiveSegment:(CDStruct_1b6d18a9)arg1 until:(CDStruct_1b6d18a9)arg2 maxRequestInFlight:(long long)arg3;
- (void)cancelAllFetching;
- (void)fetchTime:(CDStruct_1b6d18a9)arg1 highPriority:(BOOL)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)imageFrom:(struct CGImage *)arg1;
- (id)applyRotation:(id)arg1;
- (id)applyCrop:(id)arg1;
- (id)imageAtTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) struct CGSize naturalSize;
- (void)clearImageGenerator;
- (void)requestedTimeTolerance:(CDStruct_1b6d18a9)arg1 after:(CDStruct_1b6d18a9)arg2;
- (id)imageGenerator;
- (void)dealloc;
- (id)initWithMovie:(id)arg1 maximumCacheSize:(long long)arg2;

@end

