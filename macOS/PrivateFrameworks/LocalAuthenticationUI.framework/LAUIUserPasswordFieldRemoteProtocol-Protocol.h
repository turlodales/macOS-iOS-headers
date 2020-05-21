//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol LAUIUserPasswordFieldRemoteProtocol <NSObject>
- (void)didVerifyPassword;
- (void)externalizedContextInReply:(void (^)(NSData *))arg1;

@optional
- (void)didShowAccountUnblocked;
- (void)didShowAccountBackoffBlocked;
- (void)didSubmitUnverifiedData:(unsigned int)arg1 completion:(void (^)(BOOL))arg2;
- (void)requestCancelAuthentication;
- (void)passwordFieldDidResignFirstResponder;
- (void)didSubmitWrongPassword:(BOOL)arg1;
@end

