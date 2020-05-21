//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IOBluetoothUI/IOBluetoothConcreteDeviceController.h>

#import "NSTextFieldDelegate.h"

@class IOBluetoothDevice, IOBluetoothDevicePair, NSString, NSTextField;

@interface IOBluetoothConcretePairingController : IOBluetoothConcreteDeviceController <NSTextFieldDelegate>
{
    id pinCodeDeviceNameField;
    id pinCodeRequestPanel;
    id pinCodeRespondButton;
    NSTextField *pinCodeResponseField;
    id otherAppsPanel;
    id otherAppsPanelBR;
    id useForAB;
    id useForDUN;
    id useForABPreBR;
    id useForDUNPreBR;
    id useForBladeRunner;
    unsigned char mPINCodeSheetState;
    unsigned char mNextState;
    IOBluetoothDevice *mPairedDevice;
    IOBluetoothDevicePair *mDevicePair;
}

- (void)devicePairingFinished:(id)arg1 error:(int)arg2;
- (void)devicePairingPINCodeRequest:(id)arg1;
- (void)devicePairingConnecting:(id)arg1;
- (void)devicePairingStarted:(id)arg1;
- (void)handleOtherAppsCancelButton:(id)arg1;
- (void)handleOtherAppsButton:(id)arg1;
- (void)handleOtherAppsButtonBR:(id)arg1;
- (void)handleCancelButton:(id)arg1;
- (void)handleSelectButton:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)handlePairingCancelButton:(id)arg1;
- (void)handlePairingResponseButton:(id)arg1;
- (void)addPairedDeviceToModemPort;
- (void)addPairedDeviceToAddressBook;
- (void)checkFirstTimeConfig;
- (void)pairingFailed:(BOOL)arg1;
- (void)startDevicePairing:(id)arg1;
- (void)sdpQueryComplete:(id)arg1 status:(int)arg2;
- (void)validationComplete:(id)arg1;
- (void)setPairedDevice:(id)arg1;
- (id)getWindowFrameName;
- (long long)runModal:(BOOL)arg1;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

