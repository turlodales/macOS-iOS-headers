//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetTrackInspector.h>

@class AVDispatchOnce, AVWeakReference, NSMutableArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AVFigAssetTrackInspector : AVAssetTrackInspector
{
    struct OpaqueFigAsset *_figAsset;
    struct OpaqueFigAssetTrack *_figAssetTrack;
    AVDispatchOnce *_copyFigFormatReaderOnce;
    struct OpaqueFigFormatReader *_figFormatReader;
    AVDispatchOnce *_copyFigTrackReaderOnce;
    struct OpaqueFigTrackReader *_figTrackReader;
    AVDispatchOnce *_copySampleCursorServiceOnce;
    struct OpaqueFigSampleCursorService *_figSampleCursorService;
    BOOL _sampleCursorTimeAccuracyIsExact;
    struct OpaqueFigSimpleMutex *_loadingMutex;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSMutableArray *_loadingBatches;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isAudibleBooksContentAuthorized;
- (BOOL)hasAudibleBooksContent;
- (BOOL)hasProtectedContent;
- (id)_trackReferences;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (long long)provisionalAlternateGroupID;
- (long long)defaultAlternateGroupID;
- (long long)alternateGroupID;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segments;
- (CDStruct_1b6d18a9)latentBaseDecodeTimeStampOfFirstTrackFragment;
- (CDStruct_1b6d18a9)minSampleDuration;
- (float)nominalFrameRate;
- (id)loudnessInfo;
- (float)preferredVolume;
- (long long)layer;
- (struct CGAffineTransform)preferredTransform;
- (struct CGSize)dimensions;
- (struct CGSize)naturalSize;
- (id)extendedLanguageTag;
- (id)languageCode;
- (float)peakDataRate;
- (float)estimatedDataRate;
- (int)naturalTimeScale;
- (BOOL)requiresFrameReordering;
- (CDStruct_e83c9415)mediaDecodeTimeRange;
- (CDStruct_e83c9415)mediaPresentationTimeRange;
- (CDStruct_e83c9415)timeRange;
- (long long)totalSampleDataLength;
- (BOOL)isSelfContained;
- (BOOL)isEnabled;
- (int)decodabilityValidationResult;
- (BOOL)isDecodable;
- (int)playabilityValidationResult;
- (BOOL)isPlayable;
- (id)formatDescriptions;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(char *)arg1;
- (id)mediaType;
- (unsigned int)_figMediaType;
- (int)trackID;
- (id)_loadingBatches;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (struct OpaqueFigFormatReader *)_figFormatReader;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;
- (id)asset;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (long long)_loadStatusForFigAssetTrackProperty:(id)arg1 error:(id *)arg2;
- (void)_removeFigNotifications;
- (void)_addFigNotifications;
- (void)dealloc;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

@end

