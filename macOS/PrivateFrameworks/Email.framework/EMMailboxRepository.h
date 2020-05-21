//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Email/EMRepository.h>

#import "EFLoggable.h"
#import "EMMailboxChangeObserver.h"
#import "EMMailboxTypeResolver.h"

@class EFPromise, EMAccountRepository, EMRemoteConnection, NSMapTable, NSMutableDictionary, NSOrderedSet, NSString;

@interface EMMailboxRepository : EMRepository <EFLoggable, EMMailboxChangeObserver, EMMailboxTypeResolver>
{
    struct os_unfair_lock_s _mailboxesPromiseLock;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_mailboxesByObjectID;
    EMRemoteConnection *_connection;
    id <EFCancelable> _registrationCancelable;
    EFPromise *_mailboxesPromise;
    NSMapTable *_observerMap;
    EMAccountRepository *_accountRepository;
}

+ (id)remoteInterface;
+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) EMAccountRepository *accountRepository; // @synthesize accountRepository=_accountRepository;
@property(retain, nonatomic) NSMapTable *observerMap; // @synthesize observerMap=_observerMap;
@property(retain, nonatomic) EFPromise *mailboxesPromise; // @synthesize mailboxesPromise=_mailboxesPromise;
@property(retain, nonatomic) id <EFCancelable> registrationCancelable; // @synthesize registrationCancelable=_registrationCancelable;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
@property(readonly) NSOrderedSet *mailboxesIfAvailable;
- (id)_mailboxesFuture;
- (void)mailboxListChanged:(id)arg1;
- (id)_filterIDsFromMailbox:(id)arg1 withQuery:(id)arg2;
- (long long)_remoteMailboxTypeForMailboxObjectID:(id)arg1;
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;
- (id)_remoteMailboxObjectIDsForMailboxType:(long long)arg1;
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;
- (id)performMailboxChangeAction:(id)arg1;
- (void)refreshMailboxList;
- (id)mailboxesForObjectIDs:(id)arg1;
- (id)mailboxForObjectID:(id)arg1;
- (void)_prepareMailboxes:(id)arg1;
- (id)performQuery:(id)arg1 withObserver:(id)arg2;
- (void)performQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_restartObservingMailboxChangesIfNecessary;
- (void)_startObservingMailboxChangesIfNecessary;
- (void)dealloc;
- (void)_commonInitWithAccountRepository:(id)arg1;
- (id)initForTestingWithAccountRepository:(id)arg1;
- (id)initForTesting;
- (id)initWithRemoteConnection:(id)arg1 accountRepository:(id)arg2;
- (id)initInternal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

