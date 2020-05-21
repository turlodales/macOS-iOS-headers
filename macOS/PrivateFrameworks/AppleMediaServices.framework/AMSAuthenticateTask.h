//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSAuthenticateOptions, NSNumber, NSString, NSUUID;

@interface AMSAuthenticateTask : AMSTask
{
    AMSAuthenticateOptions *_options;
    NSString *_password;
    NSString *_multiUserToken;
    NSString *_rawPassword;
    NSString *_altDSID;
    NSNumber *_DSID;
    NSUUID *_homeIdentifier;
    NSString *_username;
    ACAccount *_authenticatedAccount;
}

- (void).cxx_destruct;
@property(retain) ACAccount *authenticatedAccount; // @synthesize authenticatedAccount=_authenticatedAccount;
@property(retain) NSString *username; // @synthesize username=_username;
@property(retain) NSUUID *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
@property(retain) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(retain) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property(retain) NSString *multiUserToken; // @synthesize multiUserToken=_multiUserToken;
@property(retain) NSString *password; // @synthesize password=_password;
@property(readonly) AMSAuthenticateOptions *options; // @synthesize options=_options;
- (void)setHomeUserID:(id)arg1;
- (void)setHomeID:(id)arg1;
- (id)homeUserID;
- (id)homeID;
- (void)_updateAccountWithProvidedInformation:(id)arg1;
- (id)_performAuthenticationUsingAccount:(id)arg1 credentialSource:(unsigned long long)arg2 error:(id *)arg3;
- (id)_createVerifyCredentialOptionsWithCredentialSource:(unsigned long long)arg1;
- (id)_accountStoreForAuthentication;
- (id)_updateAccountWithAuthKit:(id)arg1 error:(id *)arg2;
- (id)_attemptPasswordReuseAuthenticationForAccount:(id)arg1;
- (id)_attemptMultiUserTokenAuthenticationForAccount:(id)arg1;
- (id)_accountForAuthentication;
- (id)performAuthentication;
- (id)initWithRequest:(id)arg1;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)init;

@end

