//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CDContextInternal.h"
#import "_CDUserContext.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, _CDInMemoryContext;

@interface _CDInMemoryUserContext : NSObject <_CDUserContext, _CDContextInternal>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_contexts;
    NSMutableArray *_pendingAllDeviceRegistrations;
    _CDInMemoryContext *_userContext;
    NSString *_localDeviceID;
}

+ (id)userContext;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
@property(retain, nonatomic) _CDInMemoryContext *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) NSMutableArray *pendingAllDeviceRegistrations; // @synthesize pendingAllDeviceRegistrations=_pendingAllDeviceRegistrations;
@property(retain, nonatomic) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
- (id)description;
- (BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (BOOL)evaluatePredicate:(id)arg1;
- (id)unsafe_multiDeviceRegistrationsByDeviceID;
- (id)unsafe_multiDeviceRegistrations;
- (BOOL)unsafe_hasMultiDeviceRegistrations;
- (BOOL)hasMultiDeviceRegistrations;
- (void)deregisterCallback:(id)arg1;
- (void)registerCallback:(id)arg1;
- (id)namedDeviceIDsFromPredicate:(id)arg1;
- (void)deactivateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2;
- (void)activateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2;
- (id)unsafe_remoteUserContextProxySourceDeviceUUIDs;
- (id)unsafe_remoteDevicesByDeviceIDForRemoteUserContextProxySourceDeviceUUID:(id)arg1;
- (id)unsafe_remoteDeviceIDsForRemoteUserContextProxySourceDeviceUUID:(id)arg1;
- (id)unsafe_remoteDevicesForRemoteUserContextProxySourceDeviceUUID:(id)arg1;
- (id)unsafe_remoteDeviceIDs;
- (id)unsafe_remoteDevices;
- (id)deviceWithDeviceID:(id)arg1 fromDevices:(id)arg2;
- (id)remoteDeviceIDs;
- (id)allDeviceIDs;
- (id)allDevices;
- (BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3;
- (BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2;
- (BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2;
- (BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;
- (id)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(char *)arg4;
- (void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2;
- (id)propertiesForContextualKeyPath:(id)arg1;
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;
- (id)objectForContextualKeyPath:(id)arg1;
- (BOOL)hasKnowledgeOfContextualKeyPath:(id)arg1;
- (id)unsafe_contextForDeviceWithDeviceID:(id)arg1;
- (id)contextForDeviceWithDeviceID:(id)arg1;
- (id)contextForKeyPath:(id)arg1;
- (id)valuesForKeyPaths:(id)arg1;
- (id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2;
- (id)localContext;
- (id)init;

@end

