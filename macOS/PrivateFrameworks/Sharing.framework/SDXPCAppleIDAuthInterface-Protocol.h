//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol SDXPCAppleIDAuthInterface
- (void)statusInfoWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)requestWithInfo:(NSDictionary *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)personInfoWithEmailOrPhone:(NSString *)arg1 completion:(void (^)(SFAppleIDPersonInfo *, NSError *))arg2;
- (void)myAccountWithCompletion:(void (^)(SFAppleIDAccount *, NSError *))arg1;
- (void)accountForAppleID:(NSString *)arg1 withCompletion:(void (^)(SFAppleIDAccount *, NSError *))arg2;
@end

