//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/AVVideoCompositing-Protocol.h>

@class AVVideoComposition, NSDictionary, NSLock, NSString, PVEffectScheduler, PVTaskTokenPool, PVVideoCompositingContext;
@protocol OS_dispatch_queue;

@interface PVVideoCompositing : NSObject <AVVideoCompositing>
{
    AVVideoComposition *_videoComposition;
    NSDictionary *_sourceAttributes;
    NSDictionary *_pixelBufferPoolAttributes;
    CDStruct_1b6d18a9 _videoCompositionDuration;
    struct vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob>>> _inFlightRenderJobs;
    NSLock *_inFlightRenderJobsLock;
    unsigned int _frameCount;
    struct HGSynchronizable *_trackerLock;
    struct deque<int, std::__1::allocator<int>> _dropFrameTracker;
    int _windowedDropTotal;
    BOOL _droppedResolution;
    double _frameDuration;
    PVEffectScheduler *_effectScheduler;
    struct HGSynchronizable *_inPlaybackLock;
    _Bool _inPlayback;
    struct HGSynchronizable *_throttleLock;
    unsigned int _throttleRequestHandling;
    struct HGSynchronizable *_notificationStateLock;
    _Bool _hostAppIsShuttingDown;
    _Bool _didEnterBackground;
    struct HGSynchronizable *_perfStatsLock;
    struct PVPerfStats *_perfStats;
    _Bool _trackStats;
    HGRef_9706a068 _renderManager;
    NSObject<OS_dispatch_queue> *_refreshCompletionCallbackQueue;
    PVTaskTokenPool *_tokenPool;
    BOOL _thumbnailCompositing;
    BOOL _cancelsPendingRequests;
    unsigned int _minimumRequestCompletionTimeMS;
    PVVideoCompositingContext *videoCompositingContext;
    CDUnknownBlockType _refreshCompletionBlock;
}

+ (BOOL)flushOnFinalRelease;
+ (void)setFlushOnFinalRelease:(BOOL)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned int minimumRequestCompletionTimeMS; // @synthesize minimumRequestCompletionTimeMS=_minimumRequestCompletionTimeMS;
@property(nonatomic) BOOL cancelsPendingRequests; // @synthesize cancelsPendingRequests=_cancelsPendingRequests;
@property(nonatomic) BOOL thumbnailCompositing; // @synthesize thumbnailCompositing=_thumbnailCompositing;
@property(retain) PVVideoCompositingContext *videoCompositingContext; // @synthesize videoCompositingContext;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)didRecieveMemoryWarning:(id)arg1;
- (void)checkAndReportDropFrames:(struct FrameStats *)arg1 job:(HGRef_e03d2d21)arg2;
- (id)getPreviousInstruction:(HGRef_e03d2d21)arg1;
- (_Bool)shouldDoLowPowerExport;
- (void)renderRequestFinished:(HGRef_e03d2d21)arg1;
- (void)removeRenderJobInFlight:(HGRef_e03d2d21)arg1;
- (void)addRenderJobInFlight:(HGRef_e03d2d21)arg1;
- (unsigned long long)taskResidentSize;
- (double)getLastStat:(int)arg1;
- (double)averageStat:(int)arg1;
- (double)numFrames;
- (double)windowedFPS;
- (void)setFrameDuration:(double)arg1;
- (void)printAndClearStats;
- (double)getTimeSinceLast:(struct FrameStats *)arg1;
- (void)trackStats:(_Bool)arg1;
- (void)addFrameStats:(struct FrameStats *)arg1;
- (void)callRefreshCompletionBlock:(BOOL)arg1;
@property(copy, nonatomic) CDUnknownBlockType refreshCompletionBlock; // @synthesize refreshCompletionBlock=_refreshCompletionBlock;
- (_Bool)inPlayback;
- (void)setInPlayback:(_Bool)arg1;
- (void)signalSchedulingResetSearch;
- (void)signalScheduling:(CDStruct_1b6d18a9)arg1 playerRate:(float)arg2;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)videoCompositionChanged:(id)arg1;
- (void)setColorSpacesFromDestinationBuffer:(id)arg1;
- (void)renderContextChanged:(id)arg1;
- (void)dealloc;
- (void)setupEffectScheduler;
- (void)setupTextureFactories;
- (id)init;
@property(readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

