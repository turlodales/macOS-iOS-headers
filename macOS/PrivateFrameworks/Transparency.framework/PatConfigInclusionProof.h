//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class KTPatConfigInclusionProofVerifier, LogEntry, TransparencyManagedDataStore;

@interface PatConfigInclusionProof : GPBMessage <TransparencyVerifiable>
{
}

+ (id)descriptor;
- (BOOL)verifyWithError:(id *)arg1;
@property(readonly) unsigned long long tltLogBeginningMs;
@property(readonly) unsigned long long patLogBeginningMs;
- (id)vrfPublicKeyWithError:(id *)arg1;
@property(retain) KTPatConfigInclusionProofVerifier *verifier;
@property(retain) TransparencyManagedDataStore *dataStore;

// Remaining properties
@property(nonatomic) BOOL hasPerApplicationTreeEntry; // @dynamic hasPerApplicationTreeEntry;
@property(nonatomic) BOOL hasTopLevelTreeEntry; // @dynamic hasTopLevelTreeEntry;
@property(retain, nonatomic) LogEntry *perApplicationTreeEntry; // @dynamic perApplicationTreeEntry;
@property(retain, nonatomic) LogEntry *topLevelTreeEntry; // @dynamic topLevelTreeEntry;

@end

