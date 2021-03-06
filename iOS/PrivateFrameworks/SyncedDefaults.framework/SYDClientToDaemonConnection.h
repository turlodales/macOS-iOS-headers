/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@interface SYDClientToDaemonConnection : SYDRemotePreferencesSource <SYDClientProtocol> {
    NSObject<OS_dispatch_queue> * _analyticsQueue;
    NSCache * _cachedObjects;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    int  _daemonWakeNotifyToken;
    bool  _didLogFaultForEntitlements;
    NSObject<OS_dispatch_queue> * _queue;
    SYDStoreConfiguration * _storeConfiguration;
    unsigned long long  _syncingWithCloudCounter;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (nonatomic, retain) NSCache *cachedObjects;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) int daemonWakeNotifyToken;
@property (nonatomic) bool didLogFaultForEntitlements;
@property (nonatomic, readonly) bool isSyncingWithCloud;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) SYDStoreConfiguration *storeConfiguration;
@property (nonatomic, readonly) NSString *storeIdentifier;
@property (nonatomic, readonly) long long storeType;
@property unsigned long long syncingWithCloudCounter;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)daemonProtocolInterface;
+ (id)defaultStoreIdentifierForCurrentProcessWithApplicationIdentifier:(id)arg1;
+ (id)disgustingUglyHardcodedKnownStoreIdentifierForApplicationIdentifier:(id)arg1;
+ (bool)hasInitializedStoreWithIdentifier:(id)arg1;
+ (void)processAccountChangesWithCompletionHandler:(id /* block */)arg1;
+ (void)setHasInitializedStoreWithIdentifier:(id)arg1;
+ (void)setShouldSyncOnFirstInitializationOverride:(id)arg1;
+ (id)shouldSyncOnFirstInitializationOverride;

- (void).cxx_destruct;
- (id)analyticsQueue;
- (id)asyncDaemonWithErrorHandler:(id /* block */)arg1;
- (id)cachedObjects;
- (id)callbackQueue;
- (id)changeToken;
- (struct __CFDictionary { }*)copyDictionary;
- (id)copyExternalChangesWithChangeCount:(long long*)arg1;
- (struct __CFArray { }*)copyKeyList;
- (void)daemonDidWake;
- (int)daemonWakeNotifyToken;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didLogFaultForEntitlements;
- (void)discardExternalChangesForChangeCount:(long long)arg1;
- (long long)generationCount;
- (void*)getValueForKey:(struct __CFString { }*)arg1;
- (unsigned char)hasExternalChanges;
- (id)init;
- (id)initWithStoreConfiguration:(id)arg1;
- (id)initWithStoreIdentifier:(id)arg1 type:(long long)arg2;
- (bool)isSyncingWithCloud;
- (void)logFaultIfNecessaryForError:(id)arg1;
- (long long)maximumDataLengthPerKey;
- (long long)maximumKeyCount;
- (long long)maximumKeyLength;
- (long long)maximumTotalDataLength;
- (id)objectForKey:(id)arg1;
- (void)performInitialSyncIfNecessary;
- (void)ping;
- (void)processChangeDictionary:(id)arg1;
- (id)queue;
- (void)registerForDaemonDidWakeNotifications;
- (void)registerForSynchronizedDefaults;
- (void)removeObjectForKey:(id)arg1;
- (void)scheduleRemoteSynchronization;
- (void)setAnalyticsQueue:(id)arg1;
- (void)setCachedObjects:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setChangeToken:(id)arg1;
- (void)setDaemonWakeNotifyToken:(int)arg1;
- (void)setDefaultsConfiguration:(id)arg1;
- (void)setDidLogFaultForEntitlements:(bool)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setQueue:(id)arg1;
- (void)setStoreConfiguration:(id)arg1;
- (void)setSyncingWithCloudCounter:(unsigned long long)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setXpcConnection:(id)arg1;
- (id)storeConfiguration;
- (void)storeDidChangeWithConfiguration:(id)arg1 changeDictionary:(id)arg2 reply:(id /* block */)arg3;
- (id)storeIdentifier;
- (long long)storeType;
- (void)synchronizationWithCompletionHandler:(id /* block */)arg1;
- (unsigned char)synchronize;
- (unsigned char)synchronizeForced:(unsigned char)arg1;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)arg1;
- (unsigned long long)syncingWithCloudCounter;
- (void)unregisterForSynchronizedDefaults;
- (void)updateConfiguration;
- (id)xpcConnection;

@end
