//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVOutputContext, AVPixelBufferAttributeMediator, AVPlayerItem, AVWeakReference, NSArray, NSDictionary, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerInternal : NSObject
{
    AVWeakReference *weakReference;
    AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    NSObject<OS_dispatch_queue> *layerInteractionQueue;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSObject<OS_dispatch_queue> *currentItemPropertyUpdateQueue;
    NSObject<OS_dispatch_queue> *layersQ;
    struct OpaqueCMTimebase *proxyTimebase;
    BOOL logPerformanceData;
    struct OpaqueFigSimpleMutex *prerollIDMutex;
    NSObject<OS_dispatch_queue> *configurationQueue;
    id layerVisibilityChangeToken;
    id <AVBlockScheduler> KVOChangeSerializer;
    long long status;
    NSError *error;
    AVPlayerItem *currentItem;
    AVPlayerItem *lastItem;
    NSMutableSet *items;
    NSArray *queueModifications;
    NSMutableDictionary *pendingFigPlayerProperties;
    AVOutputContext *outputContext;
    BOOL IOwnTheFigPlayer;
    NSMutableArray *handlersToCallWhenReadyToPlay;
    BOOL shouldReduceResourceUsage;
    long long resourceConservationLevelWhilePaused;
    NSString *playerRole;
    NSString *externalPlaybackVideoGravity;
    long long actionAtItemEnd;
    float volume;
    float userVolume;
    float minRateForAudioPlayback;
    float maxRateForAudioPlayback;
    BOOL autoSwitchStreamVariants;
    BOOL preparesItemsForPlaybackAsynchronously;
    BOOL allowsOutOfBandTextTrackRendering;
    BOOL muted;
    BOOL closedCaptionDisplayEnabled;
    BOOL appliesMediaSelectionCriteriaAutomatically;
    BOOL dynamicallyChoosesInitialVariant;
    BOOL limitsBandwidthForCellularAccess;
    BOOL usesAudioOnlyModeForExternalPlayback;
    BOOL allowsPixelBufferPoolSharing;
    BOOL disallowsAMRAudio;
    BOOL disallowsHardwareAcceleratedVideoDecoder;
    BOOL layerDestinationIsTVOut;
    BOOL preventsDisplaySleepDuringVideoPlayback;
    BOOL disallowsVideoLayerDisplayCompositing;
    BOOL allowsExternalPlayback;
    BOOL usesExternalPlaybackWhileExternalScreenIsActive;
    NSString *captionPipelineStrategy;
    NSString *audioOutputDeviceUniqueID;
    NSString *clientName;
    NSString *multichannelAudioStrategy;
    long long clientPriority;
    BOOL PIPModePossible;
    BOOL isDisplayingClosedCaptions;
    BOOL externalPlaybackActive;
    BOOL airPlayVideoActive;
    BOOL isConnectedToPhysicalSecondScreen;
    BOOL outputObscuredDueToInsufficientExternalProtection;
    long long externalProtectionStatus;
    NSString *ancillaryPerformanceInformationForDisplay;
    float rate;
    BOOL automaticallyWaitsToMinimizeStalling;
    BOOL usesLegacyAutomaticWaitingBehavior;
    long long timeControlStatus;
    NSString *reasonForWaitingToPlay;
    struct CGSize currentItemPresentationSize;
    BOOL currentItemNonForcedSubtitlesEnabled;
    unsigned long long preferredVideoDecoderGPURegistryID;
    BOOL disallowsAutoPauseOnRouteRemovalIfNoAudio;
    BOOL hostApplicationInForeground;
    BOOL preservesAudioSessionSampleRate;
    NSMutableArray *videoLayers;
    NSMutableArray *subtitleLayers;
    NSMutableArray *closedCaptionLayers;
    NSHashTable *avPlayerLayers;
    int nextPrerollIDToGenerate;
    int pendingPrerollID;
    CDUnknownBlockType prerollCompletionHandler;
    id currentItemSuppressesVideoLayersNotificationToken;
    id currentItemPreferredPixelBufferAttributesNotificationToken;
    struct OpaqueFigPlayer *figPlayer;
    struct OpaqueFigPlaybackItem *figPlaybackItemToIdentifyNextCurrentItem;
    BOOL needsToCreateFigPlayer;
    NSDictionary *cachedFigMediaSelectionCriteriaProperty;
    NSArray *itemsInFigPlayQueue;
    NSArray *expectedAssetTypes;
    BOOL reevaluateBackgroundPlayback;
    BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
    struct OpaqueCMClock *figMasterClock;
    NSString *captionRenderingStrategy;
    NSArray *displaysUsedForPlayback;
    id <AVLoggingIdentifier> loggingIdentifier;
}

@end

