//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ExchangeOAuthTokenRequest : NSObject
{
}

+ (id)_urlRequestForTokenRequestURI:(id)arg1 query:(id)arg2;
+ (id)oauthTokenRefreshRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 resource:(id)arg3 refreshToken:(id)arg4;
+ (id)oauthTokenRefreshRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 scope:(id)arg3 refreshToken:(id)arg4;
+ (id)urlRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 resource:(id)arg3 redirectURI:(id)arg4 authCode:(id)arg5;
+ (id)urlRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 scope:(id)arg3 redirectURI:(id)arg4 authCode:(id)arg5 codeVerifier:(id)arg6;

@end

