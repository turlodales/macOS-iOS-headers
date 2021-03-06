//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CalXPCConnectionProvider;

@interface CalAgentLink : NSObject
{
    CalXPCConnectionProvider *_connectionProvider;
}

+ (void)_removeAgentLink:(id)arg1;
+ (id)_registerLightweightClientWithMachServiceName:(id)arg1;
+ (id)contactsGeneralProxyWithErrorBlock:(CDUnknownBlockType)arg1;
+ (id)contactsGeneralProxy;
+ (id)addressBookProxyWithErrorBlock:(CDUnknownBlockType)arg1;
+ (id)addressBookProxy;
+ (id)storeWithErrorBlock:(CDUnknownBlockType)arg1;
+ (id)store;
+ (id)synchronousRemoteObjectForMachServiceName:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;
+ (id)remoteObjectForMachServiceName:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;
+ (id)remoteObjectForMachServiceName:(id)arg1;
+ (id)clientSideCache;
+ (void)broadcastNotificationToOtherClients:(id)arg1 userInfo:(id)arg2 withAgent:(id)arg3;
+ (id)synchronousAgentWithErrorBlock:(CDUnknownBlockType)arg1;
+ (id)synchronousAgent;
+ (id)agentWithErrorBlock:(CDUnknownBlockType)arg1;
+ (id)agent;
+ (id)startWithMachServiceName:(id)arg1 exportedObject:(id)arg2;
+ (id)sharedInstanceWithMachServiceName:(id)arg1;
+ (id)sharedInstances;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) CalXPCConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
- (id)_synchronousRemoteObjectWithErrorBlock:(CDUnknownBlockType)arg1;
- (id)_remoteObjectWithErrorBlock:(CDUnknownBlockType)arg1;
- (id)_remoteObject;
- (void)setExportedObject:(id)arg1;
- (BOOL)hasRequiredFields;
- (id)initWithMachServiceName:(id)arg1 exportedObject:(id)arg2;
- (id)init;

@end

