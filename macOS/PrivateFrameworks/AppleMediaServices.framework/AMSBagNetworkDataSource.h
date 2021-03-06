//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagDataSourceProtocol-Protocol.h>

@class AMSBagNetworkTask, AMSBagNetworkTaskResult, AMSProcessInfo, NSDate, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol>
{
    CDUnknownBlockType _dataSourceChangedHandler;
    CDUnknownBlockType _dataSourceDataInvalidatedHandler;
    NSString *_profile;
    NSString *_profileVersion;
    AMSBagNetworkTaskResult *_cachedResult;
    NSObject<OS_dispatch_queue> *_cachedDataAccessQueue;
    NSString *_cachedStorefront;
    NSObject<OS_dispatch_queue> *_cachedStorefrontAccessQueue;
    AMSBagNetworkTask *_currentLoadTask;
    NSObject<OS_dispatch_queue> *_processAccountStoreDidChangeNotificationQueue;
    AMSProcessInfo *_processInfo;
}

+ (BOOL)_shouldProcessAccountStoreDidChangeNotification:(id)arg1 withMediaType:(id)arg2;
+ (BOOL)_isDataDictionary:(id)arg1 equalToDataDictionary:(id)arg2;
- (void).cxx_destruct;
@property(retain) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(retain) NSObject<OS_dispatch_queue> *processAccountStoreDidChangeNotificationQueue; // @synthesize processAccountStoreDidChangeNotificationQueue=_processAccountStoreDidChangeNotificationQueue;
@property(retain) AMSBagNetworkTask *currentLoadTask; // @synthesize currentLoadTask=_currentLoadTask;
@property(retain) NSObject<OS_dispatch_queue> *cachedStorefrontAccessQueue; // @synthesize cachedStorefrontAccessQueue=_cachedStorefrontAccessQueue;
@property(retain) NSString *cachedStorefront; // @synthesize cachedStorefront=_cachedStorefront;
@property(retain) NSObject<OS_dispatch_queue> *cachedDataAccessQueue; // @synthesize cachedDataAccessQueue=_cachedDataAccessQueue;
@property(retain) AMSBagNetworkTaskResult *cachedResult; // @synthesize cachedResult=_cachedResult;
@property(readonly, copy) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, copy) NSString *profile; // @synthesize profile=_profile;
@property(copy) CDUnknownBlockType dataSourceDataInvalidatedHandler; // @synthesize dataSourceDataInvalidatedHandler=_dataSourceDataInvalidatedHandler;
@property(copy) CDUnknownBlockType dataSourceChangedHandler; // @synthesize dataSourceChangedHandler=_dataSourceChangedHandler;
- (void)_updateCachedResult:(id)arg1;
- (void)_invalidateCacheNotification:(id)arg1;
- (id)_fetchBag;
- (void)_accountStoreDidChange:(id)arg1;
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)bagKeyInfoForKey:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isLoaded) BOOL loaded;
@property(readonly) NSDate *expirationDate;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

