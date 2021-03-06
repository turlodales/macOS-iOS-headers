//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFAccount.h>

@class WFOAuth2Credential;

@interface WFOAuth2Account : WFAccount
{
    WFOAuth2Credential *_credential;
}

+ (id)accountWithCredential:(id)arg1;
+ (id)responseType;
+ (id)scopes;
+ (id)redirectURI;
+ (id)clientSecret;
+ (id)clientID;
+ (id)sessionManager;
+ (id)migrate:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) WFOAuth2Credential *credential; // @synthesize credential=_credential;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isValid;

@end

