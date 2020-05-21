//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import "AMSURLProtocolDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class AMSProcessInfo, AMSURLSession, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagNetworkTask : AMSTask <NSURLSessionTaskDelegate, AMSURLProtocolDelegate>
{
    BOOL _waitingForConnectivity;
    AMSProcessInfo *_clientInfo;
    NSString *_profile;
    NSString *_profileVersion;
    AMSURLSession *_URLSession;
    NSMutableArray *_waitingForConnectivityBlocks;
    NSObject<OS_dispatch_queue> *_waitingForConnectivityQueue;
    NSString *_logKey;
}

+ (id)_URLCookieNamesForProfile:(id)arg1;
+ (BOOL)_shouldReloadDataForOriginalCookies:(id)arg1 newCookies:(id)arg2;
+ (void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2;
+ (id)_defaultURLCookieNames;
+ (id)_setStorefrontFromURLResponse:(id)arg1 bagData:(id)arg2;
+ (id)_OSBuildTypeString;
+ (id)_deviceString;
+ (id)bagStorefrontForAccountMediaType:(id)arg1;
+ (id)bagAccountForAccountMediaType:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) NSObject<OS_dispatch_queue> *waitingForConnectivityQueue; // @synthesize waitingForConnectivityQueue=_waitingForConnectivityQueue;
@property(retain) NSMutableArray *waitingForConnectivityBlocks; // @synthesize waitingForConnectivityBlocks=_waitingForConnectivityBlocks;
@property BOOL waitingForConnectivity; // @synthesize waitingForConnectivity=_waitingForConnectivity;
@property(retain) AMSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(retain) NSString *profile; // @synthesize profile=_profile;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
- (id)_cookiesForNames:(id)arg1;
- (void)_updateWaitingForConnectivity:(BOOL)arg1;
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg1;
- (BOOL)_shouldRetryForResult:(id)arg1 cookieNames:(id)arg2 urlCookies:(id)arg3 newStorefront:(id)arg4;
- (id)_createRequestWithCookieNames:(id)arg1 storefront:(id)arg2;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)performFetch;
- (void)addWaitingForConnectivityBlock:(CDUnknownBlockType)arg1;
- (id)initWithClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

