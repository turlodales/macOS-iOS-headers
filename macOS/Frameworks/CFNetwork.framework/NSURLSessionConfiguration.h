//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSData, NSDictionary, NSHTTPCookieStorage, NSSet, NSString, NSURL, NSURLCache, NSURLCredentialStorage;

@interface NSURLSessionConfiguration : NSObject <NSSecureCoding, NSCopying>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)backgroundSessionConfiguration:(id)arg1;
+ (id)backgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)ephemeralSessionConfiguration;
+ (id)sessionConfigurationForSharedSession;
+ (id)defaultSessionConfiguration;
+ (id)_defaultProtocolClasses;
- (struct _CFHSTSPolicy *)copyHSTSPolicy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct OpaqueCFHTTPCookieStorage *)_copyCFCookieStorage;
- (struct HTTPConnectionCacheLimits)getConnectionCacheLimits;
- (void *)_copyAttribute:(struct __CFString *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDisposition:(id)arg1;

// Remaining properties
@property(copy) NSDictionary *HTTPAdditionalHeaders; // @dynamic HTTPAdditionalHeaders;
@property unsigned long long HTTPCookieAcceptPolicy; // @dynamic HTTPCookieAcceptPolicy;
@property(retain) NSHTTPCookieStorage *HTTPCookieStorage; // @dynamic HTTPCookieStorage;
@property long long HTTPMaximumConnectionsPerHost; // @dynamic HTTPMaximumConnectionsPerHost;
@property BOOL HTTPShouldSetCookies; // @dynamic HTTPShouldSetCookies;
@property BOOL HTTPShouldUsePipelining; // @dynamic HTTPShouldUsePipelining;
@property int TLSMaximumSupportedProtocol; // @dynamic TLSMaximumSupportedProtocol;
@property int TLSMinimumSupportedProtocol; // @dynamic TLSMinimumSupportedProtocol;
@property(retain) NSURLCache *URLCache; // @dynamic URLCache;
@property(retain) NSURLCredentialStorage *URLCredentialStorage; // @dynamic URLCredentialStorage;
@property(copy) NSString *_CTDataConnectionServiceType; // @dynamic _CTDataConnectionServiceType;
@property unsigned long long _TCPAdaptiveReadTimeout; // @dynamic _TCPAdaptiveReadTimeout;
@property unsigned long long _TCPAdaptiveWriteTimeout; // @dynamic _TCPAdaptiveWriteTimeout;
@property BOOL _allowTCPIOConnectionStreamTask; // @dynamic _allowTCPIOConnectionStreamTask;
@property BOOL _allowsExpensiveAccess; // @dynamic _allowsExpensiveAccess;
@property BOOL _allowsIndefiniteConnections; // @dynamic _allowsIndefiniteConnections;
@property BOOL _allowsMultipathTCP; // @dynamic _allowsMultipathTCP;
@property BOOL _allowsPowerNapScheduling; // @dynamic _allowsPowerNapScheduling;
@property BOOL _allowsResponseMonitoringDuringBodyTranmission; // @dynamic _allowsResponseMonitoringDuringBodyTranmission;
@property BOOL _allowsRetryForBackgroundDataTasks; // @dynamic _allowsRetryForBackgroundDataTasks;
@property BOOL _allowsTCPFastOpen; // @dynamic _allowsTCPFastOpen;
@property BOOL _allowsTLSSessionTickets; // @dynamic _allowsTLSSessionTickets;
@property(copy) id <NSURLSessionAppleIDContext> _appleIDContext; // @dynamic _appleIDContext;
@property(copy) NSData *_atsContext; // @dynamic _atsContext;
@property(copy) NSSet *_authenticatorStatusCodes; // @dynamic _authenticatorStatusCodes;
@property BOOL _collectsTimingData; // @dynamic _collectsTimingData;
@property(copy) NSString *_companionAppBundleIdentifier; // @dynamic _companionAppBundleIdentifier;
@property double _connectionCacheCellPurgeTimeout; // @dynamic _connectionCacheCellPurgeTimeout;
@property double _connectionCachePurgeTimeout; // @dynamic _connectionCachePurgeTimeout;
@property(copy) NSString *_connectionPoolName; // @dynamic _connectionPoolName;
@property(copy) NSArray *_contentDispHeadEncFallback; // @dynamic _contentDispHeadEncFallback;
@property(copy) NSURL *_directoryForDownloadedFiles; // @dynamic _directoryForDownloadedFiles;
@property BOOL _disablesOutOfProcessDirectWiFiUsage; // @dynamic _disablesOutOfProcessDirectWiFiUsage;
@property BOOL _disablesUseOfProxySession; // @dynamic _disablesUseOfProxySession;
@property BOOL _disallowsSPDY; // @dynamic _disallowsSPDY;
@property unsigned long long _forcedNetworkServiceType; // @dynamic _forcedNetworkServiceType;
@property BOOL _forcesNewConnections; // @dynamic _forcesNewConnections;
@property BOOL _infersDiscretionaryFromOriginatingClient; // @dynamic _infersDiscretionaryFromOriginatingClient;
@property(copy) NSString *_ledBellyServiceIdentifier; // @dynamic _ledBellyServiceIdentifier;
@property(copy) NSDictionary *_overriddenDelegateOptions; // @dynamic _overriddenDelegateOptions;
@property BOOL _overridesBackgroundSessionAutoRedirect; // @dynamic _overridesBackgroundSessionAutoRedirect;
@property BOOL _performsEVCertCheck; // @dynamic _performsEVCertCheck;
@property(retain) NSHTTPCookieStorage *_phskip_cookieStorage; // @dynamic _phskip_cookieStorage;
@property BOOL _phskip_cookieStorageSet; // @dynamic _phskip_cookieStorageSet;
@property(retain) NSURLCredentialStorage *_phskip_credStorage; // @dynamic _phskip_credStorage;
@property BOOL _phskip_credStorageSet; // @dynamic _phskip_credStorageSet;
@property(retain) struct _CFHSTSPolicy *_phskip_hstsStorage; // @dynamic _phskip_hstsStorage;
@property BOOL _phskip_hstsStorageSet; // @dynamic _phskip_hstsStorageSet;
@property(retain) NSURLCache *_phskip_urlCache; // @dynamic _phskip_urlCache;
@property BOOL _phskip_urlCacheSet; // @dynamic _phskip_urlCacheSet;
@property BOOL _prefersInfraWiFi; // @dynamic _prefersInfraWiFi;
@property BOOL _preventsDirectWiFiAccess; // @dynamic _preventsDirectWiFiAccess;
@property BOOL _preventsIdleSleep; // @dynamic _preventsIdleSleep;
@property BOOL _preventsIdleSleepOnceConnected; // @dynamic _preventsIdleSleepOnceConnected;
@property(getter=_isProxySession) BOOL _proxySession; // @dynamic _proxySession;
@property BOOL _requiresClientToOpenFiles; // @dynamic _requiresClientToOpenFiles;
@property BOOL _requiresPowerPluggedIn; // @dynamic _requiresPowerPluggedIn;
@property BOOL _respectsAllowsCellularAccessForDiscretionaryTasks; // @dynamic _respectsAllowsCellularAccessForDiscretionaryTasks;
@property BOOL _sessionSendsLaunchOnDemandEvents; // @dynamic _sessionSendsLaunchOnDemandEvents;
@property BOOL _shouldPreserveBackgroundSessionDisposition; // @dynamic _shouldPreserveBackgroundSessionDisposition;
@property BOOL _shouldSkipPreferredClientCertificateLookup; // @dynamic _shouldSkipPreferredClientCertificateLookup;
@property(copy) NSDictionary *_socketStreamProperties; // @dynamic _socketStreamProperties;
@property(copy) NSData *_sourceApplicationAuditTokenData; // @dynamic _sourceApplicationAuditTokenData;
@property(copy) NSString *_sourceApplicationBundleIdentifier; // @dynamic _sourceApplicationBundleIdentifier;
@property(copy) NSString *_sourceApplicationSecondaryIdentifier; // @dynamic _sourceApplicationSecondaryIdentifier;
@property BOOL _supportsAVAssetDownloads; // @dynamic _supportsAVAssetDownloads;
@property(copy) NSString *_tcpConnectionPoolName; // @dynamic _tcpConnectionPoolName;
@property long long _timingDataOptions; // @dynamic _timingDataOptions;
@property BOOL _usePipeliningHeuristics; // @dynamic _usePipeliningHeuristics;
@property(copy) NSString *_watchAppBundleIdentifier; // @dynamic _watchAppBundleIdentifier;
@property(copy) NSString *_watchExtensionBundleIdentifier; // @dynamic _watchExtensionBundleIdentifier;
@property BOOL allowsCellularAccess; // @dynamic allowsCellularAccess;
@property(getter=isBackgroundSession) BOOL backgroundSession; // @dynamic backgroundSession;
@property(copy) NSDictionary *connectionProxyDictionary; // @dynamic connectionProxyDictionary;
@property(getter=isDiscretionary) BOOL discretionary; // @dynamic discretionary;
@property NSString *disposition; // @dynamic disposition;
@property(copy) NSString *identifier; // @dynamic identifier;
@property long long minimumFastLanePriority; // @dynamic minimumFastLanePriority;
@property unsigned long long networkServiceType; // @dynamic networkServiceType;
@property long long numFastLanes; // @dynamic numFastLanes;
@property long long numPriorityLevels; // @dynamic numPriorityLevels;
@property long long pipeliningHighWatermark; // @dynamic pipeliningHighWatermark;
@property long long pipeliningLowWatermark; // @dynamic pipeliningLowWatermark;
@property(copy) NSArray *protocolClasses; // @dynamic protocolClasses;
@property unsigned long long requestCachePolicy; // @dynamic requestCachePolicy;
@property BOOL sessionSendsLaunchEvents; // @dynamic sessionSendsLaunchEvents;
@property(copy) NSString *sharedContainerIdentifier; // @dynamic sharedContainerIdentifier;
@property BOOL shouldUseExtendedBackgroundIdleMode; // @dynamic shouldUseExtendedBackgroundIdleMode;
@property BOOL skip_download_unlink; // @dynamic skip_download_unlink;
@property double timeoutIntervalForRequest; // @dynamic timeoutIntervalForRequest;
@property double timeoutIntervalForResource; // @dynamic timeoutIntervalForResource;

@end

