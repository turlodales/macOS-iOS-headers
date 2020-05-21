//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SFCertificateAuthority : NSObject
{
    id _reserved_SFCertificateAuthority;
}

+ (id)certificateAuthorityWithName:(id)arg1;
+ (id)certificateAuthorityWithFullPath:(id)arg1;
+ (int)_createUserKeyPair:(struct __SecKey **)arg1 privKey:(struct __SecKey **)arg2 keychain:(struct __SecKeychain *)arg3 algorithm:(unsigned int)arg4 size:(int)arg5 userName:(id)arg6 accessRef:(struct __SecAccess *)arg7 inputParms:(id)arg8;
+ (void)_setPrintNameWithName:(id)arg1 item:(struct __SecKeychainItem *)arg2;
+ (id)_invitationFromContentsOfFile:(id)arg1;
- (void)setWebURL:(id)arg1;
- (id)signedCertificateFromCSR:(id)arg1 inputParms:(id)arg2 error:(id *)arg3;
-     // Error parsing type: @48@0:8^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}16^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}24@32^@40, name: createSelfSignedCertificateWithPublicKey:privateKey:inputParms:error:
- (id)_publicKeyHash;
- (void)_setCSR:(id)arg1;
- (void)setDestinationKeychain:(struct __SecKeychain *)arg1;
- (void)_setSerialNumberToIssuerMappedToCAConfigFile;
-     // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}32@0:8@16^v24, name: _copyPrivateKeyFromPublicKeyHash:inKeychainOrArray:
- (int)_selectIssuerBasedOnPublicKeyHash;
- (void)_chooseIssuer;
- (void)_setIssuerHashOfPublicKey:(id)arg1;
- (void)_setChosenIssuer:(struct __SecIdentity *)arg1;
- (struct __SecCertificate *)_copyCertificateFromPublicKeyHash;
-     // Error parsing type: c72@0:8^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}16^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}24^{__SecKeychain=}32@40^{__SecIdentity=}48@56^@64, name: createWithPublicKey:privateKey:keychain:authenticator:signer:inputParms:error:
-     // Error parsing type: c80@0:8^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}16^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}24^{__SecKeychain=}32@40^{__SecIdentity=}48@56@64^@72, name: _createWithPublicKey:privateKey:keychain:authenticator:signer:ca:inputParms:error:
- (void)_setAuthenticator:(id)arg1;
- (id)_authenticator;
- (int)_createCA;
- (id)_crlDistributionPoints;
- (struct __SecCertificate *)_resultingCertificate;
- (int)_createCertExportFileForCAWithFormat:(unsigned int)arg1 pathToExportFile:(id *)arg2 exportedData:(id *)arg3;
-     // Error parsing type: i40@0:8^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}16^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}24^{__SecKeychain=}32, name: _createCert:privKey:keychain:
- (id)_lastUsedSerialNumber;
- (void)setBasicConstraintsExtension:(id)arg1;
- (void)setSubjectAltNameExtension:(id)arg1;
- (void)setKeyUsageExtension:(id)arg1;
- (void)setExtendedKeyUsageExtension:(id)arg1;
- (void)setIdentityNameInfo:(id)arg1;
- (void)setKeyPairAttributes:(id)arg1;
- (void)setAdditionalCertificateInformation:(id)arg1;
- (void)setCertificateInformation:(id)arg1;
- (void)_setCRLDistributionPoints:(id)arg1;
- (void)_setResultingCertificate:(struct __SecCertificate *)arg1;
- (void)_setResultingCertificateData:(struct cssm_data)arg1;
- (void)_setupCertExtensions:(struct __CE_DataAndType *)arg1 numExtens:(unsigned int *)arg2;
- (void)_setupCRLDistPoints:(id)arg1 inCEGeneralNames:(struct __CE_GeneralNames *)arg2;
- (void)_presetToCreateCA;
- (long long)_tpHand;
- (void)dealloc;
- (id)init;
- (id)initWithFullPath:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)_initWithNameBackCompat:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (id)emailAddress;
- (void)setFullPath:(id)arg1;
- (id)fullPath;
- (id)name;
- (struct __SecCertificate *)certificate;
- (void)_setCACertificate:(struct __SecCertificate *)arg1;
- (id)invitation;
- (void)_setInvitation:(id)arg1;

@end

