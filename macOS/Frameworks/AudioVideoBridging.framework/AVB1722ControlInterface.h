//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVBInterface, NSObject<OS_dispatch_queue>, NSString;

@interface AVB1722ControlInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_commandsQueue;
    NSObject<OS_dispatch_queue> *_transportQueue;
    unsigned int _connection;
    struct IONotificationPort *_notificationPort;
    unsigned long long _receiveAddress;
    unsigned long long _receiveSize;
    unsigned long long _transmitAddress;
    unsigned long long _transmitSize;
    unsigned int _transmitWriteHead;
    unsigned int _notification;
    BOOL _shouldRemove;
    NSString *_interfaceName;
    AVBInterface *_interface;
}

+ (id)createOnInterfaceNamed:(id)arg1;
+ (id)createOnInterface:(id)arg1;
+ (BOOL)removeFromInterfaceNamed:(id)arg1 error:(id *)arg2;
+ (BOOL)addToInterfaceNamed:(id)arg1 error:(id *)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;
+ (id)IOClassName;
@property(readonly) AVBInterface *interface; // @synthesize interface=_interface;
@property(readonly, copy) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (void)dealloc;
- (void)finalize;
@property(readonly, nonatomic) unsigned int connection; // @dynamic connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @dynamic callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *commandsQueue; // @dynamic commandsQueue;
- (void)serviceTerminated;
- (id)description;
- (void)receivedControlFrameWithReadHead:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)receivedControlFrameWithInfo:(CDStruct_c937aa2e *)arg1 andPayload:(char *)arg2 ofLength:(unsigned long long)arg3;
- (BOOL)sendControlFrameWithInfo:(CDStruct_c937aa2e *)arg1 andPayload:(char *)arg2 error:(id *)arg3;
- (BOOL)removeControlRoutingID:(unsigned long long)arg1;
- (BOOL)addControlRoutingID:(unsigned long long)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)initWithService:(unsigned int)arg1 onInterfaceNamed:(id)arg2;
- (id)initWithService:(unsigned int)arg1 onInterface:(id)arg2;
- (id)init;

@end

