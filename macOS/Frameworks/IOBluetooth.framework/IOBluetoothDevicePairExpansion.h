//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BluetoothHIDDeviceController, IOBluetoothHostController, IOBluetoothL2CAPChannel, NSXPCConnection;

@interface IOBluetoothDevicePairExpansion : NSObject
{
    unsigned short pageTimeout;
    IOBluetoothHostController *hostController;
    BOOL supportsAuthentication;
    BOOL isNonSSPKeypressNotificationCapable;
    IOBluetoothL2CAPChannel *channel;
    BOOL Q6BDAddrRange;
    BOOL isWiiRemote;
    BOOL isNeuroSwitch;
    BOOL _isWiiUProController;
    BluetoothHIDDeviceController *bluetoothHIDDeviceController;
    BOOL isPolyVision;
    NSXPCConnection *xpcConnection;
}

@property BOOL isPolyVision; // @synthesize isPolyVision;
@property BOOL isWiiUProController; // @synthesize isWiiUProController=_isWiiUProController;
@property(retain) BluetoothHIDDeviceController *bluetoothHIDDeviceController; // @synthesize bluetoothHIDDeviceController;
@property BOOL isNeuroSwitch; // @synthesize isNeuroSwitch;
@property BOOL isWiiRemote; // @synthesize isWiiRemote;
@property BOOL Q6BDAddrRange; // @synthesize Q6BDAddrRange;
@property(retain) IOBluetoothL2CAPChannel *channel; // @synthesize channel;
@property BOOL isNonSSPKeypressNotificationCapable; // @synthesize isNonSSPKeypressNotificationCapable;
@property BOOL supportsAuthentication; // @synthesize supportsAuthentication;
@property(retain) IOBluetoothHostController *hostController; // @synthesize hostController;
@property unsigned short pageTimeout; // @synthesize pageTimeout;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection;

@end

