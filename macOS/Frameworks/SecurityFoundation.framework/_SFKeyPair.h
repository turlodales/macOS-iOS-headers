//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SecurityFoundation/_SFKey.h>

@class NSString, _SFPublicKey;

@interface _SFKeyPair : _SFKey
{
    id _keyPairInternal;
}

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (Class)_attributesClass;
- (void).cxx_destruct;
- (id)keyData;
-     // Error parsing type: ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}16@0:8, name: _secKey
@property(readonly, copy, nonatomic) NSString *privateKeyDomain;
@property(readonly, nonatomic) _SFPublicKey *publicKey;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(id)arg2;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;
-     // Error parsing type: @24@0:8^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}16, name: initWithSecKey:
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id *)arg3;
- (id)initWithAttributes:(id)arg1;

// Remaining properties
// Error parsing type for property secKey:
// Property attributes: T^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v},R,N,G_secKey


@end

