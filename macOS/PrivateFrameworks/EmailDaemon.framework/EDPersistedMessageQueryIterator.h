//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFCancelable.h"

@class EDMessagePersistence, EFCancelationToken, EFQuery, EFQueue, EMMailboxScope, NSMutableSet, NSString;

@interface EDPersistedMessageQueryIterator : NSObject <EFCancelable>
{
    EDMessagePersistence *_messagePersistence;
    EMMailboxScope *_mailboxScope;
    EFQuery *_query;
    EFCancelationToken *_cancelationToken;
    EFQueue *_persistedMessageQueue;
    long long _remaining;
    NSMutableSet *_seenHashes;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)shouldCancel;
- (void)addPersistedMessages:(id)arg1;
- (void)addPersistedMessage:(id)arg1;
- (void)flush;
- (void)_processPersistedMessages:(id)arg1;
- (id)initWithMessagePersistence:(id)arg1 query:(id)arg2 batchSize:(long long)arg3 firstBatchSize:(long long)arg4 limit:(long long)arg5 handler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

