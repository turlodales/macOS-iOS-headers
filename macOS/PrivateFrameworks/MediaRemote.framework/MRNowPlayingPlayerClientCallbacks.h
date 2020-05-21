//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSVMultiCallback, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, _MRNowPlayingPlayerPathProtobuf;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerClientCallbacks : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    MSVMultiCallback *_createPlaybackQueueForRequestCallbacks;
    MSVMultiCallback *_createItemForOffsetCallbacks;
    MSVMultiCallback *_createItemForIdentifierCallbacks;
    MSVMultiCallback *_createChildItemCallbacks;
    MSVMultiCallback *_metadataCallbacks;
    MSVMultiCallback *_languageOptionsCallbacks;
    MSVMultiCallback *_infoCallbacks;
    MSVMultiCallback *_lyricsCallbacks;
    MSVMultiCallback *_artworkCallbacks;
    CDUnknownBlockType _playbackSessionCallback;
    CDUnknownBlockType _playbackSessionMigrateBeginCallback;
    CDUnknownBlockType _playbackSessionMigrateEndCallback;
    CDUnknownBlockType _playbackSessionMigrateRequestCallback;
    CDUnknownBlockType _beginLyricsEventCallback;
    CDUnknownBlockType _endLyricsEventCallback;
    CDUnknownBlockType _videoThumbnailsCallback;
    CDUnknownBlockType _audioAmplitudeSamplesCallback;
    NSMutableDictionary *_commandHandlerBlocks;
    MSVMultiCallback *_createItemToken;
    MSVMultiCallback *_createItemForIdentifierToken;
    MSVMultiCallback *_metadataToken;
    MSVMultiCallback *_languageToken;
    MSVMultiCallback *_artworkToken;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MSVMultiCallback *artworkCallbacks; // @synthesize artworkCallbacks=_artworkCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *lyricsCallbacks; // @synthesize lyricsCallbacks=_lyricsCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *infoCallbacks; // @synthesize infoCallbacks=_infoCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *languageOptionsCallbacks; // @synthesize languageOptionsCallbacks=_languageOptionsCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *metadataCallbacks; // @synthesize metadataCallbacks=_metadataCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *createChildItemCallbacks; // @synthesize createChildItemCallbacks=_createChildItemCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *createItemForIdentifierCallbacks; // @synthesize createItemForIdentifierCallbacks=_createItemForIdentifierCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *createItemForOffsetCallbacks; // @synthesize createItemForOffsetCallbacks=_createItemForOffsetCallbacks;
@property(readonly, nonatomic) MSVMultiCallback *createPlaybackQueueForRequestCallbacks; // @synthesize createPlaybackQueueForRequestCallbacks=_createPlaybackQueueForRequestCallbacks;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
- (void)registerNowPlayingInfoArtworkAssetCallback:(id)arg1;
- (void)registerNowPlayingInfoAssetCallbacks:(id)arg1;
- (void)registerNowPlayingInfoCallbacks:(id)arg1;
- (void)registerNowPlayingInfoBackedPlaybackQueueDataSourceCallbacks;
@property(readonly, copy, nonatomic) NSArray *commandHandlerBlocks;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (void)addCommandHandlerBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (unsigned long long)_onQueue_capabilities;
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, nonatomic) BOOL hasPlaybackQueueCallbacks;
@property(copy, nonatomic) CDUnknownBlockType endLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType beginLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionMigrateRequestCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionMigrateEndCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionMigrateBeginCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionCallback;
@property(copy, nonatomic) CDUnknownBlockType audioAmplitudeSamplesCallback;
@property(copy, nonatomic) CDUnknownBlockType videoThumbnailsCallback;
- (id)initWithPlayerPath:(id)arg1 queue:(id)arg2;

@end

