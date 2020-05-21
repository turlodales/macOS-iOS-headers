//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASAuthorizationCredential.h"

@class NSArray, NSData, NSHTTPURLResponse, NSString;

@interface ASAuthorizationSingleSignOnCredential : NSObject <ASAuthorizationCredential>
{
    NSString *_state;
    NSData *_accessToken;
    NSData *_identityToken;
    NSArray *_authorizedScopes;
    NSHTTPURLResponse *_authenticatedResponse;
}

+ (BOOL)supportsSecureCoding;
+ (id)new;
+ (id)emptyCredential;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSHTTPURLResponse *authenticatedResponse; // @synthesize authenticatedResponse=_authenticatedResponse;
@property(readonly, copy, nonatomic) NSArray *authorizedScopes; // @synthesize authorizedScopes=_authorizedScopes;
@property(readonly, copy, nonatomic) NSData *identityToken; // @synthesize identityToken=_identityToken;
@property(readonly, copy, nonatomic) NSData *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAuthenticatedResponse:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

