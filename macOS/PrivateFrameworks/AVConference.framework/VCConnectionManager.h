//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCConnectionHealthMonitorDelegate.h"
#import "VCWifiAssistManagerDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, VCConnectionHealthMonitor, VCStatsRecorder, VCWifiAssistManager;

__attribute__((visibility("hidden")))
@interface VCConnectionManager : NSObject <VCConnectionHealthMonitorDelegate, VCWifiAssistManagerDelegate>
{
    BOOL _isStarted;
    unsigned int _callID;
    int _connectionSelectionVersion;
    int _relayServerProvider;
    struct _opaque_pthread_rwlock_t _stateRWlock;
    id <VCConnectionProtocol> _primaryConnection;
    id <VCConnectionProtocol> _secondaryConnection;
    id <VCConnectionProtocol> _connectionForDuplication;
    id <VCConnectionProtocol> _lastPrimaryConnectionInUse;
    NSMutableArray *_connectionArray;
    struct opaqueRTCReporting *_reportingAgent;
    BOOL _isInitialConnectionEstablished;
    unsigned int _mediaExcessiveCellularTxBytes;
    unsigned int _mediaExcessiveCellularRxBytes;
    unsigned int _signalingExcessiveCellularTxBytes;
    unsigned int _signalingExcessiveCellularRxBytes;
    unsigned int _budgetConsumingCellularTxBytes;
    unsigned int _budgetConsumingCellularRxBytes;
    unsigned long long _mediaCellularTxBytes;
    unsigned long long _mediaCellularRxBytes;
    unsigned long long _mediaWifiTxBytes;
    unsigned long long _mediaWifiRxBytes;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _duplicationType;
    CDUnknownFunctionPointerType _duplicationCallback;
    double _lastConnectionUnstableTime;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    void *_duplicationContext;
    BOOL _duplicationPending;
    BOOL _enableDuplication;
    BOOL _supportDuplication;
    int _preferredLocalInterfaceForDuplication;
    int _preferredRemoteInterfaceForDuplication;
    BOOL _isPrimaryLocalUsingCell;
    BOOL _isPreWarmStateEnabled;
    VCWifiAssistManager *_vcWifiAssist;
    BOOL _hasAssertedCell;
    VCConnectionHealthMonitor *_connectionHealthMonitor;
    CDStruct_50492349 _localConnectionStats;
    CDStruct_50492349 _remoteConnectionStats;
    double _remoteNoRemotePacketInterval;
    BOOL _isAudioOnly;
    int _localiRATLinkTypeSuggestion;
    int _remoteiRATLinkTypeSuggestion;
    BOOL _isRemoteDuplicating;
    double _lastiRATCheckTime;
    double _localLinkTypeSuggestionChangeTime;
    double _iRATNotificationRequestTime;
    int _localWRMLinkTypeFromDefaults;
    BOOL _allowRequestForWRMNotification;
    BOOL _forceHandoverToCell;
    BOOL _disableRemoteInterfaceInference;
    CDUnknownFunctionPointerType _wrmStatusUpdateCallback;
    CDUnknownFunctionPointerType _wrmRequestNotificationCallback;
    void *_wrmCallbacksContext;
    VCStatsRecorder *_statsRecorder;
    BOOL _preferRelayOverP2PEnabled;
    BOOL _fastMediaDuplicationEnabled;
    BOOL _cellPrimaryInterfaceChangeEnabled;
    BOOL _duplicateImportantPktsEnabled;
    BOOL _lowNetworkModeEnabled;
    BOOL _duplicationEnhancementEnabled;
    double _noRemoteDuplicationThresholdFast;
}

