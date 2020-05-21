//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CTPNRRequestType, CTXPCServiceSubscriptionContext;

@protocol CTXPCServicePNRInterface
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 getPhoneNumberSignatureWithCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)isPhoneNumberCredentialValid:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)getPNRContext:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTPNRContextInfo *, NSError *))arg2;
- (void)issuePNRRequest:(CTXPCServiceSubscriptionContext *)arg1 pnrReqType:(CTPNRRequestType *)arg2 completion:(void (^)(BOOL, BOOL, NSError *))arg3;
- (void)isPNRSupported:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

