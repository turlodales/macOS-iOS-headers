//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface PKSigningIdentity : NSObject
{
    struct __SecIdentity *_identity;
    NSMutableArray *_supportingCerts;
    NSString *_keychainSpec;
}

+ (id)_identitiesMatchingPrefix:(id)arg1 policy:(struct __SecPolicy *)arg2 fromKeychain:(id)arg3;
+ (id)_validIdentitiesMatchingPrefix:(id)arg1 fromKeychain:(id)arg2 forCodeSigning:(BOOL)arg3 didExcludeWrongIdentities:(char *)arg4;
+ (struct __SecKeychain *)_copyKeychainWithPath:(id)arg1;
+ (id)commonNameForCertificate:(struct __SecCertificate *)arg1;
+ (id)allSigningIdentitiesWithPrefix:(id)arg1 fromKeychain:(id)arg2 forCodeSigning:(BOOL)arg3;
+ (id)allSigningIdentitiesWithPrefix:(id)arg1 fromKeychain:(id)arg2;
+ (id)bestSigningIdentityFromString:(id)arg1 fromKeychain:(id)arg2 forCodeSigning:(BOOL)arg3 error:(id *)arg4;
+ (id)bestSigningIdentityFromString:(id)arg1 fromKeychain:(id)arg2 error:(id *)arg3;
+ (id)bestSigningIdentityFromString:(id)arg1 fromKeychain:(id)arg2;
- (unsigned long long)_levelOfMatch:(id)arg1;
- (id)_sha1AsString;
- (id)_initWithIdentityRef:(struct __SecIdentity *)arg1 keychainSpec:(id)arg2;
@property(readonly) NSString *keychainPath;
- (BOOL)addIntermediateCertificateWithCommonName:(id)arg1;
@property(readonly) NSArray *supportingCertificateRefs;
- (BOOL)shouldUseTSAByDefault;
@property(readonly) NSString *name;
- (struct __SecIdentity *)identityRef;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

