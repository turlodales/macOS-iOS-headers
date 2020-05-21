//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/CFPrefsSource.h>

__attribute__((visibility("hidden")))
@interface CFPrefsPlistSource : CFPrefsSource
{
    struct __CFString *userIdentifier;
    struct __CFString *domainIdentifier;
    struct __CFString *container;
    // Error parsing type: A^{__CFDictionary}, name: _locallySetDict
    // Error parsing type: A*, name: accessPath
    // Error parsing type: Ac, name: _isByHost
    // Error parsing type: Ac, name: _volatile
    // Error parsing type: Ac, name: _readonly
    // Error parsing type: Ac, name: _avoidsDaemonCache
    // Error parsing type: Ac, name: _restrictedAccess
    // Error parsing type: Ac, name: _checkedInvalidHome
    // Error parsing type: Ac, name: _lastWriteFailed
    // Error parsing type: Ac, name: _observing
    // Error parsing type: Ac, name: _byteCountLimitExceeded
    // Error parsing type: Ac, name: _directMode
}

- (void)dealloc;
- (void)_sharedCleanup;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int *)arg2;
- (int)alreadylocked_updateObservingRemoteChanges;
- (long long)generationCount;
- (long long)alreadylocked_generationCount;
- (BOOL)synchronize;
- (BOOL)volatilizeIfInvalidHomeDir;
- (void)alreadylocked_clearCache;
- (void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(char *)arg4;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(char *)arg5;
- (void)requestPlistValidation;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (BOOL)alreadylocked_requestNewData;
- (long long)sendMessageSettingValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3;
- (void)sendFullyPreparedMessage:(id)arg1 toConnection:(id)arg2 settingValues:(const void **)arg3 forKeys:(const struct __CFString **)arg4 count:(long long)arg5 retryCount:(int)arg6;
- (void)addPIDImpersonationIfNecessary:(id)arg1;
- (BOOL)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2;
- (BOOL)handleErrorReply:(id)arg1 fromMessageSettingKeys:(const struct __CFString **)arg2 toValues:(const void **)arg3 count:(long long)arg4 retryCount:(int)arg5 retryContinuation:(CDUnknownBlockType)arg6;
- (void)handlePossibleOversizedMessage:(int)arg1;
- (BOOL)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(CDUnknownBlockType)arg3;
- (void)goReadOnlyAfterTryingToWriteKeys:(const struct __CFString **)arg1 values:(const void **)arg2 count:(long long)arg3;
- (BOOL)isDirectModeEnabled;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;
- (BOOL)_shouldEnableDirectMode;
- (BOOL)isVolatile;
- (void)goVolatileAfterTryingToWriteKeys:(const struct __CFString **)arg1 values:(const void **)arg2 count:(long long)arg3;
- (void)writeFailedForKeys:(const struct __CFString **)arg1 values:(const void **)arg2 count:(long long)arg3;
- (id)createSynchronizeMessage;
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (void *)copyValueForKey:(struct __CFString *)arg1;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (void)setDaemonCacheEnabled:(BOOL)arg1;
- (void)setAccessRestricted:(BOOL)arg1;
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(BOOL)arg3 containerPath:(struct __CFString *)arg4 containingPreferences:(id)arg5;
- (BOOL)isByHost;
- (struct __CFString *)container;
- (void)setContainer:(struct __CFString *)arg1;
- (void)setDomainIdentifier:(struct __CFString *)arg1;
- (struct __CFString *)domainIdentifier;
- (void)setUserIdentifier:(struct __CFString *)arg1;
- (struct __CFString *)userIdentifier;

@end

