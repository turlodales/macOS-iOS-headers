//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFIdentityAttributes, _SFCertificate, _SFKeyPair, _SFPublicKey;

@interface _SFIdentity : NSObject
{
    id _identityInternal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) SFIdentityAttributes *attributes;
@property(retain, nonatomic) _SFCertificate *certificate;
@property(retain, nonatomic) _SFKeyPair *keyPair;
@property(readonly, nonatomic) _SFPublicKey *publicKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPair:(id)arg1 certificate:(id)arg2;
- (id)initWithPublicKey:(id)arg1 certificate:(id)arg2;
- (id)initWithKeyPair:(id)arg1;
- (id)initWithPublicKey:(id)arg1;

@end

