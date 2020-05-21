//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOBluetoothDevice, NSData, NSDate, NSDictionary, NSString;

@protocol BluetoothXPCClientProtocol <NSObject>
- (void)registeredWithDaemonAndContinuingSession:(BOOL)arg1;

@optional
- (void)sdpQueryComplete:(in bycopy IOBluetoothDevice *)arg1 status:(int)arg2;
- (void)updateServicesArchive:(in bycopy NSData *)arg1 lastUpdate:(in bycopy NSDate *)arg2;
- (void)updateInquiryInfo:(in struct IOBluetoothHCIUnifiedInquiryResult *)arg1 lastUpdate:(in bycopy NSDate *)arg2;
- (void)updateName:(in bycopy NSString *)arg1 lastUpdate:(in bycopy NSDate *)arg2;
- (void)simplePairingComplete:(const in struct BluetoothDeviceAddress *)arg1 status:(unsigned char)arg2;
- (void)userPasskeyNotification:(const in struct BluetoothDeviceAddress *)arg1 passkey:(unsigned int)arg2;
- (void)userConfirmationRequest:(const in struct BluetoothDeviceAddress *)arg1 numericValue:(unsigned int)arg2;
- (void)pinCodeRequest:(const in struct BluetoothDeviceAddress *)arg1;
- (void)linkKeyRequest:(BOOL)arg1;
- (void)inquiryComplete:(unsigned char)arg1;
- (void)deviceNameUpdated:(in NSString *)arg1 devicesRemaining:(int)arg2;
- (void)deviceInquiryNameRequestUpdateStarted:(in NSString *)arg1 devicesRemaining:(int)arg2;
- (void)deviceInquiryUpdatingDeviceNamesStarted:(int)arg1;
- (void)deviceFound:(in NSString *)arg1 classOfDevice:(unsigned int)arg2 rssi:(BOOL)arg3 eirDictionary:(NSDictionary *)arg4;
- (void)deviceInquiryStarted;
@end

