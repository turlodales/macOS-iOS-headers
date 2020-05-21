//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"
#import "NSXPCListenerDelegate.h"
#import "_KSTextReplacementCancellation.h"
#import "_KSTextReplacementStoreProtocol.h"
#import "_KSTextReplacementSyncProtocol.h"

@class APSConnection, NSObject<OS_dispatch_queue>, NSString, NSXPCListener, _KSTRClient, _KSTextReplacementManager;

@interface _KSTextReplacementServer : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, _KSTextReplacementSyncProtocol, _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _KSTRClient *_daemonClient;
    _KSTextReplacementManager *_textReplacementManager;
    APSConnection *_pushConnection;
    NSXPCListener *_listener;
    NSString *_directoryPath;
}

+ (BOOL)isBlackListed:(unsigned int)arg1;
+ (id)textReplacementServer;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
- (void)buddySetupDidFinish;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)registerForPushNotifications;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)runMigration;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (id)textReplacementEntriesForClient:(id)arg1;
- (id)textReplacementEntries;
- (BOOL)_cancelPendingUpdateForClient:(id)arg1;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelPendingUpdates;
- (void)removeAllEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)shutdown;
- (void)start;
- (void)_performCleanup;
- (void)cleanup;
@property(retain, nonatomic) _KSTextReplacementManager *textReplacementManager; // @synthesize textReplacementManager=_textReplacementManager;
- (void)scheduleSyncTask;
- (void)reachabilityDidChange:(id)arg1;
- (BOOL)isSetupAssistantRunning;
- (void)dealloc;
- (id)initWithDatabaseDirectoryPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

