//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVFunctionBarMediaSelectionControlling.h"
#import "AVFunctionBarPlaybackControlsControllingInternal.h"
#import "AVFunctionBarScrubberControlling.h"
#import "AVFunctionBarTrackControlling.h"
#import "AVTimeControlling.h"

@class AVFunctionBarMediaSelectionOption, AVThumbnailGenerator, AVValueTiming, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVFunctionBarPlaybackControlsController : NSObject <AVFunctionBarMediaSelectionControlling, AVFunctionBarPlaybackControlsControllingInternal, AVFunctionBarScrubberControlling, AVFunctionBarTrackControlling, AVTimeControlling>
{
    id <AVFunctionBarPlaybackControlsControlling> _externalFunctionBarPlaybackControlsController;
    struct {
        char _isPlaying;
        char _setPlaying;
        char _canTogglePlayback;
        char _togglePlayback;
        char _seekableTimeRanges;
        char _audioFunctionBarMediaSelectionOptions;
        char _currentAudioFunctionBarMediaSelectionOption;
        char _setCurrentAudioFunctionBarMediaSelectionOption;
        char _legibleFunctionBarMediaSelectionOptions;
        char _currentLegibleFunctionBarMediaSelectionOption;
        char _setCurrentLegibleFunctionBarMediaSelectionOption;
        char _canBeginFunctionBarScrubbing;
        char _beginFunctionBarScrubbing;
        char _endFunctionBarScrubbing;
        char _generateFunctionBarThumbnailsForTimesSizeCompletionHandler;
        char _generateFunctionBarAudioAmplitudeSamplesCompletionHandler;
        char _cancelThumbnailAndAudioAmplitudeSampleGeneration;
        char _assetURL;
        char _controlsViewWillAppear;
        char _controlsViewDidDisappear;
    } _externalControllerRespondsTo;
    AVThumbnailGenerator *_thumbnailGenerator;
}

+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (id)keyPathsForValuesAffectingCanBeginFunctionBarScrubbing;
+ (BOOL)automaticallyNotifiesObserversOfCanBeginFunctionBarScrubbing;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingHasLegibleFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCurrentLegibleFunctionBarMediaSelectionOption;
+ (BOOL)automaticallyNotifiesObserversOfCurrentLegibleFunctionBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingLegibleFunctionBarMediaSelectionOptions;
+ (BOOL)automaticallyNotifiesObserversOfLegibleFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCurrentAudioFunctionBarMediaSelectionOption;
+ (BOOL)automaticallyNotifiesObserversOfCurrentAudioFunctionBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingAudioFunctionBarMediaSelectionOptions;
+ (BOOL)automaticallyNotifiesObserversOfAudioFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCompletelySeekable;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingMaxTiming;
+ (id)keyPathsForValuesAffectingMinTiming;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingSeekToTime;
+ (BOOL)automaticallyNotifiesObserversOfSeekToTime;
+ (id)keyPathsForValuesAffectingSeeking;
+ (BOOL)automaticallyNotifiesObserversOfSeeking;
+ (id)keyPathsForValuesAffectingTiming;
+ (BOOL)automaticallyNotifiesObserversOfTiming;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (BOOL)automaticallyNotifiesObserversOfContentDuration;
- (void).cxx_destruct;
- (void)cancelThumbnailAndAudioAmplitudeSampleGenerationForRequestTypeLegacy:(long long)arg1;
- (void)generateFunctionBarAudioAmplitudeSamples:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateFunctionBarThumbnailsForTimes:(id)arg1 size:(struct CGSize)arg2 requestType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly) BOOL hasEnabledVideo;
@property(readonly) BOOL hasEnabledAudio;
- (void)endFunctionBarScrubbing;
- (void)beginFunctionBarScrubbing;
@property(readonly) BOOL canBeginFunctionBarScrubbing;
- (void)controlsViewDidDisappear;
- (void)controlsViewWillAppear;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
@property(readonly) BOOL hasLiveStreamingContent;
- (void)scanBackward:(id)arg1;
@property(readonly) BOOL canScanBackward;
- (void)scanForward:(id)arg1;
@property(readonly) BOOL canScanForward;
- (void)togglePlayback:(id)arg1;
@property(readonly) BOOL canTogglePlayback;
@property(getter=isPlaying) BOOL playing;
@property(readonly) BOOL hasLegibleFunctionBarMediaSelectionOptions;
@property(readonly) BOOL hasAudioFunctionBarMediaSelectionOptions;
@property(readonly) BOOL hasFunctionBarMediaSelectionOptions;
@property(retain) AVFunctionBarMediaSelectionOption *currentLegibleFunctionBarMediaSelectionOption;
@property(readonly) NSArray *legibleFunctionBarMediaSelectionOptions;
@property(retain) AVFunctionBarMediaSelectionOption *currentAudioFunctionBarMediaSelectionOption;
@property(readonly) NSArray *audioFunctionBarMediaSelectionOptions;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
@property(readonly) BOOL hasSeekableLiveStreamingContent;
@property(readonly, getter=isCompletelySeekable) BOOL completelySeekable;
@property(readonly) NSArray *seekableTimeRanges;
@property(readonly) AVValueTiming *maxTiming;
@property(readonly) AVValueTiming *minTiming;
@property(readonly) double contentDurationWithinEndTimes;
@property(readonly) double maxTime;
@property(readonly) double minTime;
@property(readonly) double seekToTime;
@property(readonly, getter=isSeeking) BOOL seeking;
@property(readonly) AVValueTiming *timing;
@property(readonly) double contentDuration;
@property __weak id <AVFunctionBarPlaybackControlsControlling> externalFunctionBarPlaybackControlsController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

