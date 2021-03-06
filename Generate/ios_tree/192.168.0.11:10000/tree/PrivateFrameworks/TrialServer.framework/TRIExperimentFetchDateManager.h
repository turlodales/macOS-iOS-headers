/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIExperimentFetchDateManager : NSObject <TRIDateProviding> {
    NSMutableDictionary * _cachedLastFetchExperimentDates;
    TRIKVStore * _keyValueStore;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedLastFetchExperimentDates;
@property (nonatomic, readonly) TRIKVStore *keyValueStore;

+ (id)kvstoreKeyForContainer:(int)arg1 teamId:(id)arg2;
+ (id)managerWithKeyValueStore:(id)arg1;

- (void).cxx_destruct;
- (id)cachedLastFetchExperimentDates;
- (id)initWithKeyValueStore:(id)arg1;
- (id)keyValueStore;
- (id)lastFetchExperimentDateForContainer:(int)arg1 teamId:(id)arg2;
- (void)updateLastFetchExperimentDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3;

@end
