//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CFPDDataBuffer, CFPrefsDaemon, NSObject<OS_dispatch_group>, NSObject<OS_xpc_object>;

__attribute__((visibility("hidden")))
@interface CFPDSource : NSObject
{
    CFPrefsDaemon *_cfprefsd;
    CFPDDataBuffer *_plist;
    NSObject<OS_xpc_object> *_pendingChangesQueue;
    unsigned long long _pendingChangesSize;
    struct __CFString *_userName;
    struct __CFString *_domain;
    const char *_actualPath;
    const char *_pathToTemporaryFileToWriteTo;
    NSObject<OS_dispatch_group> *_inProgressWriteGroup;
    struct __CFSet *_observingConnections;
    struct os_unfair_lock_s _lock;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    short _generationShmemIndex;
    unsigned int _handlingRequest:1;
    unsigned int _dirty:1;
    unsigned int _byHost:1;
    unsigned int _managed:1;
    unsigned int _neverCache:1;
    unsigned int _checkedForNonPrefsPlist:1;
    unsigned int _hasDrainedPendingChangesSinceLastReplyToOwner:1;
    unsigned int _restrictedReadability:1;
    unsigned int _waitingForDeviceUnlock:1;
    unsigned int _watchingParentDirectory:1;
    unsigned int _unusedBits:6;
}

- (void)dealloc;
- (id)acceptMessage:(id)arg1;
- (void)attachSizeWarningsToReply:(id)arg1 forByteCount:(unsigned long long)arg2;
- (void)handleNoPlistFound;
- (void)handleRootWrite;
- (void)handleSynchronous;
- (void)handleEUIDorEGIDMismatch;
- (void)handleNeverCache;
- (void)handleAvoidCache;
- (id)copyCachedObservationConnectionForMessage:(id)arg1;
- (void)setObserved:(BOOL)arg1 bySenderOfMessage:(id)arg2;
- (void)stopNotifyingObserver:(long long)arg1;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (int)validateSandboxPermissionsForMessage:(id)arg1 containerPath:(const char *)arg2 accessType:(int)arg3;
- (int)validatePOSIXPermissionsForMessage:(id)arg1 accessType:(int)arg2 fullyValidated:(char *)arg3;
- (BOOL)validateSandboxForRead:(id)arg1 containerPath:(const char *)arg2;
- (BOOL)validateSandboxForWrite:(id)arg1 containerPath:(const char *)arg2;
- (BOOL)validateAccessToken:(int)arg1 accessType:(int)arg2;
- (void)lockedSync:(CDUnknownBlockType)arg1;
- (void)lockedAsync:(CDUnknownBlockType)arg1;
- (void)clearCache;
- (struct __CFString *)debugDump;
- (void)enqueueNewKey:(id)arg1 value:(id)arg2 size:(unsigned long long)arg3 encoding:(int)arg4;
- (BOOL)hasObservers;
- (void)drainPendingChanges;
- (void)asyncNotifyObserversOfChanges;
- (id)copyPropertyList;
- (id)copyPropertyListWithoutDrainingPendingChanges;
- (void)markNeedsToReloadFromDiskDueToFailedWrite;
- (void)syncWriteToDisk;
- (void)asyncWriteToDisk;
- (void)syncWriteToDiskAndFlushCache;
- (void)setPlist:(id)arg1;
- (void)_writeToDisk:(BOOL)arg1;
- (void)handleOpenForWritingFailureWithErrno:(int)arg1;
- (void)setDirty:(BOOL)arg1;
- (void)updateShmemEntry;
- (BOOL)hasEverHadMultipleOwners;
- (int)owner;
- (short)shmemIndex;
- (id)description;
- (BOOL)byHost;
- (void)removeOwner;
- (void)addOwner:(id)arg1;
- (void)transitionToMultiOwner;
- (struct __CFString *)cloudConfigurationPath;
- (struct __CFString *)container;
- (struct __CFString *)user;
- (struct __CFString *)domain;
- (BOOL)managed;
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 byHost:(BOOL)arg3 managed:(BOOL)arg4 shmemIndex:(short)arg5 daemon:(id)arg6;
- (BOOL)getUncanonicalizedPath:(char *)arg1;
- (void)cacheActualAndTemporaryPathsWithEUID:(unsigned int)arg1 egid:(unsigned int)arg2;
- (void)cacheActualPathCreatingIfNecessary:(BOOL)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3;
- (void)cacheActualPath;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)endHandlingRequest;
- (void)beginHandlingRequest;
- (BOOL)shouldBePurgable;

@end

