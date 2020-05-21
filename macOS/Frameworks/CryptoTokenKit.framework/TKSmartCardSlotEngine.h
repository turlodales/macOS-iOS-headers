//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "TKProtocolSmartCardSlot.h"

@class NSHashTable, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_log>, NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint, TKPowerMonitor, TKSmartCardATR, TKSmartCardSessionEngine;

@interface TKSmartCardSlotEngine : NSObject <TKProtocolSmartCardSlot, NSXPCListenerDelegate>
{
    unsigned long long _lastId;
    long long _state;
    long long _powerState;
    long long _previousState;
    TKSmartCardATR *_atr;
    unsigned long long _protocol;
    NSObject<OS_dispatch_source> *_idlePowerDownSource;
    NSXPCConnection *_registrationConnection;
    NSXPCListener *_listener;
    NSHashTable *_clients;
    NSMutableArray *_sessionRequests;
    NSMutableArray *_powerRequests;
    NSMapTable *_reservations;
    TKPowerMonitor *_powerMonitor;
    NSObject<OS_os_log> *_log;
    BOOL _securePINVerificationSupported;
    BOOL _securePINChangeSupported;
    BOOL _synchronousSetup;
    BOOL _apduSentSinceLastReset;
    long long _maxInputLength;
    long long _maxOutputLength;
    NSXPCListenerEndpoint *_serverEndpoint;
    id <TKSmartCardSlotDelegate> _delegate;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    TKSmartCardSessionEngine *_session;
}

- (void).cxx_destruct;
@property __weak TKSmartCardSessionEngine *session; // @synthesize session=_session;
@property BOOL apduSentSinceLastReset; // @synthesize apduSentSinceLastReset=_apduSentSinceLastReset;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSString *name; // @synthesize name=_name;
@property __weak id <TKSmartCardSlotDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL synchronousSetup; // @synthesize synchronousSetup=_synchronousSetup;
@property(retain) NSXPCListenerEndpoint *serverEndpoint; // @synthesize serverEndpoint=_serverEndpoint;
@property BOOL securePINChangeSupported; // @synthesize securePINChangeSupported=_securePINChangeSupported;
@property BOOL securePINVerificationSupported; // @synthesize securePINVerificationSupported=_securePINVerificationSupported;
@property long long maxOutputLength; // @synthesize maxOutputLength=_maxOutputLength;
@property long long maxInputLength; // @synthesize maxInputLength=_maxInputLength;
- (void)dealloc;
- (void)terminate;
- (void)runUserInteraction:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAttrib:(unsigned int)arg1 data:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getAttrib:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)reserveProtocols:(id)arg1 reservationId:(id)arg2 exclusive:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (id)_getReservationId;
- (id)_findReservation:(id)arg1 connection:(id)arg2;
- (void)sessionWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)leaveSession:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)connectCardSessionWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setupSlotWithReply:(CDUnknownBlockType)arg1;
- (void)cardPresent:(BOOL)arg1;
- (void)scheduleIdlePowerDown;
- (void)powerDownWithEject:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setProtocol:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetWithReply:(CDUnknownBlockType)arg1;
- (void)powerRequestFinished;
- (void)schedulePowerRequest:(CDUnknownBlockType)arg1;
- (void)changeStateTo:(long long)arg1 powerState:(long long)arg2;
- (id)dictionaryForState:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_setupWithName:(id)arg1 delegate:(id)arg2 firstPass:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (id)slotRegistryWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)setupWithName:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)logWithBytes:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

