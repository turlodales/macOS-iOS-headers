/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXStackStateTracker : NSObject {
    NSUserDefaults * _defaults;
    _PASLock * _internalStateLock;
    NSString * _path;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cleanupOldData;
- (void)coalescedPersistInternalState;
- (id)dataFromDisk;
- (id)init;
- (id)initTrackerInDirectory:(id)arg1;
- (id)jsonRepresentation;
- (id)lastStackRotationEvent:(id)arg1;
- (bool)lastStackRotationWasALongTimeAgoForStackId:(id)arg1;
- (bool)lastStalenessRotationWasALongTimeAgoForStackId:(id)arg1;
- (id)lastUserScrollStackRotationEvent:(id)arg1;
- (bool)lastUserScrollWasALongTimeAgoForStackId:(id)arg1;
- (id)layoutForLastStalenessRotation:(id)arg1;
- (bool)loadInternalState;
- (id)mergedPublisherWithBlendingAndUIStreams;
- (bool)persistInternalState;
- (void)setLayoutForLastStalenessRotation:(id)arg1 stackId:(id)arg2 date:(id)arg3;
- (id)stackCreationEvent:(id)arg1;
- (bool)stackIsStale:(id)arg1;
- (bool)stackWasCreatedALongTimeAgo:(id)arg1;
- (void)updateStackRotationEvents;
- (void)updateStackRotationEventsByQueryingBiome;

@end
