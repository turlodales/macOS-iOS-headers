//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOBluetoothDevice;

@interface IOBluetoothDevicePair : NSObject
{
    id _delegate;
    IOBluetoothDevice *_device;
    BOOL _busy;
    BOOL _isHandlerSetup;
    BOOL _triedSpecNULLPIN;
    BOOL _SDPQueryComplete;
    int _connectionCompleteStatus;
    unsigned int _totalAttempts;
    id _expansion;
}

+ (id)pairWithDevice:(id)arg1;
@property(retain) IOBluetoothDevice *device; // @synthesize device=_device;
@property id delegate; // @synthesize delegate=_delegate;
- (void)simplePairingComplete:(struct BluetoothDeviceAddress *)arg1 status:(unsigned char)arg2;
- (void)userPasskeyNotification:(struct BluetoothDeviceAddress *)arg1 passkey:(unsigned int)arg2;
- (void)userConfirmationRequest:(struct BluetoothDeviceAddress *)arg1 numericValue:(unsigned int)arg2;
- (void)pinCodeRequest:(struct BluetoothDeviceAddress *)arg1;
- (void)linkKeyRequest:(BOOL)arg1;
- (void)BluetoothHCIAuthenticationComplete:(id)arg1 inStatus:(int)arg2 inAuthenticationResults:(struct BluetoothHCIEventAuthenticationCompleteResults *)arg3;
- (void)BluetoothHCIEventNotificationMessage:(id)arg1 inNotificationMessage:(const struct IOBluetoothHCIEventNotificationMessage *)arg2;
- (void)newBluetoothHIDDevice:(id)arg1;
- (void)setAppleDeviceName:(id)arg1;
- (void)connectionCompleteContinue:(id)arg1;
- (void)connectionCompleteContinue:(id)arg1 status:(int)arg2;
- (void)l2capChannelClosed:(id)arg1;
- (void)l2capChannelData:(id)arg1 data:(void *)arg2 length:(unsigned long long)arg3;
- (void)sdpQueryComplete:(id)arg1 status:(int)arg2;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (int)openPairingConnection;
- (int)removePINCodeHandler:(id)arg1;
- (int)handlePinCodeRequestForDevice:(id)arg1 withAddress:(id)arg2;
- (void)replyUserConfirmation:(BOOL)arg1;
- (void)replyPINCode:(unsigned long long)arg1 PINCode:(struct BluetoothPINCode *)arg2;
- (void)stop;
- (int)start;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
@property unsigned short connectionPageTimeout;

@end

