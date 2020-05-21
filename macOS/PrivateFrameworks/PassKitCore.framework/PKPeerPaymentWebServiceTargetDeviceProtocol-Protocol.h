//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, PKAppleAccountInformation, PKPaymentProvisioningController, PKPeerPaymentAccount, PKPeerPaymentCredential, PKPeerPaymentWebService;

@protocol PKPeerPaymentWebServiceTargetDeviceProtocol <NSObject>
- (void)cloudStoreStatusWithCompletion:(void (^)(CKAccountInfo *, BOOL, NSError *))arg1;
- (void)provisionPeerPaymentPassWithProvisioningController:(PKPaymentProvisioningController *)arg1 credential:(PKPeerPaymentCredential *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)setUserHasDisabledPeerPayment:(BOOL)arg1;
- (BOOL)userHasDisabledPeerPayment;
- (NSArray *)secureElementIdentifiers;
- (NSString *)bridgedClientInfo;
- (void)updateAccountWithCompletion:(void (^)(PKPeerPaymentAccount *))arg1;
- (PKPeerPaymentAccount *)account;
- (void)downloadPassIfNecessaryWithCompletion:(void (^)(BOOL))arg1;

@optional
- (void)renewAppleAccountWithCompletionHandler:(void (^)(long long, PKAppleAccountInformation *))arg1;
- (PKAppleAccountInformation *)appleAccountInformation;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(void (^)(BOOL))arg1;
- (void)peerPaymentReRegisterWithURL:(NSURL *)arg1 pushToken:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)peerPaymentReRegisterWithURL:(NSURL *)arg1 pushToken:(NSString *)arg2 peerPaymentWebService:(PKPeerPaymentWebService *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)resetApplePayManateeViewWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)checkTLKsMissingWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(void (^)(BOOL, NSError *))arg1;
- (NSString *)deviceRegion;
@end

