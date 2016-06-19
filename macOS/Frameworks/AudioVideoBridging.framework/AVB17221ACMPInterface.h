//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB1722ControlInterface.h>

@class AVBMACAddress, NSMutableArray, NSMutableDictionary;

@interface AVB17221ACMPInterface : AVB1722ControlInterface
{
    NSMutableDictionary *_commandHandlers;
    unsigned short _nextSequenceID;
    BOOL _monitorMode;
    id <AVB17221ACMPClient> _monitorModeDelegate;
    NSMutableArray *_pendingResponses;
    AVBMACAddress *_destinationAddress;
}

+ (BOOL)removeFromInterfaceNamed:(id)arg1 error:(id *)arg2;
+ (BOOL)addToInterfaceNamed:(id)arg1 error:(id *)arg2;
+ (id)IOClassName;
+ (id)ACMPInterfaceWithInterfaceNamed:(id)arg1;
+ (id)ACMPInterfaceWithInterface:(id)arg1;
@property(readonly, copy) AVBMACAddress *multicastDestinationAddress; // @synthesize multicastDestinationAddress=_destinationAddress;
- (void)dealloc;
- (void)serviceTerminated;
- (id)description;
- (void)receivedControlFrameWithInfo:(CDStruct_c937aa2e *)arg1 andPayload:(char *)arg2 ofLength:(unsigned long long)arg3;
- (BOOL)sendACMPCommandMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)sendACMPSyncCommandMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)sendACMPResponseMessage:(id)arg1 error:(id *)arg2;
- (BOOL)sendACMPMessage:(id)arg1 error:(id *)arg2;
- (void)_disableMonitorMode;
- (void)_enableMonitorModeWithDelegate:(id)arg1;
- (void)removeHandlerForEntityID:(unsigned long long)arg1;
- (void)removeHandlerForGUID:(unsigned long long)arg1;
- (BOOL)setHandler:(id)arg1 forEntityID:(unsigned long long)arg2;
- (BOOL)setHandler:(id)arg1 forGUID:(unsigned long long)arg2;
- (id)initWithInterfaceName:(id)arg1;

@end

