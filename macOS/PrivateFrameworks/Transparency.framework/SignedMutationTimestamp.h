//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class NSData, NSString, Signature, TransparencyManagedDataStore, TransparencySignatureVerifier;

@interface SignedMutationTimestamp : GPBMessage <TransparencyVerifiable>
{
}

+ (id)descriptor;
- (unsigned long long)verifyWithError:(id *)arg1;
- (id)copyManagedObjectWithError:(id *)arg1;
- (id)parsedMutationWithError:(id *)arg1;
@property(retain) NSString *application;
@property(retain) TransparencySignatureVerifier *verifier;
@property(retain) TransparencyManagedDataStore *dataStore;

// Remaining properties
@property(nonatomic) BOOL hasSignature; // @dynamic hasSignature;
@property(copy, nonatomic) NSData *mutation; // @dynamic mutation;
@property(retain, nonatomic) Signature *signature; // @dynamic signature;

@end

