//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AuthKit/AKCredentialRequest.h>

@class ACAccount, NSArray, NSDictionary, NSString;

@interface AKAuthorizationRequest : AKCredentialRequest
{
    BOOL _isSilentAppTransfer;
    NSString *_altDSID;
    ACAccount *_authkitAccount;
    NSArray *_requestedScopes;
    NSDictionary *_appProvidedData;
    NSString *_state;
    NSString *_nonce;
    NSString *_clientID;
    NSString *_teamID;
    long long _existingStatus;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long existingStatus; // @synthesize existingStatus=_existingStatus;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSDictionary *appProvidedData; // @synthesize appProvidedData=_appProvidedData;
@property(copy, nonatomic) NSArray *requestedScopes; // @synthesize requestedScopes=_requestedScopes;
@property(nonatomic) BOOL _isSilentAppTransfer; // @synthesize _isSilentAppTransfer;
@property(retain, nonatomic) ACAccount *authkitAccount; // @synthesize authkitAccount=_authkitAccount;
- (id)description;
- (id)altDSID;
@property(readonly, nonatomic) ACAccount *internalAuthKitAccount;
- (void)encodeWithCoder:(id)arg1;
- (id)_sanitizedCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAltDSID:(id)arg1;
- (id)init;

@end

