//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CTXPCServiceSubscriptionContext, NSDictionary, NSString;

@protocol CTXPCServiceCapabilitiesInterface
- (void)wifiCallingCTFollowUpComplete:(NSDictionary *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 removePhoneServicesDevice:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 addPhoneServicesDevice:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)getPhoneServicesDeviceInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getPhoneServicesDeviceList:(void (^)(NSDictionary *, NSError *))arg1;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 recheckPhoneServicesAccountStatus:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 getSystemCapabilities:(void (^)(NSDictionary *, NSError *))arg2;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 setCapability:(NSString *)arg2 enabled:(BOOL)arg3 info:(NSDictionary *)arg4 completion:(void (^)(NSError *))arg5;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 getCapability:(NSString *)arg2 completion:(void (^)(BOOL, NSDictionary *, NSError *))arg3;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 canSetCapability:(NSString *)arg2 completion:(void (^)(BOOL, NSDictionary *, NSError *))arg3;
@end

