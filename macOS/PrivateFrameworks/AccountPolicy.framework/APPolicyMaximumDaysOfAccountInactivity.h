//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountPolicy/APPolicyMaximum.h>

#import <AccountPolicy/NSCopying-Protocol.h>
#import <AccountPolicy/NSSecureCoding-Protocol.h>

@interface APPolicyMaximumDaysOfAccountInactivity : APPolicyMaximum <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithIdentifier:(id)arg1 andMaximum:(id)arg2;
+ (id)policyWithMaximum:(id)arg1;
- (id)_parametersForMaximum:(id)arg1;
- (id)_contentForMaximum:(id)arg1;
- (id)initWithIdentifier:(id)arg1 andMaximum:(id)arg2;
- (id)initWithMaximum:(id)arg1;

@end

