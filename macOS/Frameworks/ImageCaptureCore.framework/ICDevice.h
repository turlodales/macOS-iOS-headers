//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface ICDevice : NSObject
{
    id _deviceProperties;
}

- (BOOL)sendMessageCmd:(id)arg1;
- (void)resetConnection;
- (void)setConnection:(id)arg1;
- (id)getConnection;
- (void)releasePowerAssertion;
- (void)takePowerAssertion:(id)arg1;
- (void)requestSendMessage:(unsigned int)arg1 outData:(id)arg2 maxReturnedDataSize:(unsigned int)arg3 sendMessageDelegate:(id)arg4 didSendMessageSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)requestCancelSoftwareInstallation;
- (void)requestInstallSoftware;
- (void)requestEjectOrDisconnect;
- (long long)disconnect;
- (long long)connect;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (BOOL)handleCommandCompletion:(id)arg1;
@property(readonly) struct CGImage *icon;
- (id)valueForUndefinedKey:(id)arg1;
@property(copy) NSString *autolaunchApplicationPath;
- (void)addCommonConnectionInfo:(id)arg1;
- (void)updateCapabilities:(id)arg1;
@property(readonly) NSArray *capabilities;
- (id)capabilitiesSet;
- (void)requestYield;
- (void)requestCloseSession;
- (void)requestOpenSession;
@property BOOL proxy;
@property(copy) CDUnknownBlockType closeSessionBlock;
@property BOOL closeSessionPending;
@property BOOL openSessionPending;
@property BOOL autoOpenSession;
@property(retain) NSNumber *sessionID;
- (void)setRemoteDeviceID:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setConnectionID:(id)arg1;
@property id <ICDeviceDelegate> delegate;
- (void)updateSoftwareInstallStatus:(id)arg1;
- (void)setReady:(BOOL)arg1;
- (id)endpoint;
@property(readonly) BOOL ready;
@property(readonly) NSMutableDictionary *userData;
@property(readonly) BOOL hasOpenSession;
@property(readonly) NSNumber *remoteDeviceID;
@property(readonly) NSNumber *deviceID;
@property(readonly) NSNumber *connectionID;
- (BOOL)isConnected;
- (BOOL)hasEndpoint;
- (id)clients;
- (void)setButtonPressed:(id)arg1;
@property(readonly) NSString *buttonPressed;
- (void)setPreferredTimeStamp:(double)arg1;
@property(readonly) double preferredTimeStamp;
- (void)setPreferred:(BOOL)arg1;
@property(readonly) BOOL preferred;
@property(readonly) NSDictionary *deviceProxyInfo;
- (void)setIsShared:(BOOL)arg1;
@property(retain) id userObject;
@property(readonly) NSString *softwareUpdateQueryString;
@property(readonly) int ipPort;
@property(readonly) NSString *ipAddress;
@property(readonly) NSDictionary *bonjourTXTRecord;
@property(readonly) NSString *locationDescription;
@property(readonly) NSString *bonjourServiceName;
@property(readonly) NSString *bonjourServiceType;
@property(readonly) BOOL hasConfigurableWiFiInterface;
@property(readonly) NSString *serialNumberString;
@property(readonly) NSString *persistentIDString;
@property(readonly) NSString *UUIDString;
@property(readonly) long long fwGUID;
@property(readonly) int usbInterfaceProtocol;
@property(readonly) int usbInterfaceSubClass;
@property(readonly) int usbIntefaceClass;
@property(readonly) int usbVendorID;
@property(readonly) int usbProductID;
@property(readonly) int usbLocationID;
@property(readonly) int moduleExecutableArchitecture;
@property(readonly, getter=isShared) BOOL shared;
@property(readonly, getter=isRemote) BOOL remote;
@property(readonly) NSString *transportType;
@property(readonly) unsigned long long type;
@property(readonly) NSString *moduleVersion;
@property(readonly) NSString *modulePath;
@property(readonly) BOOL canCancelSoftwareInstallation;
@property(readonly) double softwareInstallPercentDone;
@property(readonly) NSString *iconPath;
@property(readonly) NSString *productKind;
@property NSString *name;
@property(readonly) NSNumber *deviceRef;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)connectConnection;
- (BOOL)updateIcon:(id)arg1;
- (BOOL)updateName:(id)arg1;
- (BOOL)updateProperties:(id)arg1;
- (void)initializeDeviceProperties:(id)arg1;
- (id)validIconPath:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

