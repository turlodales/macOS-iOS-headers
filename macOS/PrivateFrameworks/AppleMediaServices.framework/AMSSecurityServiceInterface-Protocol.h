//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, AMSBuyParams, AMSProcessInfo, NSDictionary, NSURLRequest, NSURLResponse;

@protocol AMSSecurityServiceInterface <NSObject>
- (void)signedHeadersForRequest:(NSURLRequest *)arg1 buyParams:(AMSBuyParams *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)handleResponse:(NSURLResponse *)arg1 completion:(void (^)(AMSURLAction *))arg2;
- (void)performBiometricTokenUpdateWithAccount:(ACAccount *)arg1 clientInfo:(AMSProcessInfo *)arg2 additionalDialogMetrics:(NSDictionary *)arg3 shouldRequestConfirmation:(BOOL)arg4 completion:(void (^)(BOOL, NSError *))arg5;
@end

