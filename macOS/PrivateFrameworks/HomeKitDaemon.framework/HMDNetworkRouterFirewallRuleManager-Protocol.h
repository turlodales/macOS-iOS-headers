//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSCountedSet, NSSet;

@protocol HMDNetworkRouterFirewallRuleManager <NSObject>
@property(readonly, nonatomic) NSSet *interestedAccessories;
- (void)fetchRulesForAccessories:(NSSet *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)fetchCloudChangesWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)removeInterestedAccessories:(NSCountedSet *)arg1;
- (void)addInterestedAccessories:(NSCountedSet *)arg1;
- (void)shutdownWithCompletion:(void (^)(NSError *))arg1;
- (void)startupWithCompletion:(void (^)(NSError *))arg1;
@end

