//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICPServiceClient.h"

@class NSHashTable, NSString, NSXPCConnection, PFDispatchQueue;

@interface ICPServiceClient : NSObject <ICPServiceClient>
{
    BOOL _connectionIsActive;
    NSXPCConnection *_connection;
    PFDispatchQueue *_observerQueue;
    NSHashTable *_observers;
}

+ (id)serviceClientWithListenerEndpoint:(id)arg1;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) PFDispatchQueue *observerQueue; // @synthesize observerQueue=_observerQueue;
@property BOOL connectionIsActive; // @synthesize connectionIsActive=_connectionIsActive;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)observerProtocol;
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeServiceClientObserver:(id)arg1;
- (void)addServiceClientObserver:(id)arg1;
- (void)invalidate;
- (void)resume;
- (void)configureConnection;
- (id)initWithListenerEndpoint:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

