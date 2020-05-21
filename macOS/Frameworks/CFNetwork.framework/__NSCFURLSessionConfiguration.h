//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionConfiguration.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSData, NSDictionary, NSHTTPCookieStorage, NSNumber, NSSet, NSString, NSURL, NSURLCache, NSURLCredentialStorage;

@interface __NSCFURLSessionConfiguration : NSURLSessionConfiguration <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    unsigned long long _requestCachePolicy;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    unsigned long long _networkServiceType;
    NSString *_sharedContainerIdentifier;
    id _connectionProxyDictionary;
    int _TLSMinimumSupportedProtocol;
    int _TLSMaximumSupportedProtocol;
    unsigned long long _HTTPCookieAcceptPolicy;
    id _HTTPAdditionalHeaders;
    long long _HTTPMaximumConnectionsPerHost;
    id _protocolClasses;
    BOOL _allowsCellularAccess;
    BOOL _allowsExpensiveNetworkAccess;
    BOOL _waitsForConnectivity;
    BOOL _discretionary;
    BOOL _sessionSendsLaunchEvents;
    BOOL _HTTPShouldUsePipelining;
    BOOL _HTTPShouldSetCookies;
    BOOL _shouldUseExtendedBackgroundIdleMode;
    BOOL _requiresPowerPluggedIn;
    NSURL *_directoryForDownloadedFiles;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSData *_sourceApplicationAuditTokenData;
    unsigned long long _TCPAdaptiveReadTimeout;
    unsigned long long _TCPAdaptiveWriteTimeout;
    BOOL _reportsDataStalls;
    long long _timingDataOptions;
    id <NSURLSessionAppleIDContext> _appleIDContext;
    NSData *_atsContext;
    double _connectionCachePurgeTimeout;
    double _connectionCacheCellPurgeTimeout;
    double _longLivedConnectionCachePurgeTimeout;
    double _longLivedConnectionCacheCellPurgeTimeout;
    NSString *_connectionPoolName;
    NSString *_CTDataConnectionServiceType;
    NSString *_tlsTrustPinningPolicyName;
    BOOL _allowsTLSFallback;
    unsigned long long _customReadBufferSize;
    double _customReadBufferTimeout;
    BOOL _allowsExpensiveAccess;
    BOOL _allowsConstrainedNetworkAccess;
    BOOL _allowsConstrainedNetworkAccessSPI;
    BOOL _allowsPowerNapScheduling;
    BOOL _preventsIdleSleepOnceConnected;
    BOOL _sessionSendsLaunchOnDemandEvents;
    BOOL _shouldSkipPreferredClientCertificateLookup;
    BOOL _allowsRetryForBackgroundDataTasks;
    BOOL _onBehalfOfPairedDevice;
    BOOL _clientIsNotExplicitlyDiscretionary;
    BOOL _respectsAllowsCellularAccessForDiscretionaryTasks;
    BOOL _overridesBackgroundSessionAutoRedirect;
    BOOL _performsEVCertCheck;
    BOOL _infersDiscretionaryFromOriginatingClient;
    BOOL _prefersInfraWiFi;
    BOOL _allowsMultipathTCP;
    BOOL _allowsResponseMonitoringDuringBodyTranmission;
    BOOL _allowsIndefiniteConnections;
    BOOL _allowsTCPFastOpen;
    BOOL _allowsTLSSessionTickets;
    BOOL _allowsTLSSessionResumption;
    BOOL _allowsTLSFalseStart;
    BOOL _preventsDirectWiFiAccess;
    BOOL _allowTCPIOConnectionStreamTask;
    BOOL _preventsSystemHTTPProxyAuthentication;
    BOOL _requiresSecureHTTPSProxyConnection;
    BOOL _preventsAppSSO;
    BOOL _allowsSensitiveLogging;
    BOOL _duetPreauthorized;
    long long _duetPreClearedMode;
    BOOL _requiresSustainedDataDelivery;
    BOOL _ignoreDidReceiveResponseDisposition;
    BOOL _alwaysPerformDefaultTrustEvaluation;
    NSNumber *_maximumWatchCellularTransferSize;
    unsigned long long _multipathAlternatePort;
    NSString *_disposition;
    NSURLCredentialStorage *_phskip_credStorage;
    NSURLCache *_phskip_urlCache;
    NSHTTPCookieStorage *_phskip_cookieStorage;
    struct _CFHSTSPolicy *_phskip_hstsStorage;
    long long _pipeliningHighWatermark;
    long long _pipeliningLowWatermark;
    long long _numPriorityLevels;
    long long _numFastLanes;
    long long _minimumFastLanePriority;
    long long _IDSMessageTimeout;
    NSString *_tcpConnectionPoolName;
    NSDictionary *_socketStreamProperties;
    NSSet *_authenticatorStatusCodes;
    NSArray *_contentDispHeadEncFallback;
    NSString *_companionAppBundleIdentifier;
    NSString *_watchAppBundleIdentifier;
    NSString *_watchExtensionBundleIdentifier;
    unsigned long long _forcedNetworkServiceType;
    NSDictionary *_overriddenDelegateOptions;
    NSSet *_suppressedAutoAddedHTTPHeaders;
    long long _expiredDNSBehavior;
    BOOL _backgroundSession;
    BOOL _phskip_hstsStorageSet;
    BOOL _phskip_cookieStorageSet;
    BOOL _phskip_urlCacheSet;
    BOOL _phskip_credStorageSet;
    BOOL _skip_download_unlink;
    BOOL _requiresClientToOpenFiles;
    BOOL _forcesNewConnections;
    BOOL _supportsAVAssetDownloads;
    BOOL _proxySession;
    BOOL _preventsIdleSleep;
    BOOL _usePipeliningHeuristics;
    BOOL _shouldPreserveBackgroundSessionDisposition;
    BOOL _disablesOutOfProcessDirectWiFiUsage;
    BOOL _disablesUseOfProxySession;
}