@property(readonly) unsigned int budgetConsumingCellularRxBytes; // @synthesize budgetConsumingCellularRxBytes=_budgetConsumingCellularRxBytes;
@property(readonly) unsigned int budgetConsumingCellularTxBytes; // @synthesize budgetConsumingCellularTxBytes=_budgetConsumingCellularTxBytes;
@property BOOL duplicationEnhancementEnabled; // @synthesize duplicationEnhancementEnabled=_duplicationEnhancementEnabled;
@property BOOL lowNetworkModeEnabled; // @synthesize lowNetworkModeEnabled=_lowNetworkModeEnabled;
@property double noRemoteDuplicationThresholdFast; // @synthesize noRemoteDuplicationThresholdFast=_noRemoteDuplicationThresholdFast;
@property BOOL duplicateImportantPktsEnabled; // @synthesize duplicateImportantPktsEnabled=_duplicateImportantPktsEnabled;
@property BOOL cellPrimaryInterfaceChangeEnabled; // @synthesize cellPrimaryInterfaceChangeEnabled=_cellPrimaryInterfaceChangeEnabled;
@property BOOL fastMediaDuplicationEnabled; // @synthesize fastMediaDuplicationEnabled=_fastMediaDuplicationEnabled;
@property BOOL preferRelayOverP2PEnabled; // @synthesize preferRelayOverP2PEnabled=_preferRelayOverP2PEnabled;
@property(readonly) BOOL isPreWarmStateEnabled; // @synthesize isPreWarmStateEnabled=_isPreWarmStateEnabled;
@property(readonly, nonatomic) VCStatsRecorder *statsRecorder; // @synthesize statsRecorder=_statsRecorder;
@property(readonly) double remoteNoRemotePacketInterval; // @synthesize remoteNoRemotePacketInterval=_remoteNoRemotePacketInterval;
@property BOOL isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(readonly) unsigned long long mediaWifiRxBytes; // @synthesize mediaWifiRxBytes=_mediaWifiRxBytes;
@property(readonly) unsigned long long mediaWifiTxBytes; // @synthesize mediaWifiTxBytes=_mediaWifiTxBytes;
@property(readonly) unsigned long long mediaCellularRxBytes; // @synthesize mediaCellularRxBytes=_mediaCellularRxBytes;
@property(readonly) unsigned long long mediaCellularTxBytes; // @synthesize mediaCellularTxBytes=_mediaCellularTxBytes;
@property(readonly) unsigned int signalingExcessiveCellularRxBytes; // @synthesize signalingExcessiveCellularRxBytes=_signalingExcessiveCellularRxBytes;
@property(readonly) unsigned int signalingExcessiveCellularTxBytes; // @synthesize signalingExcessiveCellularTxBytes=_signalingExcessiveCellularTxBytes;
@property(readonly) unsigned int mediaExcessiveCellularRxBytes; // @synthesize mediaExcessiveCellularRxBytes=_mediaExcessiveCellularRxBytes;
@property(readonly) unsigned int mediaExcessiveCellularTxBytes; // @synthesize mediaExcessiveCellularTxBytes=_mediaExcessiveCellularTxBytes;
@property BOOL supportDuplication; // @synthesize supportDuplication=_supportDuplication;
@property(retain, nonatomic) id <VCConnectionProtocol> connectionForDuplication; // @synthesize connectionForDuplication=_connectionForDuplication;
@property(retain, nonatomic) id <VCConnectionProtocol> lastPrimaryConnectionInUse; // @synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse;
@property(retain, nonatomic) id <VCConnectionProtocol> secondaryConnection; // @synthesize secondaryConnection=_secondaryConnection;
@property(retain, nonatomic) id <VCConnectionProtocol> primaryConnection; // @synthesize primaryConnection=_primaryConnection;
@property int preferredRemoteInterfaceForDuplication; // @synthesize preferredRemoteInterfaceForDuplication=_preferredRemoteInterfaceForDuplication;
@property int preferredLocalInterfaceForDuplication; // @synthesize preferredLocalInterfaceForDuplication=_preferredLocalInterfaceForDuplication;
@property(nonatomic, setter=setDuplicationEnabled:) BOOL isDuplicationEnabled; // @synthesize isDuplicationEnabled=_enableDuplication;
@property int relayServerProvider; // @synthesize relayServerProvider=_relayServerProvider;
@property unsigned int callID; // @synthesize callID=_callID;
- (void)didChangeWifiAssistAvailable:(BOOL)arg1 reason:(unsigned char)arg2;
- (BOOL)shouldDuplicatePacket:(_Bool)arg1;
- (void)updateConnectionStatsWithIndicatorPrimaryImproved:(CDStruct_50492349 *)arg1;
- (void)updateConnectionStatsWithIndicatorNone:(CDStruct_50492349 *)arg1;
- (void)updateConnectionStatsWithIndicatorOnlyPrimaryNoPacket:(CDStruct_50492349 *)arg1;
- (void)updateConnectionStatsWithIndicatorNoPacket:(CDStruct_50492349 *)arg1;
- (void)connectionHealthDidUpdate:(int)arg1 isLocalConnection:(BOOL)arg2;
- (void)useCellPrimayInterface:(BOOL)arg1;
- (void)setDuplicationFlag:(BOOL)arg1 withPreferredLocalLinkTypeForDuplication:(int)arg2;
- (void)updateConnectionForDuplication;
- (BOOL)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(char *)arg2;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(char *)arg2 isSourceIPv6:(char *)arg3;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(BOOL)arg2;
- (void)updateCellularMTU:(int)arg1;
- (int)removeConnection:(id)arg1;
- (int)addConnection:(id)arg1;
- (void)useConnectionAsPrimary:(id)arg1;
- (void)updateConnectionHealthWithIndicator:(BOOL)arg1;
- (int)processConnectionHealthFromControlInfo:(void *)arg1;
- (int)setConnectionHealthOnControlInfo:(void *)arg1;
- (void)updateCellularExcessiveBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytes:(int)arg2 isMediaData:(BOOL)arg3 isOutgoing:(BOOL)arg4;
- (void)updateReceivedBytes:(int)arg1 isOnCell:(BOOL)arg2 isIPv6:(BOOL)arg3;
- (void)updateTransmittedBytes:(int)arg1 isOnCell:(BOOL)arg2 isIPv6:(BOOL)arg3;
- (void)updateTransmittedExcessiveBytes:(int)arg1 isMediaData:(BOOL)arg2 isIPv6:(BOOL)arg3;
- (void)updateReceivedExcessiveBytes:(int)arg1 isMediaData:(BOOL)arg2 isIPv6:(BOOL)arg3;
- (void)reportConnection:(id)arg1 isInitialConnection:(BOOL)arg2;
@property(readonly) BOOL isLocalCellularInterfaceUsed;
- (struct tagVCSourceDestinationInfo *)createSourceDestinationInfoListWithForceDuplication:(_Bool)arg1;
- (void)updateWRMDuplicationForHandover;
- (void)updateWRMDuplicationForRemoteiRATSuggestion;
- (BOOL)updateWRMDuplicationForLocaliRATSuggestion;
- (void)checkiRATSuggestionDefaultValue;
- (void)checkiRATSuggestion;
- (void)requestWRMNotificationAtTime:(double)arg1;
- (id)connectionForQuality:(int)arg1;
- (id)connectionForQualityInternal:(int)arg1;
- (BOOL)isOptimalConnection:(id)arg1 asPrimary:(BOOL)arg2 interfaceMask:(int)arg3;
- (BOOL)isBetterConnection:(id)arg1 asPrimary:(BOOL)arg2;
- (BOOL)isConnection:(id)arg1 betterSecondaryThanConnection:(id)arg2;
- (BOOL)isConnection:(id)arg1 betterPrimaryThanConnection:(id)arg2;
- (void)promoteSecondaryConnectionToPrimary:(id)arg1;
- (int)getConnectionSelectionVersionFromFrameworkVersion:(id)arg1;
- (void)disableRemotePreferredInterfaceInference:(BOOL)arg1;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)checkpointPrimaryConnection:(id)arg1;
- (id)suggestedLinkTypeCombo;
- (id)activeConnectionRegistry;
- (void)updateSessionStats:(unsigned short)arg1;
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2;
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2;
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(BOOL)arg4 isOutgoing:(BOOL)arg5;
- (void)updateReceivedPacketsAndBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytesReceived:(int)arg2 isMediaData:(BOOL)arg3 shouldCountPacket:(BOOL)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(BOOL)arg6;
- (void)updateTransmittedPacketsAndBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytesSent:(int)arg2 isMediaData:(BOOL)arg3 shouldCountPacket:(BOOL)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(BOOL)arg6;
- (BOOL)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg1;
- (BOOL)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg1;
- (int)getCellularMTUForActiveConnectionWithQuality:(int)arg1;
- (int)getCellularTechForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2;
- (int)getConnectionTypeForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2;
- (BOOL)isInterfaceConstrainedForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2;
- (BOOL)isInterfaceOnCellularForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2;
- (int)getNumberOfConnectionsInternal;
@property(readonly) int connectionCount;
- (int)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(BOOL)arg2;
- (int)processWRMNotification:(CDStruct_0693755d *)arg1;
- (void)setPreWarmState:(BOOL)arg1;
- (int)setWRMUpdateCallback:(CDUnknownFunctionPointerType)arg1 requestNotificationCallback:(CDUnknownFunctionPointerType)arg2 withContext:(void *)arg3;
- (const char *)reasonStringWithDuplicationType:(int)arg1;
- (void)setDuplicationEnabledInternal:(BOOL)arg1;
- (void)setConnectionPause:(BOOL)arg1 isLocalConnection:(BOOL)arg2;
- (void)setDuplicationCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2;
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;
@property id <VCConnectionManagerDelegate> delegate;
- (void)stop;
- (void)start;
- (void)setupConnectionHealthMonitor;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

