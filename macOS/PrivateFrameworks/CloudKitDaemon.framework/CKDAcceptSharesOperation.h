//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDAcceptSharesOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _acceptCompletionBlock;
    NSMutableDictionary *_clientProvidedMetadatasByURL;
    NSMutableArray *_shareURLsToAccept;
    NSMutableArray *_acceptedShareURLsToFetch;
    NSMutableDictionary *_shareMetadatasToAcceptByURL;
    unsigned long long _numShareAcceptAttempts;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long numShareAcceptAttempts; // @synthesize numShareAcceptAttempts=_numShareAcceptAttempts;
@property(retain, nonatomic) NSMutableDictionary *shareMetadatasToAcceptByURL; // @synthesize shareMetadatasToAcceptByURL=_shareMetadatasToAcceptByURL;
@property(retain, nonatomic) NSMutableArray *acceptedShareURLsToFetch; // @synthesize acceptedShareURLsToFetch=_acceptedShareURLsToFetch;
@property(retain, nonatomic) NSMutableArray *shareURLsToAccept; // @synthesize shareURLsToAccept=_shareURLsToAccept;
@property(retain, nonatomic) NSMutableDictionary *clientProvidedMetadatasByURL; // @synthesize clientProvidedMetadatasByURL=_clientProvidedMetadatasByURL;
@property(copy, nonatomic) CDUnknownBlockType acceptCompletionBlock; // @synthesize acceptCompletionBlock=_acceptCompletionBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_fetchMetadataForShares;
- (void)_prepareShareMetadata;
- (BOOL)_callingParticipantOONForShareMetadata:(id)arg1;
- (id)_keySwapForOONParticipant:(id)arg1;
- (BOOL)_validateInvitedPCSCanBeDecryptedForShare:(id)arg1;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id *)arg3;
- (void)_fetchAcceptedShares;
- (void)_decryptShareMetadata;
- (unsigned long long)sharingServiceTypeForShareMetadata:(id)arg1;
- (BOOL)_acceptShares;
- (void)_handleShareURLAccepted:(id)arg1 forShare:(id)arg2 responseCode:(id)arg3;
- (void)_performCallbackForURL:(id)arg1 withShare:(id)arg2 error:(id)arg3;
- (id)nameForState:(unsigned long long)arg1;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

