//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCConnectionDelegate.h"
#import "NSXPCListenerDelegate.h"

@class NSString, NSXPCListener, NSXPCListenerEndpoint, VCCoreDuetListener, VCVoiceShortcutManager, WFTriggerManager;

@interface VCXPCServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate>
{
    BOOL _skipEntitlementsCheck;
    struct os_unfair_lock_s _migrationLock;
    VCCoreDuetListener *_coreDuetListener;
    VCVoiceShortcutManager *_voiceShortcutManager;
    WFTriggerManager *_triggerManager;
    NSXPCListener *_xpcListener;
    id <VCDatabaseProvider> _databaseProvider;
    id <VCSyncDataEndpoint> _syncDataEndpoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <VCSyncDataEndpoint> syncDataEndpoint; // @synthesize syncDataEndpoint=_syncDataEndpoint;
@property(readonly, nonatomic) id <VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(readonly, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(readonly, nonatomic) struct os_unfair_lock_s migrationLock; // @synthesize migrationLock=_migrationLock;
@property(readonly, nonatomic) BOOL skipEntitlementsCheck; // @synthesize skipEntitlementsCheck=_skipEntitlementsCheck;
@property(readonly, nonatomic) WFTriggerManager *triggerManager; // @synthesize triggerManager=_triggerManager;
@property(readonly, nonatomic) VCCoreDuetListener *coreDuetListener; // @synthesize coreDuetListener=_coreDuetListener;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly, nonatomic) VCVoiceShortcutManager *voiceShortcutManager; // @synthesize voiceShortcutManager=_voiceShortcutManager;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
- (id)initWithXPCListener:(id)arg1 databaseProvider:(id)arg2 coreDuetListener:(id)arg3 syncDataEndpoint:(id)arg4;
- (id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)arg1;
- (id)initWithDatabaseProvider:(id)arg1 coreDuetListener:(id)arg2 syncDataEndpoint:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

