//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ACAccount, AMSAuthenticateOptions, NSDictionary, NSString;

@interface AMSAuthenticateRequest : NSObject <NSSecureCoding>
{
    ACAccount *_account;
    NSString *_logKey;
    AMSAuthenticateOptions *_options;
    NSDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) AMSAuthenticateOptions *options; // @synthesize options=_options;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDSID:(id)arg1 altDSID:(id)arg2 username:(id)arg3 options:(id)arg4;
- (id)initWithAccount:(id)arg1 options:(id)arg2;

@end