+ (BOOL)supportsSecureCoding;
- (void)set_expiredDNSBehavior:(long long)arg1;
- (long long)_expiredDNSBehavior;
- (void)set_suppressedAutoAddedHTTPHeaders:(id)arg1;
- (id)_suppressedAutoAddedHTTPHeaders;
- (void)set_overriddenDelegateOptions:(id)arg1;
- (id)_overriddenDelegateOptions;
- (void)set_forcedNetworkServiceType:(unsigned long long)arg1;
- (unsigned long long)_forcedNetworkServiceType;
- (void)set_watchExtensionBundleIdentifier:(id)arg1;
- (id)_watchExtensionBundleIdentifier;
- (void)set_watchAppBundleIdentifier:(id)arg1;
- (id)_watchAppBundleIdentifier;
- (void)set_companionAppBundleIdentifier:(id)arg1;
- (id)_companionAppBundleIdentifier;
- (void)set_disablesUseOfProxySession:(BOOL)arg1;
- (BOOL)_disablesUseOfProxySession;
- (void)set_disablesOutOfProcessDirectWiFiUsage:(BOOL)arg1;
- (BOOL)_disablesOutOfProcessDirectWiFiUsage;
- (void)set_shouldPreserveBackgroundSessionDisposition:(BOOL)arg1;
- (BOOL)_shouldPreserveBackgroundSessionDisposition;
- (void)set_contentDispHeadEncFallback:(id)arg1;
- (id)_contentDispHeadEncFallback;
- (void)set_usePipeliningHeuristics:(BOOL)arg1;
- (BOOL)_usePipeliningHeuristics;
- (void)set_preventsIdleSleep:(BOOL)arg1;
- (BOOL)_preventsIdleSleep;
- (void)set_authenticatorStatusCodes:(id)arg1;
- (id)_authenticatorStatusCodes;
- (void)set_proxySession:(BOOL)arg1;
- (BOOL)_isProxySession;
- (void)set_supportsAVAssetDownloads:(BOOL)arg1;
- (BOOL)_supportsAVAssetDownloads;
- (void)set_socketStreamProperties:(id)arg1;
- (id)_socketStreamProperties;
- (void)set_forcesNewConnections:(BOOL)arg1;
- (BOOL)_forcesNewConnections;
- (void)set_tcpConnectionPoolName:(id)arg1;
- (id)_tcpConnectionPoolName;
- (void)set_requiresClientToOpenFiles:(BOOL)arg1;
- (BOOL)_requiresClientToOpenFiles;
- (void)setSkip_download_unlink:(BOOL)arg1;
- (BOOL)skip_download_unlink;
- (void)setMinimumFastLanePriority:(long long)arg1;
- (long long)minimumFastLanePriority;
- (void)setNumFastLanes:(long long)arg1;
- (long long)numFastLanes;
- (void)setNumPriorityLevels:(long long)arg1;
- (long long)numPriorityLevels;
- (void)setPipeliningLowWatermark:(long long)arg1;
- (long long)pipeliningLowWatermark;
- (void)setPipeliningHighWatermark:(long long)arg1;
- (long long)pipeliningHighWatermark;
- (void)set_phskip_hstsStorageSet:(BOOL)arg1;
- (BOOL)_phskip_hstsStorageSet;
- (void)set_phskip_hstsStorage:(struct _CFHSTSPolicy *)arg1;
- (struct _CFHSTSPolicy *)_phskip_hstsStorage;
- (void)set_phskip_cookieStorageSet:(BOOL)arg1;
- (BOOL)_phskip_cookieStorageSet;
- (void)set_phskip_cookieStorage:(id)arg1;
- (id)_phskip_cookieStorage;
- (void)set_phskip_urlCacheSet:(BOOL)arg1;
- (BOOL)_phskip_urlCacheSet;
- (void)set_phskip_urlCache:(id)arg1;
- (id)_phskip_urlCache;
- (void)set_phskip_credStorageSet:(BOOL)arg1;
- (BOOL)_phskip_credStorageSet;
- (void)set_phskip_credStorage:(id)arg1;
- (id)_phskip_credStorage;
- (void)setDisposition:(id)arg1;
- (id)disposition;
- (void)setBackgroundSession:(BOOL)arg1;
- (BOOL)isBackgroundSession;
- (void)set_multipathAlternatePort:(unsigned long long)arg1;
- (unsigned long long)_multipathAlternatePort;
- (void)set_maximumWatchCellularTransferSize:(id)arg1;
- (id)_maximumWatchCellularTransferSize;
- (void)set_alwaysPerformDefaultTrustEvaluation:(BOOL)arg1;
- (BOOL)_alwaysPerformDefaultTrustEvaluation;
- (void)set_ignoreDidReceiveResponseDisposition:(BOOL)arg1;
- (BOOL)_ignoreDidReceiveResponseDisposition;
- (void)set_IDSMessageTimeout:(long long)arg1;
- (long long)_IDSMessageTimeout;
- (void)set_requiresSustainedDataDelivery:(BOOL)arg1;
- (BOOL)_requiresSustainedDataDelivery;
- (void)set_duetPreClearedMode:(long long)arg1;
- (long long)_duetPreClearedMode;
- (void)set_duetPreauthorized:(BOOL)arg1;
- (BOOL)_duetPreauthorized;
- (void)set_allowsSensitiveLogging:(BOOL)arg1;
- (BOOL)_allowsSensitiveLogging;
- (void)set_preventsAppSSO:(BOOL)arg1;
- (BOOL)_preventsAppSSO;
- (void)set_requiresSecureHTTPSProxyConnection:(BOOL)arg1;
- (BOOL)_requiresSecureHTTPSProxyConnection;
- (void)set_preventsSystemHTTPProxyAuthentication:(BOOL)arg1;
- (BOOL)_preventsSystemHTTPProxyAuthentication;
- (void)set_customReadBufferTimeout:(double)arg1;
- (double)_customReadBufferTimeout;
- (void)set_customReadBufferSize:(unsigned long long)arg1;
- (unsigned long long)_customReadBufferSize;
- (void)set_allowTCPIOConnectionStreamTask:(BOOL)arg1;
- (BOOL)_allowTCPIOConnectionStreamTask;
- (void)set_preventsDirectWiFiAccess:(BOOL)arg1;
- (BOOL)_preventsDirectWiFiAccess;
- (void)set_allowsTLSFallback:(BOOL)arg1;
- (BOOL)_allowsTLSFallback;
- (void)set_tlsTrustPinningPolicyName:(id)arg1;
- (id)_tlsTrustPinningPolicyName;
- (void)set_allowsTLSFalseStart:(BOOL)arg1;
- (BOOL)_allowsTLSFalseStart;
- (void)set_allowsTLSSessionResumption:(BOOL)arg1;
- (BOOL)_allowsTLSSessionResumption;
- (void)set_allowsTLSSessionTickets:(BOOL)arg1;
- (BOOL)_allowsTLSSessionTickets;
- (void)set_allowsTCPFastOpen:(BOOL)arg1;
- (BOOL)_allowsTCPFastOpen;
- (void)set_CTDataConnectionServiceType:(id)arg1;
- (id)_CTDataConnectionServiceType;
- (void)set_allowsIndefiniteConnections:(BOOL)arg1;
- (BOOL)_allowsIndefiniteConnections;
- (void)set_allowsResponseMonitoringDuringBodyTranmission:(BOOL)arg1;
- (BOOL)_allowsResponseMonitoringDuringBodyTranmission;
- (void)set_allowsMultipathTCP:(BOOL)arg1;
- (BOOL)_allowsMultipathTCP;
- (void)set_prefersInfraWiFi:(BOOL)arg1;
- (BOOL)_prefersInfraWiFi;
- (void)set_connectionPoolName:(id)arg1;
- (id)_connectionPoolName;
- (void)set_infersDiscretionaryFromOriginatingClient:(BOOL)arg1;
- (BOOL)_infersDiscretionaryFromOriginatingClient;
- (void)set_performsEVCertCheck:(BOOL)arg1;
- (BOOL)_performsEVCertCheck;
- (void)set_overridesBackgroundSessionAutoRedirect:(BOOL)arg1;
- (BOOL)_overridesBackgroundSessionAutoRedirect;
- (void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(BOOL)arg1;
- (BOOL)_respectsAllowsCellularAccessForDiscretionaryTasks;
- (void)set_clientIsNotExplicitlyDiscretionary:(BOOL)arg1;
- (BOOL)_clientIsNotExplicitlyDiscretionary;
- (void)set_onBehalfOfPairedDevice:(BOOL)arg1;
- (BOOL)_onBehalfOfPairedDevice;
- (void)set_allowsRetryForBackgroundDataTasks:(BOOL)arg1;
- (BOOL)_allowsRetryForBackgroundDataTasks;
- (void)set_longLivedConnectionCacheCellPurgeTimeout:(double)arg1;
- (double)_longLivedConnectionCacheCellPurgeTimeout;
- (void)set_longLivedConnectionCachePurgeTimeout:(double)arg1;
- (double)_longLivedConnectionCachePurgeTimeout;
- (void)set_connectionCacheCellPurgeTimeout:(double)arg1;
- (double)_connectionCacheCellPurgeTimeout;
- (void)set_connectionCachePurgeTimeout:(double)arg1;
- (double)_connectionCachePurgeTimeout;
- (void)set_atsContext:(id)arg1;
- (id)_atsContext;
- (void)set_appleIDContext:(id)arg1;
- (id)_appleIDContext;
- (void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1;
- (BOOL)_shouldSkipPreferredClientCertificateLookup;
- (void)set_timingDataOptions:(long long)arg1;
- (long long)_timingDataOptions;
- (void)set_sessionSendsLaunchOnDemandEvents:(BOOL)arg1;
- (BOOL)_sessionSendsLaunchOnDemandEvents;
- (void)set_preventsIdleSleepOnceConnected:(BOOL)arg1;
- (BOOL)_preventsIdleSleepOnceConnected;
- (void)set_allowsPowerNapScheduling:(BOOL)arg1;
- (BOOL)_allowsPowerNapScheduling;
- (void)set_allowsConstrainedNetworkAccess:(BOOL)arg1;
- (BOOL)_allowsConstrainedNetworkAccess;
- (void)set_allowsExpensiveAccess:(BOOL)arg1;
- (BOOL)_allowsExpensiveAccess;
- (void)set_reportsDataStalls:(BOOL)arg1;
- (BOOL)_reportsDataStalls;
- (void)set_TCPAdaptiveWriteTimeout:(unsigned long long)arg1;
- (unsigned long long)_TCPAdaptiveWriteTimeout;
- (void)set_TCPAdaptiveReadTimeout:(unsigned long long)arg1;
- (unsigned long long)_TCPAdaptiveReadTimeout;
- (void)set_sourceApplicationAuditTokenData:(id)arg1;
- (id)_sourceApplicationAuditTokenData;
- (void)set_sourceApplicationSecondaryIdentifier:(id)arg1;
- (id)_sourceApplicationSecondaryIdentifier;
- (void)set_sourceApplicationBundleIdentifier:(id)arg1;
- (id)_sourceApplicationBundleIdentifier;
- (void)set_directoryForDownloadedFiles:(id)arg1;
- (id)_directoryForDownloadedFiles;
- (void)set_requiresPowerPluggedIn:(BOOL)arg1;
- (BOOL)_requiresPowerPluggedIn;
- (void)setProtocolClasses:(id)arg1;
- (id)protocolClasses;
- (void)setShouldUseExtendedBackgroundIdleMode:(BOOL)arg1;
- (BOOL)shouldUseExtendedBackgroundIdleMode;
- (void)setHTTPMaximumConnectionsPerHost:(long long)arg1;
- (long long)HTTPMaximumConnectionsPerHost;
- (void)setHTTPAdditionalHeaders:(id)arg1;
- (id)HTTPAdditionalHeaders;
- (void)setHTTPCookieAcceptPolicy:(unsigned long long)arg1;
- (unsigned long long)HTTPCookieAcceptPolicy;
- (void)setHTTPShouldSetCookies:(BOOL)arg1;
- (BOOL)HTTPShouldSetCookies;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (BOOL)HTTPShouldUsePipelining;
- (void)setTLSMaximumSupportedProtocol:(int)arg1;
- (int)TLSMaximumSupportedProtocol;
- (void)setTLSMinimumSupportedProtocol:(int)arg1;
- (int)TLSMinimumSupportedProtocol;
- (void)setConnectionProxyDictionary:(id)arg1;
- (id)connectionProxyDictionary;
- (void)setSessionSendsLaunchEvents:(BOOL)arg1;
- (BOOL)sessionSendsLaunchEvents;
- (void)setSharedContainerIdentifier:(id)arg1;
- (id)sharedContainerIdentifier;
- (void)setDiscretionary:(BOOL)arg1;
- (BOOL)isDiscretionary;
- (void)setWaitsForConnectivity:(BOOL)arg1;
- (BOOL)waitsForConnectivity;
- (void)setAllowsConstrainedNetworkAccess:(BOOL)arg1;
- (BOOL)allowsConstrainedNetworkAccess;
- (void)setAllowsExpensiveNetworkAccess:(BOOL)arg1;
- (BOOL)allowsExpensiveNetworkAccess;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (BOOL)allowsCellularAccess;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (unsigned long long)networkServiceType;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (double)timeoutIntervalForResource;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (double)timeoutIntervalForRequest;
- (void)setRequestCachePolicy:(unsigned long long)arg1;
- (unsigned long long)requestCachePolicy;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (struct HTTPConnectionCacheLimits)getConnectionCacheLimits;
- (void *)_copyAttribute:(struct __CFString *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)_isEqual2:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1;
- (unsigned short)TLSMaximumSupportedProtocolVersion;
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1;
- (unsigned short)TLSMinimumSupportedProtocolVersion;
- (void)setURLCredentialStorage:(id)arg1;
- (id)URLCredentialStorage;
- (void)setURLCache:(id)arg1;
- (id)URLCache;
- (void)setHTTPCookieStorage:(id)arg1;
- (id)HTTPCookieStorage;
- (void)setHSTSPolicy:(struct _CFHSTSPolicy *)arg1;
- (struct _CFHSTSPolicy *)copyHSTSPolicy;
- (id)initWithDisposition:(id)arg1;

@end

