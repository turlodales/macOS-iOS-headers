//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSKeychain : NSObject
{
}

+ (id)_legacyAttestationForOptions:(id)arg1 error:(id *)arg2;
+ (BOOL)_generateLegacyKeypairForOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)_copyLegacyPublicKeyForOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)_copyLegacyPrivateKeyForOptions:(id)arg1 error:(id *)arg2;
+ (id)_certificatePrivateKeyLabelForOptions:(id)arg1;
+ (id)_primaryConstraintsWithOptions:(id)arg1;
+ (id)_primaryConstraintsForWatch;
+ (id)_primaryConstraintsForMac;
+ (id)_primaryConstraints;
+ (id)_extendedConstraintsWithOptions:(id)arg1;
+ (struct __SecAccessControl *)createAccessControlRefWithOptions:(id)arg1 error:(id *)arg2;
+ (id)keychainLabelForOptions:(id)arg1;
+ (id)certificateKeychainLabelsForOptions:(id)arg1;
+ (id)legacyAttestationForOptions:(id)arg1 error:(id *)arg2;
+ (BOOL)deleteKeyPairWithOptions:(id)arg1 error:(id *)arg2;
+ (BOOL)storePrimaryCert:(struct __SecCertificate *)arg1 extendedCert:(struct __SecCertificate *)arg2 privateKey:(struct __SecKey *)arg3 options:(id)arg4 error:(id *)arg5;
+ (BOOL)deleteCertificateChainWithOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)copyPublicKeyForOptions:(id)arg1 error:(id *)arg2;
+ (struct __SecKey *)copyPrivateKeyWithContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)certificateChainForOptions:(id)arg1 error:(id *)arg2;

@end

