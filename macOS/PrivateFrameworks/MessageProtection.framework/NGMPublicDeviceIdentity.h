//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NGMPublicPreKey, SigningPublicKey;

@interface NGMPublicDeviceIdentity : NSObject
{
    SigningPublicKey *_signingKey;
    NGMPublicPreKey *_prekey;
}

+ (id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NGMPublicPreKey *prekey; // @synthesize prekey=_prekey;
@property(retain, nonatomic) SigningPublicKey *signingKey; // @synthesize signingKey=_signingKey;
- (id)description;
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id *)arg3;
- (BOOL)isValidSigningDestination;
- (BOOL)verifySignature:(id)arg1 formatter:(id)arg2;
- (id)prekeyData;
- (id)identityData;
- (id)initWithPrekey:(id)arg1 signingKey:(id)arg2;

@end

