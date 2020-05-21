//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFDeliveryAccount.h>

@class MFEWSAccount;

@interface MFEWSDeliveryAccount : MFDeliveryAccount
{
    MFEWSAccount *_ewsAccount;
    BOOL _stripsFromHeaderWhenSending;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
@property BOOL stripsFromHeaderWhenSending; // @synthesize stripsFromHeaderWhenSending=_stripsFromHeaderWhenSending;
- (id)remoteMailAccountsEmployedBy;
- (void)setShouldUseAuthentication:(BOOL)arg1;
- (BOOL)shouldUseAuthentication;
@property __weak MFEWSAccount *associatedAccount;
- (BOOL)isDynamic;
- (id)newDelivererWithMessage:(id)arg1;
- (id)deliveryIdentifier;
- (void)setValidationRequired:(BOOL)arg1;
- (BOOL)validationRequired;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (void)validateConnections;
- (id)accountTypeString;
- (BOOL)canGoOffline;
- (void)setIsWillingToGoOnline:(BOOL)arg1;
- (BOOL)isWillingToGoOnline;
- (void)setIsOffline:(BOOL)arg1;
- (BOOL)isOffline;
- (long long)defaultSecurePortNumber;
- (long long)defaultPortNumber;
- (id)standardSSLPorts;
- (id)standardPorts;
- (BOOL)requiresAuthentication;
- (id)saslProfileName;
- (id)identifier;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)preferredAuthScheme;
- (void)setAuthenticationScheme:(id)arg1;
- (id)authenticationScheme;
- (void)_setSecurityLayerType:(long long)arg1 releasingConnections:(BOOL)arg2;
- (long long)securityLayerType;
- (void)setHostname:(id)arg1;
- (id)hostname;
- (void)_setUsesSSL:(BOOL)arg1 releasingConnections:(BOOL)arg2;
- (BOOL)usesSSL;
- (void)_setPortNumber:(long long)arg1 releasingConnections:(BOOL)arg2;
- (void)setPortNumber:(long long)arg1;
- (long long)portNumber;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (void)setTLSIdentity:(struct __SecIdentity *)arg1;
- (struct __SecIdentity *)copyTLSIdentity;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setUsername:(id)arg1;
- (id)username;
- (BOOL)discoverConnectionPropertiesAndWait;
- (void)discoverConnectionProperties;
- (void)setCanonicalEmailAddress:(id)arg1;
- (id)canonicalEmailAddress;
- (void)releaseAllConnections;
- (id)offlineDisplayName;
- (void)setDisplayName;
- (id)displayName;
- (void)setStoredDisplayName;
- (id)storedDisplayName;
- (void)dealloc;
- (id)initWithAccountInfo:(id)arg1;
- (id)initWithSystemAccount:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

