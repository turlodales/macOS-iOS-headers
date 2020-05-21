//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class InclusionProof, NSData, NSDictionary, NSMutableArray, VRFWitness;

@interface QueryResponse : GPBMessage
{
}

+ (id)descriptor;
- (void)setMetadataValue:(id)arg1 key:(id)arg2;
- (void)setMetadata:(id)arg1;
@property(readonly) NSDictionary *metadata;

// Remaining properties
@property(copy, nonatomic) NSData *accountId; // @dynamic accountId;
@property(retain, nonatomic) NSMutableArray *deviceWitnessesArray; // @dynamic deviceWitnessesArray;
@property(readonly, nonatomic) unsigned long long deviceWitnessesArray_Count; // @dynamic deviceWitnessesArray_Count;
@property(nonatomic) BOOL hasInclusionProof; // @dynamic hasInclusionProof;
@property(nonatomic) BOOL hasUriWitness; // @dynamic hasUriWitness;
@property(retain, nonatomic) InclusionProof *inclusionProof; // @dynamic inclusionProof;
@property(retain, nonatomic) NSMutableArray *pendingSmtsArray; // @dynamic pendingSmtsArray;
@property(readonly, nonatomic) unsigned long long pendingSmtsArray_Count; // @dynamic pendingSmtsArray_Count;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) VRFWitness *uriWitness; // @dynamic uriWitness;

@end

