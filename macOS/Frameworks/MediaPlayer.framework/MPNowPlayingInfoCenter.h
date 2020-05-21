//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPMediaRemoteEntityArtworkGenerator.h"

@class MPArtworkResizeUtility, MPMRNowPlayingPlayerPathWrapper, MPNowPlayingContentItem, MPNowPlayingInfoCenterArtworkContext, MSVLRUDictionary, MSVTimer, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MPNowPlayingInfoCenter : NSObject <MPMediaRemoteEntityArtworkGenerator>
{
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_queuedNowPlayingInfo;
    NSDictionary *_convertedNowPlayingInfo;
    NSDate *_pushDate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPNowPlayingInfoCenterArtworkContext *_publishedContext;
    NSMutableDictionary *_mutatedContentItems;
    NSMutableDictionary *_mutatedPlaybackQueueRequests;
    struct _MSVSignedRange _loadedContentItemsRange;
    struct _MSVSignedRange _requestedContentItemsRange;
    NSMutableArray *_contentItemIdentifiers;
    MSVLRUDictionary *_contentItems;
    MPNowPlayingContentItem *_nowPlayingContentItem;
    unsigned long long _playbackState;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    MPArtworkResizeUtility *_artworkResizeUtility;
    MSVTimer *_contentItemInvalidationTimer;
    id <MPNowPlayingPlaybackQueueDataSource> _playbackQueueDataSource;
    id <MPNowPlayingInfoLyricsDelegate> _lyricsDelegate;
    struct {
        void *createPlaybackQueue;
        void *createContentItem;
        void *createChildItem;
        void *metadata;
        void *artwork;
        void *info;
        void *languageOptions;
        void *lyrics;
    } _callbacks;
    void *_fallbackActivity;
    unsigned long long _stateHandle;
    MPMRNowPlayingPlayerPathWrapper *_playerPath;
    id <MPNowPlayingPlaybackQueueDelegate> _playbackQueueDelegate;
    NSString *_playerID;
    NSString *_representedApplicationBundleIdentifier;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
}

+ (id)serviceQueue;
+ (id)infoCenterForPlayerID:(id)arg1;
+ (id)defaultCenter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue; // @synthesize dataSourceQueue=_dataSourceQueue;
@property(copy, nonatomic) NSString *representedApplicationBundleIdentifier; // @synthesize representedApplicationBundleIdentifier=_representedApplicationBundleIdentifier;
@property(readonly, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(nonatomic) __weak id <MPNowPlayingPlaybackQueueDelegate> playbackQueueDelegate; // @synthesize playbackQueueDelegate=_playbackQueueDelegate;
@property(readonly, nonatomic) MPMRNowPlayingPlayerPathWrapper *playerPath; // @synthesize playerPath=_playerPath;
- (void)_onQueue_pushContentItemsUpdate;
- (void)_contentItemChangedNotification:(id)arg1;
- (void)_onQueue_registerPlaybackQueueDataSourceCallbacks:(id)arg1;
- (void)_onQueue_registerLyricsDelegateCallbacks:(id)arg1;
- (void)_onQueue_clearPlaybackQueueDataSourceCallbacks;
- (void)_onDataSourceQueue_getContentItemIDsInRange:(struct _MSVSignedRange)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_onDataSourceQueue_artworkCatalogForContentItem:(id)arg1;
- (void)_invalidatePlaybackQueueImmediatelyWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getTransportablePlaybackSessionRepresentationWithIdentifier:(id)arg1 preferredSessionType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getMetadataForContentItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void *)_createPlaybackQueueForRequest:(void *)arg1;
- (id)_contentItemForIdentifier:(id)arg1 alreadyOnDataSourceQueue:(BOOL)arg2;
- (id)_contentItemForIdentifier:(id)arg1;
- (id)_contentItemIDsInRange:(CDStruct_912cb5d2)arg1 itemsRange:(CDStruct_912cb5d2 *)arg2;
- (id)_childContentItemForContentItem:(id)arg1 index:(long long)arg2;
- (void)_becomeActiveWithCompletion:(CDUnknownBlockType)arg1;
- (id)_artworkCatalogForContentItem:(id)arg1;
@property(readonly, nonatomic) BOOL supportsArtworkCatalogLoading;
- (CDUnknownBlockType)artworkCatalogBlockForContentItem:(id)arg1;
@property(retain, nonatomic) MPNowPlayingContentItem *nowPlayingContentItem;
- (void)invalidatePlaybackQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidatePlaybackQueue;
@property(nonatomic) __weak id <MPNowPlayingInfoLyricsDelegate> lyricsDelegate;
@property(nonatomic) __weak id <MPNowPlayingPlaybackQueueDataSource> playbackQueueDataSource;
- (void)becomeActive;
@property(nonatomic) unsigned long long playbackState;
- (void)dealloc;
- (id)init;
- (id)initWithPlayerID:(id)arg1;
- (void)_onQueue_pushNowPlayingInfoAndRetry:(BOOL)arg1;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo; // @dynamic nowPlayingInfo;
- (void)_initializeNowPlayingInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

