//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMDaemonListener, IMLocalObject, IMRemoteObject<IMRemoteDaemonProtocol>, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSProtocolChecker, NSRecursiveLock, NSString;

@interface IMDaemonController : NSObject
{
    id _delegate;
    IMRemoteObject<IMRemoteDaemonProtocol> *_remoteObject;
    NSMutableDictionary *_listenerMap;
    IMLocalObject *_localObject;
    IMDaemonListener *_daemonListener;
    NSMutableArray *_services;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSRecursiveLock *_connectionLock;
    NSArray *_servicesToAllow;
    NSArray *_servicesToDeny;
    struct __CFRunLoopSource *_runLoopSource;
    NSLock *_blockingLock;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _inBlockingConnect;
    BOOL _acquiringDaemonConnection;
    BOOL _autoReconnect;
    BOOL _blocksConnectionAtResume;
    BOOL _hasBeenSuspended;
    unsigned int _gMyFZListenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdatedCapabilities;
    BOOL _requestingConnection;
    NSMutableDictionary *_requestQOSClassCompletionBlocks;
    CDUnknownBlockType _prewarmingBlock;
}

+ (void)_setApplicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (BOOL)_applicationWillTerminate;
+ (id)sharedController;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType prewarmingBlock; // @synthesize prewarmingBlock=_prewarmingBlock;
@property(retain, nonatomic) NSMutableDictionary *requestQOSClassCompletionBlocks; // @synthesize requestQOSClassCompletionBlocks=_requestQOSClassCompletionBlocks;
@property(readonly, nonatomic, getter=isRequestingConnection) BOOL requestingConnection; // @synthesize requestingConnection=_requestingConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // @synthesize _remoteMessageQueue;
@property(retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny; // @synthesize _servicesToDeny;
@property(retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow; // @synthesize _servicesToAllow;
@property(setter=__setCapabilities:) unsigned int _capabilities; // @synthesize _capabilities=_gMyFZListenerCapabilities;
@property(setter=_setAutoReconnect:) BOOL _autoReconnect; // @synthesize _autoReconnect;
@property(retain, nonatomic, setter=_setListenerID:) NSString *_listenerID; // @synthesize _listenerID;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume; // @synthesize _blocksConnectionAtResume;
@property(readonly, nonatomic) IMDaemonListener *listener; // @synthesize listener=_daemonListener;
- (void)systemApplicationDidResume;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidSuspend;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDaemonLogsOutWithoutStatusListeners:(BOOL)arg1;
- (void)setDaemonTerminatesWithoutListeners:(BOOL)arg1;
- (void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;
- (void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;
- (void)remoteObjectDiedNotification:(id)arg1;
- (void)localObjectDiedNotification:(id)arg1;
- (void)_setCapabilities:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int capabilities;
- (void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (BOOL)localObjectExists;
- (BOOL)remoteObjectExists;
- (BOOL)__isRemoteObjectValidOnQueue:(id)arg1;
- (BOOL)__isLocalObjectValidOnQueue:(id)arg1;
- (void)_noteSetupComplete;
- (void)blockUntilConnected;
- (double)_connectionTimeout;
@property(readonly, nonatomic) BOOL isConnected;
@property(readonly, nonatomic) BOOL isConnecting;
- (BOOL)_acquiringDaemonConnection;
- (void)_addressBookChanged:(id)arg1;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 forAccount:(id)arg3;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (void)setMyPicture:(id)arg1 smallPictureData:(id)arg2;
- (id)_remoteObject;
- (BOOL)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (BOOL)removeListenerID:(id)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (BOOL)addListenerID:(id)arg1 capabilities:(unsigned int)arg2;
- (void)_listenerSetUpdated;
- (void)sendABInformationToDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(BOOL)arg3;
- (BOOL)connectToDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (void)_connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned int)arg2;
- (void)disconnectFromDaemon;
- (void)_disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)killDaemon;
- (void)_blockUntilSendQueueIsEmpty;
- (BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleDaemonException:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)dealloc;
- (void)_handleReceivedQOSClassWhileServicingRequestsNotification:(id)arg1;
- (void)requestQOSClassOfAgentWhileServicingRequests:(CDUnknownBlockType)arg1;
- (id)init;

@end

