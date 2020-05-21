//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOBluetoothDevice, NSArray, NSData, NSDictionary, NSString;

@protocol BluetoothXPCDaemonProtocol <NSObject>

@optional
- (void)performSDPInDaemon:(in bycopy NSString *)arg1 uuids:(in bycopy NSArray *)arg2;
- (void)getAttributeDict:(in bycopy NSString *)arg1 withAttributeDict:(void (^)(NSDictionary *))arg2;
- (void)secureBluetooth:(BOOL)arg1 withAuthorization:(const CDStruct_7a08cd8d *)arg2;
- (void)setInquiryParameters:(in bycopy NSDictionary *)arg1 forRemoteObject:(in id)arg2 withSetParams:(void (^)(BOOL))arg3;
- (void)hasRemoteObjectJoinedInquiry:(in id)arg1 withHasRemoteObjectJoinedInquiry:(void (^)(BOOL))arg2;
- (void)unjoinInquiry;
- (void)joinInquiry:(in bycopy NSData *)arg1 withParameters:(in NSDictionary *)arg2;
- (void)getConfiguredTypes:(in bycopy NSString *)arg1 types:(inout unsigned int *)arg2;
- (void)removeConfiguredDevice:(in bycopy NSString *)arg1;
- (void)unregisterHIDDevice:(IOBluetoothDevice *)arg1;
- (void)configureHIDDevice:(IOBluetoothDevice *)arg1;
- (void)isConfiguredHIDDevice:(IOBluetoothDevice *)arg1 withIsConfigured:(void (^)(BOOL))arg2;
- (void)removeIgnoredHIDDevice:(IOBluetoothDevice *)arg1;
- (void)ignoreHIDDevice:(IOBluetoothDevice *)arg1;
- (void)allowRoleSwitchForDevice:(in bycopy NSString *)arg1;
- (void)disallowRoleSwitchForDevice:(in bycopy NSString *)arg1;
- (void)removeLinkKeyForDevice:(in bycopy NSString *)arg1;
- (void)removeServiceWithRecordHandle:(unsigned int)arg1;
- (void)addServiceDict:(in bycopy NSDictionary *)arg1 withServiceDict:(void (^)(NSDictionary *))arg2;
- (void)getLocalServices:(void (^)(NSDictionary *))arg1;
- (void)removePINCodeHandlerForAddress:(in bycopy NSString *)arg1;
- (void)handlePINRequestForAddress:(in bycopy NSString *)arg1;
- (void)clearDaemonCacheValues:(unsigned int)arg1;
- (void)removeDaemonCachedValue:(unsigned int)arg1 forKey:(in NSString *)arg2;
- (void)getBluetoothPortDictionary:(void (^)(NSDictionary *))arg1;
- (void)modifySerialPort:(NSDictionary *)arg1;
- (void)removeSerialPort:(NSDictionary *)arg1;
- (void)addSerialPort:(NSDictionary *)arg1 vendingService:(NSDictionary *)arg2;
- (void)addSerialPort:(NSDictionary *)arg1;
- (void)isPaired:(void (^)(BOOL))arg1;
- (void)performSDPQuery:(in byref id)arg1 uuids:(in bycopy NSArray *)arg2;
- (void)unregisterClientDevice:(IOBluetoothDevice *)arg1;
- (void)registerClientDevice:(IOBluetoothDevice *)arg1;
- (void)startListening;
- (void)registerWithDaemon:(NSString *)arg1 forProcess:(NSString *)arg2;
@end

