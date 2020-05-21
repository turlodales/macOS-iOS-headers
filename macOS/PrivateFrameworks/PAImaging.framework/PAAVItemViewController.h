//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PAImaging/PAItemViewController.h>

#import "AVPlayerViewSlowMotionDelegate.h"
#import "PAPlaybackSettingsEditReceiver.h"

@class AVAsset, AVPlayer, AVPlayerItem, IPAVideoPlaybackSettings, NSObject<OS_dispatch_queue>, NSString, NSURL, PAAVPlayerView;

@interface PAAVItemViewController : PAItemViewController <AVPlayerViewSlowMotionDelegate, PAPlaybackSettingsEditReceiver>
{
    NSObject<OS_dispatch_queue> *_serializer;
    long long _currentState;
    CDUnknownBlockType _loadCompletionBlock;
    AVAsset *_masterAsset;
    NSURL *_assetURL;
    AVPlayer *_player;
    PAAVPlayerView *_playerView;
    AVPlayerItem *_playerItem;
    BOOL _observingPlayerItemStatus;
    BOOL _observingReadyForDisplay;
    BOOL _observingSlowMotionTimeRangeChanged;
    BOOL _observingPlayerRate;
    BOOL _addedPlaybackSettingsObserver;
    BOOL _waitingForWindow;
    BOOL _shouldAttemptStreamingVideoResource;
    BOOL _streamingVideoResource;
    BOOL _hasCloudPhotosDownloadInProgress;
    BOOL _hidesPlayerControls;
    BOOL _muted;
    id <PAAVItemViewControllerDelegate> _delegate;
    NSString *_videoGravity;
    IPAVideoPlaybackSettings *_streamingPlaybackSettings;
}

+ (id)calculateFixedImageAssetForType:(unsigned char)arg1 size:(struct CGSize)arg2;
+ (Class)itemViewClass;
+ (id)_keysToLoadAndTest;
- (void).cxx_destruct;
@property(retain, nonatomic) IPAVideoPlaybackSettings *streamingPlaybackSettings; // @synthesize streamingPlaybackSettings=_streamingPlaybackSettings;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property(nonatomic) BOOL hidesPlayerControls; // @synthesize hidesPlayerControls=_hidesPlayerControls;
@property(nonatomic) BOOL hasCloudPhotosDownloadInProgress; // @synthesize hasCloudPhotosDownloadInProgress=_hasCloudPhotosDownloadInProgress;
@property(nonatomic, getter=isStreamingVideoResource) BOOL streamingVideoResource; // @synthesize streamingVideoResource=_streamingVideoResource;
@property(nonatomic) BOOL shouldAttemptStreamingVideoResource; // @synthesize shouldAttemptStreamingVideoResource=_shouldAttemptStreamingVideoResource;
@property __weak id <PAAVItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)submitRequestForImageForCurrentFrameWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct CGImage *)imageForCurrentFrame;
- (void)setPosterFrameForCurrentTime;
- (void)exportFrameToURL:(id)arg1;
- (void)_submitRequestForFrameForScaledTime:(CDStruct_198678f7)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct CGImage *)_newFrameForScaledTime:(CDStruct_198678f7)arg1;
- (CDStruct_198678f7)_naturalTimeForScaledTime:(CDStruct_198678f7)arg1;
- (void)_submitRequestForFrameForNaturalTime:(CDStruct_198678f7)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct CGImage *)_newFrameForNaturalTime:(CDStruct_198678f7)arg1;
- (void)_updatePlaybackHeadWithNaturalTime:(CDStruct_198678f7)arg1;
- (BOOL)isRewound;
- (BOOL)isPaused;
- (void)rewind;
- (void)pause;
- (void)play;
- (void)_updateNormalizedSlomoTimeRange:(CDStruct_3c1748cc)arg1;
- (BOOL)inTrimMode;
- (void)cancelTrim:(id)arg1;
- (BOOL)isTrimmed;
- (void)resetTrim:(id)arg1;
- (void)_completeTrim;
- (void)initiateTrim:(id)arg1;
- (void)_setPlaybackSettings:(id)arg1;
- (id)_playbackSettings;
- (void)configureForUnsupportedAsset;
- (void)detachFromCanvasView;
- (void)attachToCanvasView;
- (struct CGImage *)newUnsupportedThumbnail;
- (id)playerView;
- (id)_avItemView;
- (id)_avItem;
- (id)_avItemController;
- (void)_itemFailedToPlayToEndTime:(id)arg1;
- (void)_itemDidPlayToEndTime:(id)arg1;
- (void)_unregisterPlayerItemNotifications;
- (void)_registerPlayerItemNotifications;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unregisterPlayerRateKVO;
- (void)_registerPlayerRateKVO;
- (void)_unregisterSlowMotionKVO;
- (void)_registerSlowMotionKVO;
- (void)_unregisterPlayerLayerReadyForDisplayKVO;
- (void)_registerPlayerLayerReadyForDisplayKVO;
- (void)_unregisterPlayerItemStatusKVO;
- (void)_registerPlayerItemStatusKVO;
- (void)_unregisterKVO;
- (void)_configureInterlacingForPlayerItem:(id)arg1;
- (void)_syncPlayerViewSlowMotionTimeRangeWithPlaybackSettings:(id)arg1;
- (void)_configurePlayerItem:(id)arg1 forPlaybackSettings:(id)arg2;
- (void)_setCurrentPlayerItem:(id)arg1 playbackSettings:(id)arg2;
- (void)_setUpPlaybackOfAsset:(id)arg1;
- (void)_didLoad:(BOOL)arg1 error:(id)arg2;
- (void)_didLoadAssetRequest:(id)arg1 response:(id)arg2;
- (BOOL)_shouldAttemptStreamingFollowingReceivedAssetResponse:(id)arg1;
- (BOOL)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)assetURL;
- (id)scaledPlayerItemForAsset:(id)arg1 playbackSettings:(id)arg2;
- (id)_avObjectBuilderForAsset:(id)arg1 playbackSetting:(id)arg2;
- (long long)_currentState;
- (BOOL)_enterState:(long long)arg1;
- (void)dealloc;
- (id)initWithItemController:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (void)setActionMenu:(id)arg1;
- (void)setShowsFrameSteppingButtons:(BOOL)arg1;
- (BOOL)showsFrameSteppingButtons;
- (struct CGSize)itemSize;
- (CDStruct_198678f7)playerView:(id)arg1 playerItemTimeForUserInterfaceTime:(CDStruct_198678f7)arg2;
- (CDStruct_198678f7)playerView:(id)arg1 userInterfaceTimeForPlayerItemTime:(CDStruct_198678f7)arg2;
- (CDStruct_198678f7)playerView:(id)arg1 playerItemDurationForSlowMotionTimeRange:(CDStruct_3c1748cc)arg2 normalizedTime:(CDStruct_198678f7)arg3 playerItemTime:(out CDStruct_198678f7 *)arg4;
- (CDStruct_198678f7)playerView:(id)arg1 playerItemTimeForNormalizedTime:(CDStruct_198678f7)arg2;
- (void)playbackSettingsChangedFrom:(id)arg1 to:(id)arg2 sourceChanged:(BOOL)arg3;
- (BOOL)_operationChangedFrom:(id)arg1 to:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

