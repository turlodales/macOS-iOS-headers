//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BacklightdXPCProtocol.h"

@class BrightnessSystemInternal, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BacklightdExportedObj : NSObject <BacklightdXPCProtocol>
{
    unsigned long long _clientID;
    BOOL _clientIDSet;
    BrightnessSystemInternal *_server;
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) BrightnessSystemInternal *server; // @synthesize server=_server;
- (void)dealloc;
- (void)registerNotificationForProperties:(id)arg1;
- (id)copyClientID;
- (void)reconnect;
- (void)clientCopyPropertyWithKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)clientSetPropertyWithKey:(id)arg1 property:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

