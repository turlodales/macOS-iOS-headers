//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTaskHandler.h"

#import "IMAPConnectionResponseDelegate.h"

@class IMAPConnection, IMAPMailboxSyncState, IMAPTask, IMAPTaskManager, NSString;

@interface IMAPNetworkTaskHandler : MCTaskHandler <IMAPConnectionResponseDelegate>
{
    id _connectionLock;
    IMAPConnection *_connection;
    id _selectedMailboxLock;
    NSString *_currentMailboxName;
    BOOL _isSelected;
    IMAPTask *_lastTaskSource;
    IMAPTaskManager *_taskManager;
    IMAPMailboxSyncState *_syncState;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) IMAPMailboxSyncState *syncState; // @synthesize syncState=_syncState;
@property(readonly, nonatomic) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(nonatomic) __weak IMAPTask *lastTaskSource; // @synthesize lastTaskSource=_lastTaskSource;
- (void)connection:(id)arg1 receivedUnhandledUntaggedResponse:(id)arg2 forMailbox:(id)arg3 forCommand:(id)arg4;
- (void)connection:(id)arg1 receivedFetchResponse:(id)arg2 forMailbox:(id)arg3;
- (void)connection:(id)arg1 receivedExists:(unsigned long long)arg2 forMailbox:(id)arg3;
- (BOOL)connection:(id)arg1 shouldProcessUnsolicitedResponse:(id)arg2;
@property(nonatomic) BOOL trackSyncState;
- (id)serializationQueue;
- (void)selectedMailboxChangedToMailbox:(id)arg1 fromMailbox:(id)arg2;
- (BOOL)isSelectedOnMailbox:(id)arg1;
@property(readonly, copy) NSString *currentMailboxName;
- (void)_finishIdling;
@property(readonly) BOOL canStartIdle;
@property(readonly) BOOL isIdle;
- (void)_closeConnectionAndCompact:(BOOL)arg1 allowNetworking:(BOOL)arg2;
- (id)serverInterfaceForMailbox:(id)arg1 error:(id *)arg2;
- (id)newCleanUpOperation;
- (long long)qualityOfService;
- (void)setOperation:(id)arg1;
- (id)operation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)priority;
@property(retain) IMAPConnection *connection;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1 taskManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

