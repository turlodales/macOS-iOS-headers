//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AKCredential.h"

@class AKUserInformation, NSArray, NSData, NSString;

@interface AKAuthorizationCredential : NSObject <AKCredential>
{
    BOOL _isLikelyRealUser;
    NSString *_userIdentifier;
    NSArray *_authorizedScopes;
    NSData *_identityToken;
    NSData *_authorizationCode;
    NSString *_state;
    AKUserInformation *_userInformation;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL isLikelyRealUser; // @synthesize isLikelyRealUser=_isLikelyRealUser;
@property(readonly, nonatomic) AKUserInformation *userInformation; // @synthesize userInformation=_userInformation;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSData *authorizationCode; // @synthesize authorizationCode=_authorizationCode;
@property(readonly, copy, nonatomic) NSData *identityToken; // @synthesize identityToken=_identityToken;
@property(readonly, copy, nonatomic) NSArray *authorizedScopes; // @synthesize authorizedScopes=_authorizedScopes;
@property(readonly, copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponse:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

