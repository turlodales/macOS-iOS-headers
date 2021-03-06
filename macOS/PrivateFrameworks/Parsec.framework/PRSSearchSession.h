//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, PRSCEPData, PRSRankingKnobs;

@interface PRSSearchSession : NSObject
{
    id <PRSSessionController> _client;
    double _lastQueryTime;
    NSString *_queryLanguage;
    NSDictionary *_sqfData;
    NSString *_userAgent;
    NSObject<OS_dispatch_queue> *_clientQueue;
    double _sessionStartTime;
    NSArray *_supportedServices;
    double _retryAfter;
}

+ (id)currentInputMethod;
+ (id)currentKeyboardLayout;
+ (void)initialize;
@property double retryAfter; // @synthesize retryAfter=_retryAfter;
@property(retain) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, nonatomic) NSArray *supportedServices; // @synthesize supportedServices=_supportedServices;
@property(nonatomic) double sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) PRSCEPData *cannedCEPValues;
- (void)shrinkCaches;
- (long long)getCategoryScoreToReturnInFeedback;
@property(readonly, nonatomic) PRSRankingKnobs *rankingKnobs;
- (id)getModelParameters;
@property(readonly, nonatomic) NSDictionary *cepDictionary;
@property(readonly, nonatomic) NSSet *appBlacklist;
- (void)pruneCache;
- (void)getCachedQueries:(id *)arg1 results:(id *)arg2 webSearch:(BOOL)arg3;
- (void)cacheQueryResponse:(id)arg1 webSearch:(BOOL)arg2;
- (void)queryCompleted:(id)arg1;
- (id)cachedResultSetForCompletionString:(id)arg1 webSearch:(BOOL)arg2;
- (id)cachedResultSetForQueryTask:(id)arg1;
- (id)cachedResultSetForQuery:(id)arg1 webSearch:(BOOL)arg2;
- (id)copyCachedResult:(id)arg1 webSearch:(BOOL)arg2;
- (id)resourceWithID:(id)arg1;
@property(readonly, nonatomic) double searchRenderTimeout;
- (void)getFTEStringsWithReply:(CDUnknownBlockType)arg1;
- (void)addFeedback:(id)arg1;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 handler:(id)arg4;
- (void)setQueryLanguage:(id)arg1;
- (void)setUserAgentString:(id)arg1;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2;
- (void)setFeedbackStartTime;
- (void)deactivate;
- (void)activate;
- (void)warmup;
- (id)getQueryTaskForHandler:(id)arg1 scaleFactor:(double)arg2;
- (id)dictationQueryWithResponse:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 webSearch:(BOOL)arg4 handler:(id)arg5;
@property(readonly, nonatomic) id <SFFeedbackListener> listener;
- (void)setParsecFeedbackAllowed:(BOOL)arg1;

@end

