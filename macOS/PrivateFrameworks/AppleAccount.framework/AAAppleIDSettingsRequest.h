//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore;

@interface AAAppleIDSettingsRequest : AARequest
{
    ACAccountStore *_store;
    BOOL _forceGSToken;
    ACAccount *_grandSlamAccount;
}

+ (Class)responseClass;
- (void).cxx_destruct;
@property(nonatomic) BOOL forceGSToken; // @synthesize forceGSToken=_forceGSToken;
@property(readonly, nonatomic) ACAccount *grandSlamAccount; // @synthesize grandSlamAccount=_grandSlamAccount;
- (id)urlRequest;
- (id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2;

@end

