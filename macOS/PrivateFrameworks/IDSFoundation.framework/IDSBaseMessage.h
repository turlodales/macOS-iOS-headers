//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class APSOutgoingMessageCheckpointTrace, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString, NSURL;

@interface IDSBaseMessage : NSObject <NSCopying>
{
    NSDictionary *_cachedBody;
    NSString *_topic;
    NSDictionary *_userInfo;
    NSData *_serviceData;
    NSDictionary *_clientInfo;
    NSDate *_creationDate;
    NSDictionary *_responseAlert;
    NSString *_dsAuthID;
    NSString *_dataUsageBundleIdentifier;
    id _context;
    int _timeoutRetries;
    BOOL _usingOutgoingPush;
    BOOL _wantsResponse;
    BOOL _wantsMultipleResponses;
    BOOL _wantsIntegerUniqueIDs;
    BOOL _wantsBinaryPush;
    BOOL _forceCellular;
    BOOL _highPriority;
    BOOL _hasReceivedPushAck;
    BOOL _hasAttemptedAPSDelivery;
    BOOL _httpDoNotDecodeData;
    BOOL _ignoreMaxRetryCount;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _deliveryAcknowledgementBlock;
    double _timeout;
    double _timeSent;
    unsigned long long _uniqueID;
    NSNumber *_retryCount;
    long long _importanceLevel;
    long long _deliveryMechanism;
    id <IDSBaseMessageSigningSession> _signingSession;
    NSString *_service;
    NSString *_subService;
    NSString *_underlyingService;
    NSURL *_URLOverride;
    unsigned long long _sentByteCount;
    unsigned long long _receivedByteCount;
    NSNumber *_pushAckTimestamp;
    BOOL _isMultipleAuthCertCapable;
    APSOutgoingMessageCheckpointTrace *_apsdCheckpointTrace;
    NSDictionary *_responseAlertInfo;
    NSNumber *_originalTimestamp;
    NSDate *_requestStart;
    NSDate *_requestEnd;
    NSDate *_responseReceived;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *responseReceived; // @synthesize responseReceived=_responseReceived;
@property(retain, nonatomic) NSDate *requestEnd; // @synthesize requestEnd=_requestEnd;
@property(retain, nonatomic) NSDate *requestStart; // @synthesize requestStart=_requestStart;
@property(nonatomic) unsigned long long receivedByteCount; // @synthesize receivedByteCount=_receivedByteCount;
@property(nonatomic) unsigned long long sentByteCount; // @synthesize sentByteCount=_sentByteCount;
@property(retain) id context; // @synthesize context=_context;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSNumber *originalTimestamp; // @synthesize originalTimestamp=_originalTimestamp;
@property(copy) NSURL *URLOverride; // @synthesize URLOverride=_URLOverride;
@property(copy, nonatomic) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(copy) NSData *serviceData; // @synthesize serviceData=_serviceData;
@property(copy, nonatomic, setter=setDSAuthID:) NSString *dsAuthID; // @synthesize dsAuthID=_dsAuthID;
@property(retain, nonatomic) id <IDSBaseMessageSigningSession> signingSession; // @synthesize signingSession=_signingSession;
@property(nonatomic) BOOL isMultipleAuthCertCapable; // @synthesize isMultipleAuthCertCapable=_isMultipleAuthCertCapable;
@property BOOL ignoreMaxRetryCount; // @synthesize ignoreMaxRetryCount=_ignoreMaxRetryCount;
@property(copy) NSDictionary *responseAlertInfo; // @synthesize responseAlertInfo=_responseAlertInfo;
@property int timeoutRetries; // @synthesize timeoutRetries=_timeoutRetries;
@property BOOL httpDoNotDecodeData; // @synthesize httpDoNotDecodeData=_httpDoNotDecodeData;
@property BOOL wantsMultipleResponses; // @synthesize wantsMultipleResponses=_wantsMultipleResponses;
@property BOOL wantsResponse; // @synthesize wantsResponse=_wantsResponse;
@property BOOL wantsIntegerUniqueIDs; // @synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs;
@property BOOL wantsBinaryPush; // @synthesize wantsBinaryPush=_wantsBinaryPush;
@property BOOL highPriority; // @synthesize highPriority=_highPriority;
@property BOOL forceCellular; // @synthesize forceCellular=_forceCellular;
@property(copy) NSString *underlyingService; // @synthesize underlyingService=_underlyingService;
@property(copy) NSString *subService; // @synthesize subService=_subService;
@property(copy) NSString *service; // @synthesize service=_service;
@property long long deliveryMechanism; // @synthesize deliveryMechanism=_deliveryMechanism;
@property long long importanceLevel; // @synthesize importanceLevel=_importanceLevel;
@property(retain) NSNumber *pushAckTimestamp; // @synthesize pushAckTimestamp=_pushAckTimestamp;
@property(retain) APSOutgoingMessageCheckpointTrace *apsdCheckpointTrace; // @synthesize apsdCheckpointTrace=_apsdCheckpointTrace;
@property BOOL hasAttemptedAPSDelivery; // @synthesize hasAttemptedAPSDelivery=_hasAttemptedAPSDelivery;
@property BOOL hasReceivedPushAck; // @synthesize hasReceivedPushAck=_hasReceivedPushAck;
@property(retain) NSString *topic; // @synthesize topic=_topic;
@property(copy) CDUnknownBlockType deliveryAcknowledgementBlock; // @synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property double timeSent; // @synthesize timeSent=_timeSent;
@property double timeout; // @synthesize timeout=_timeout;
@property unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, setter=_setCachedBody:) NSDictionary *_cachedBody; // @synthesize _cachedBody;
@property(setter=_setUsingOutgoingPush:) BOOL _usingOutgoingPush; // @synthesize _usingOutgoingPush;
- (void)logFailureInfo;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseStatus:(unsigned long long)arg1;
- (void)handleResponseBody:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
@property(readonly) NSDictionary *messageBody;
@property(readonly) NSDictionary *additionalInternalHeaders;
@property(readonly) NSDictionary *nonStandardMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary *additionalMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary *additionalQueryStringParameters;
@property(readonly) NSDictionary *additionalMessageHeaders;
@property(readonly) NSString *retryCountKey;
@property(readonly) NSString *bagKey;
@property(readonly) long long responseCommand;
@property(readonly) long long command;
@property(readonly) NSString *userAgentHeaderString;
@property(readonly) BOOL wantsUserAgentInHeaders;
@property(readonly) BOOL requiresPushTokenKeys;
@property(readonly) NSArray *requiredKeys;
- (BOOL)hasRequiredKeys:(id *)arg1;
@property(copy, nonatomic) NSNumber *serverTimestampReceivedDate;
@property(copy, nonatomic) NSNumber *serverTimestamp;
@property(readonly, copy, nonatomic) NSData *IDCertificate;
@property(readonly, nonatomic) struct __SecKey *identityPublicKey;
@property(readonly, nonatomic) struct __SecKey *identityPrivateKey;
@property(copy, nonatomic) NSMutableArray *userIDArray;
@property(copy, nonatomic) NSMutableArray *privateKeyArray;
@property(copy, nonatomic) NSMutableArray *publicKeyArray;
@property(copy, nonatomic) NSMutableArray *certDataArray;
@property(copy, nonatomic) NSData *pushToken;
@property(copy, nonatomic) NSData *pushCertificate;
@property(nonatomic) struct __SecKey *pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey;
- (void)_clearCache;
- (void)_cacheBody;
@property(readonly) NSDictionary *messageBodyUsingCache;
@property(readonly) BOOL isValidMessage;
@property(readonly) BOOL payloadCanBeLogged;
- (BOOL)isIDSMessage;
- (id)messageBodyDataOverride;
@property(readonly) NSString *dataUsageBundleIdentifier;
@property(readonly) double customRetryInterval;
@property(readonly) BOOL wantsCustomRetryInterval;
@property(readonly) BOOL wantsIDSSignatures;
@property(readonly) BOOL wantsBodySignature;
@property(readonly) BOOL isWebTunnelMessage;
@property(readonly) BOOL wantsSignature;
@property(readonly) BOOL ignoresNetworkConnectivity;
@property(readonly) BOOL allowsServerProvidedLenientAnisetteTimeout;
@property(readonly) double anisetteHeadersTimeout;
@property(readonly) BOOL wantsAPSRetries;
@property(readonly) BOOL wantsManagedRetries;
@property(readonly) BOOL wantsExtraTimeoutRetry;
@property(readonly) int maxTimeoutRetries;
@property(readonly) BOOL wantsCFNetworkTimeout;
@property(readonly) BOOL wantsBagKey;
@property(readonly) BOOL allowDualDelivery;
@property(readonly) BOOL wantsHTTPGet;
@property(readonly) BOOL wantsHTTPHeaders;
@property(readonly) BOOL wantsJSONBody;
@property(readonly) BOOL wantsCompressedBody;
@property(readonly) BOOL wantsIDSServer;
@property(readonly) NSString *uniqueIDString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

