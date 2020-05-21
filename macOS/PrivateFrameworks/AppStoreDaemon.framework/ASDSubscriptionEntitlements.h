//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject
{
    ASDServiceBroker *_serviceBroker;
    int _newsCacheUpdatedNotificationToken;
    int _appStoreCacheUpdatedNotificationToken;
    int _appStoreArcadeSubscriptionBagUpdatedNotificationToken;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(CDUnknownBlockType)arg1;
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(BOOL)arg2 withCacheInfoResultHandler:(CDUnknownBlockType)arg3;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(BOOL)arg2 withResultHandler:(CDUnknownBlockType)arg3;
- (void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultAndExpiryHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(CDUnknownBlockType)arg1;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(CDUnknownBlockType)arg1;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;
- (id)_initWithServiceBroker:(id)arg1;
- (void)dealloc;
- (id)init;

@end

