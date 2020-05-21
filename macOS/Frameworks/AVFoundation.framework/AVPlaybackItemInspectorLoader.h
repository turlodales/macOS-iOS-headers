//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetMakeReadyForInspectionLoader.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader
{
    struct OpaqueFigPlaybackItem *_playbackItem;
    NSArray *_trackIDs;
    BOOL _shouldCacheDuration;
    CDStruct_1b6d18a9 _cachedDuration;
}

- (CDStruct_1b6d18a9)duration;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (id)_playbackItemPropertiesForKeys:(id)arg1;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (BOOL)_inspectionRequiresAFormatReader;
- (struct OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)arg1;
- (Class)_classForTrackInspectors;
@property(readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem *playbackItem;
- (void)cancelLoading;
- (id)assetInspector;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)_removeFigObjectNotifications;
- (void)_addFigObjectNotifications;
- (id)initWithURL:(id)arg1 playbackItem:(struct OpaqueFigPlaybackItem *)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4;

@end

