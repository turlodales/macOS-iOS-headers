//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount;

@interface AAAutoAccountVerifier : NSObject
{
    ACAccount *_account;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)cancel;
- (void)verifyWithHandler:(CDUnknownBlockType)arg1;
- (void)sendVerificationEmail;
- (id)initWithAccount:(id)arg1;

@end

