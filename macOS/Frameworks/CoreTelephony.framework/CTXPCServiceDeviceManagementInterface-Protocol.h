//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CTXPCServiceSubscriptionContext, NSDictionary, NSString;

@protocol CTXPCServiceDeviceManagementInterface
- (void)renamePersonalWallet:(NSString *)arg1 to:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)listPersonalWallets:(void (^)(NSArray *, NSError *))arg1;
- (void)deletePersonalWallet:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)resetUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 apns:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
@end

