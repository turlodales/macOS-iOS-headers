//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTXPCServiceSubscriptionContext, NSString;

@protocol CTXPCServiceCallInterface
- (void)shouldShowUserWarningWhenDialingCallOnContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)getOperatorMultiPartyCallCountMaximum:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)getCallCapabilities:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTCallCapabilities *, NSError *))arg2;
- (void)isEmergencyNumberWithWhitelistIncluded:(CTXPCServiceSubscriptionContext *)arg1 number:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)isEmergencyNumber:(CTXPCServiceSubscriptionContext *)arg1 number:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

