/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMessageHandler : HMFObject <HMDMessageHandlerQueuedMessageDelegate, HMFLogging, HMFMessageReceiver> {
    NSArray * _adminPrivateRemoteMessages;
    <HMDMessageHandlerDataSource> * _dataSource;
    NSMutableDictionary * _deviceIdentifierToQueuedOutgoingMessageNames;
    NSArray * _internalMessages;
    HMFUnfairLock * _lock;
    HMFMessageDispatcher * _messageDispatcher;
    NSMutableDictionary * _messageIdentifierToQueuedIncomingMessages;
    NSMutableDictionary * _messageNameToQueuedOutgoingMessage;
    NSUUID * _messageTargetUUID;
    HMDMessageHandlerMetricsDispatcher * _metricsDispatcher;
    NSNotificationCenter * _notificationCenter;
    NSArray * _notifications;
    NSDictionary * _notificationsToObject;
    NSArray * _ownerPrivateRemoteMessages;
}

@property (readonly, copy) NSArray *adminPrivateRemoteMessages;
@property <HMDMessageHandlerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasQueuedIncomingMessages;
@property (readonly) bool hasQueuedOutgoingMessages;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *internalMessages;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMDMessageHandlerMetricsDispatcher *metricsDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSArray *notifications;
@property (readonly, copy) NSDictionary *notificationsToObject;
@property (readonly, copy) NSArray *ownerPrivateRemoteMessages;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)adminPrivateRemoteMessages;
- (void)associateDevice:(id)arg1 withOutgoingMessage:(id)arg2;
- (id)attributeDescriptions;
- (void)configureWithHome:(id)arg1;
- (id)dataSource;
- (id)dequeueIncomingMessage:(id)arg1;
- (id)dequeueOutgoingMessage:(id)arg1;
- (id)dequeueQueuedIncomingMessages;
- (id)deviceForMessage:(id)arg1;
- (void)didTriggerMessageHandlerQueuedMessage:(id)arg1;
- (void)didTriggerQueuedIncomingMessage:(id)arg1;
- (void)didTriggerQueuedOutgoingMessage:(id)arg1;
- (bool)hasQueuedIncomingMessages;
- (bool)hasQueuedOutgoingMessages;
- (bool)hasQueuedOutgoingMessagesForDevice:(id)arg1;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 ownerPrivateRemoteMessages:(id)arg4 adminPrivateRemoteMessages:(id)arg5 internalMessages:(id)arg6 notifications:(id)arg7 notificationsToObject:(id)arg8;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 ownerPrivateRemoteMessages:(id)arg4 adminPrivateRemoteMessages:(id)arg5 internalMessages:(id)arg6 notifications:(id)arg7 notificationsToObject:(id)arg8 metricsDispatcher:(id)arg9;
- (id)internalMessages;
- (bool)isReadyForIncomingMessage:(id)arg1 error:(id*)arg2;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageTargetUUID;
- (id)metricsDispatcher;
- (id)notificationCenter;
- (id)notifications;
- (id)notificationsToObject;
- (id)ownerPrivateRemoteMessages;
- (id)privateDescription;
- (void)queueIncomingMessage:(id)arg1;
- (void)queueOutgoingMessage:(id)arg1;
- (id)queuedIncomingMessageWithIdentifier:(id)arg1;
- (id)queuedIncomingMessages;
- (id)queuedOutgoingMessages;
- (id)queuedOutgoingMessagesForDevice:(id)arg1;
- (bool)reachableForMessage:(id)arg1;
- (void)registerForMessagesWithHome:(id)arg1;
- (void)registerForNotifications;
- (void)registerForSPIRemoteMessages:(id)arg1 home:(id)arg2 userPrivilege:(unsigned long long)arg3 internalBuildOnly:(bool)arg4;
- (void)relayMessage:(id)arg1;
- (void)relayMessage:(id)arg1 shouldQueue:(bool)arg2;
- (void)routeMessage:(id)arg1;
- (void)routeMessage:(id)arg1 shouldQueue:(bool)arg2;
- (void)routeQueuedIncomingMessages;
- (SEL)selectorForName:(id)arg1;
- (void)sendQueuedOutgoingMessages;
- (void)sendQueuedOutgoingMessages:(id)arg1;
- (void)sendQueuedOutgoingMessagesForDevice:(id)arg1;
- (void)setDataSource:(id)arg1;
- (bool)shouldRelayIncomingMessage:(id)arg1 error:(id*)arg2;
- (void)triggerQueuedIncomingMessagesTimeouts;
- (void)triggerQueuedOutgoingMessagesTimeouts;

@end
