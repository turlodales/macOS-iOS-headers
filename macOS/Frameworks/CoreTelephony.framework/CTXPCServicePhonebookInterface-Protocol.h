//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CTXPCServiceSubscriptionContext, NSString;

@protocol CTXPCServicePhonebookInterface
- (void)getPhoneNumberWithCompletion:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTPhoneNumberInfo *, NSError *))arg2;
- (void)getPhonebookEntryCountWithCompletion:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(int, NSError *))arg2;
- (void)getPhonebookEntryWithCompletion:(CTXPCServiceSubscriptionContext *)arg1 atIndex:(int)arg2 completion:(void (^)(CTPhoneBookEntry *, NSError *))arg3;
- (void)fetchPhonebook:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)savePhonebookEntry:(CTXPCServiceSubscriptionContext *)arg1 atIndex:(int)arg2 withContactName:(NSString *)arg3 contactNumber:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)selectPhonebook:(CTXPCServiceSubscriptionContext *)arg1 forPhonebookName:(int)arg2 withPassword:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
@end

