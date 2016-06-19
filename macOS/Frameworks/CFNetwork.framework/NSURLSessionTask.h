//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionTaskDependency, NSURLSessionTaskDependencyTree, NSURLSessionTaskHTTPAuthenticator;

@interface NSURLSessionTask : NSObject <NSCopying>
{
    float _priority;
    NSURL *_currentRequest_URL;
    NSURL *_currentRequest_mainDocumentURL;
    double __loadingPriority;
}

+ (id)taskForWrappedRequest:(id)arg1;
@property double _loadingPriority; // @synthesize _loadingPriority=__loadingPriority;
@property(readonly, retain) NSURL *currentRequest_mainDocumentURL; // @synthesize currentRequest_mainDocumentURL=_currentRequest_mainDocumentURL;
@property(readonly, retain) NSURL *currentRequest_URL; // @synthesize currentRequest_URL=_currentRequest_URL;
@property float priority; // @synthesize priority=_priority;
- (id)_transactionMetrics;
- (void)_prepareNewTimingDataContainer;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateCurrentRequest:(id)arg1;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (long long)computeAdjustedPoolPriority;
- (void)_onqueue_releasePowerAsssertion;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (_Bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (void)_setBytesPerSecondLimit:(long long)arg1;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession *)arg1;
- (void)_setSocketProperties:(struct __CFDictionary *)arg1 connectionProperties:(struct __CFDictionary *)arg2;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (const struct XCookieStorage *)_createXCookieStorage;
- (const struct XURLCache *)_createXURLCache;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)initializeHTTPAuthenticatorWithSessionConfiguration:(id)arg1;
- (struct _CFURLRequest *)_copyOriginalCFURLRequest;
- (struct _CFURLRequest *)_copyCurrentCFURLRequest;
- (id)initWithTask:(id)arg1;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;

// Remaining properties
@property unsigned long long _allowedProtocolTypes; // @dynamic _allowedProtocolTypes;
@property BOOL _allowsCellular; // @dynamic _allowsCellular;
@property(copy, nonatomic) NSDictionary *_backgroundTaskTimingData; // @dynamic _backgroundTaskTimingData;
@property(copy) NSString *_boundInterfaceIdentifier; // @dynamic _boundInterfaceIdentifier;
@property long long _bytesPerSecondLimit; // @dynamic _bytesPerSecondLimit;
@property BOOL _cacheOnly; // @dynamic _cacheOnly;
@property int _cachePolicy; // @dynamic _cachePolicy;
@property(retain) struct _CFURLCache *_cfCache; // @dynamic _cfCache;
@property(retain) struct OpaqueCFHTTPCookieStorage *_cfCookies; // @dynamic _cfCookies;
@property(retain) struct _CFURLCredentialStorage *_cfCreds; // @dynamic _cfCreds;
@property(retain) struct _CFHSTSPolicy *_cfHSTS; // @dynamic _cfHSTS;
@property(setter=_setConnectionIsCellular:) BOOL _connectionIsCellular; // @dynamic _connectionIsCellular;
@property(copy) NSArray *_contentDispositionFallbackArray; // @dynamic _contentDispositionFallbackArray;
@property int _cookieAcceptPolicy; // @dynamic _cookieAcceptPolicy;
@property(retain) struct _CFURLRequest *_currentCFURLRequest; // @dynamic _currentCFURLRequest;
@property unsigned int _darkWakePowerAssertion; // @dynamic _darkWakePowerAssertion;
@property(retain, nonatomic) NSDictionary *_dependencyInfo; // @dynamic _dependencyInfo;
@property BOOL _disallowCellular; // @dynamic _disallowCellular;
@property long long _expectedWorkload; // @dynamic _expectedWorkload;
@property(copy) NSURL *_ledBellyFallbackURL; // @dynamic _ledBellyFallbackURL;
@property(copy) NSString *_ledBellyServiceIdentifier; // @dynamic _ledBellyServiceIdentifier;
@property(copy) NSDictionary *_legacySocketStreamProperties; // @dynamic _legacySocketStreamProperties;
@property double _loadingPriorityValue; // @dynamic _loadingPriorityValue;
@property int _networkServiceType; // @dynamic _networkServiceType;
@property(copy) NSString *_pathToDownloadTaskFile; // @dynamic _pathToDownloadTaskFile;
@property(retain, nonatomic) struct __PerformanceTiming *_performanceTiming; // @dynamic _performanceTiming;
@property unsigned int _powerAssertion; // @dynamic _powerAssertion;
@property BOOL _preventsIdleSystemSleep; // @dynamic _preventsIdleSystemSleep;
@property long long _priority; // @dynamic _priority;
@property long long _priorityValue; // @dynamic _priorityValue;
@property BOOL _prohibitAuthUI; // @dynamic _prohibitAuthUI;
@property(nonatomic) id _protocolForTask; // @dynamic _protocolForTask;
@property(copy) NSDictionary *_proxySettings; // @dynamic _proxySettings;
@property long long _requestPriority; // @dynamic _requestPriority;
@property BOOL _shouldHandleCookies; // @dynamic _shouldHandleCookies;
@property BOOL _shouldPipelineHTTP; // @dynamic _shouldPipelineHTTP;
@property(nonatomic) BOOL _shouldReportTimingDataToAWD; // @dynamic _shouldReportTimingDataToAWD;
@property BOOL _shouldSkipPipelineProbe; // @dynamic _shouldSkipPipelineProbe;
@property BOOL _shouldSkipPreferredClientCertificateLookup; // @dynamic _shouldSkipPreferredClientCertificateLookup;
@property BOOL _shouldUsePipelineHeuristics; // @dynamic _shouldUsePipelineHeuristics;
@property(copy) NSDictionary *_sslSettings; // @dynamic _sslSettings;
@property(copy) NSString *_storagePartitionIdentifier; // @dynamic _storagePartitionIdentifier;
@property BOOL _strictContentLength; // @dynamic _strictContentLength;
@property long long _suspensionThreshhold; // @dynamic _suspensionThreshhold;
@property double _timeWindowDelay; // @dynamic _timeWindowDelay;
@property double _timeWindowDuration; // @dynamic _timeWindowDuration;
@property double _timeoutInterval; // @dynamic _timeoutInterval;
@property(copy) NSString *_uniqueIdentifier; // @dynamic _uniqueIdentifier;
@property(copy) NSURLSessionTaskHTTPAuthenticator *authenticator; // @dynamic authenticator;
@property long long countOfBytesExpectedToReceive; // @dynamic countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @dynamic countOfBytesExpectedToSend;
@property long long countOfBytesReceived; // @dynamic countOfBytesReceived;
@property long long countOfBytesSent; // @dynamic countOfBytesSent;
@property(copy) NSURLRequest *currentRequest; // @dynamic currentRequest;
@property(retain, nonatomic) NSURLSessionTaskDependencyTree *dependencyTree; // @dynamic dependencyTree;
@property(copy) NSError *error; // @dynamic error;
@property(copy) NSURLRequest *originalRequest; // @dynamic originalRequest;
@property(copy) NSURLResponse *response; // @dynamic response;
@property(retain) NSURLSession *session; // @dynamic session;
@property double startTime; // @dynamic startTime;
@property long long state; // @dynamic state;
@property(retain, nonatomic) NSURLSessionTaskDependency *taskDependency; // @dynamic taskDependency;
@property(copy) NSString *taskDescription; // @dynamic taskDescription;
@property unsigned long long taskIdentifier; // @dynamic taskIdentifier;
@property(readonly, retain) NSObject<OS_dispatch_queue> *workQueue; // @dynamic workQueue;

@end

