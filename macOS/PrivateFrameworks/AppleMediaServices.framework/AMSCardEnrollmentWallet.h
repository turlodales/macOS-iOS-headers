//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSCardEnrollmentWallet : NSObject
{
}

+ (id)silentEnrollmentVerificationURLWithBagContract:(id)arg1;
+ (id)silentEnrollmentPaymentSessionURLWithBagContract:(id)arg1;
+ (id)silentEnrollmentEligibilityURLWithBagContract:(id)arg1;
+ (BOOL)shouldUseSilentEnrollmentWithBagContract:(id)arg1;
+ (id)countryCodeWithBagContract:(id)arg1;
+ (id)headersForAccount:(id)arg1;
+ (id)gsTokenForAccount:(id)arg1 error:(id *)arg2;

@end

