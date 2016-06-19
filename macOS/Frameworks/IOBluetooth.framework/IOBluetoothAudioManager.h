//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CWWiFiClient, IOBluetoothDevice, NSMutableArray;

@interface IOBluetoothAudioManager : NSObject
{
    IOBluetoothDevice *_audioDeviceConnecting;
    NSMutableArray *_audioDevicesToConnect;
    int _audioConnectAttempt;
    CWWiFiClient *_WiFiClient;
}

+ (void)callEnded:(id)arg1;
+ (void)callAccepted:(id)arg1;
+ (void)call:(id)arg1 isIncoming:(BOOL)arg2;
+ (void)removeAudioDevice:(id)arg1;
+ (void)addAudioDevice:(id)arg1;
+ (void)resetDefaults;
+ (void)setDefaultDouble:(double)arg1 forKey:(id)arg2;
+ (void)setDefaultInteger:(long long)arg1 forKey:(id)arg2;
+ (void)getDefaults:(CDUnknownBlockType)arg1;
+ (void)audioState:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)audioState:(CDUnknownBlockType)arg1;
+ (unsigned int)defaultDeviceIDForOutput:(BOOL)arg1;
+ (unsigned int)currentSystemInput;
+ (unsigned int)currentSystemOutput;
+ (void)disconnectAudioDevice:(id)arg1;
+ (void)configureAndSwitchAudioDevice:(id)arg1;
+ (void)configureAudioDevice:(id)arg1;
+ (BOOL)setAudioDevice:(unsigned int)arg1 isOutput:(BOOL)arg2;
+ (BOOL)isBluetoothDevice:(unsigned int)arg1;
+ (id)bluetoothDevice:(unsigned int)arg1;
+ (unsigned int)serviceForAddressString:(id)arg1;
+ (id)sharedAudioManager;
@property(retain) CWWiFiClient *WiFiClient; // @synthesize WiFiClient=_WiFiClient;
@property(retain) NSMutableArray *audioDevicesToConnect; // @synthesize audioDevicesToConnect=_audioDevicesToConnect;
@property(retain) IOBluetoothDevice *audioDeviceConnecting; // @synthesize audioDeviceConnecting=_audioDeviceConnecting;
- (void)cancelConnectToAudioDevice;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (void)connectToAudioDevice:(id)arg1;
- (void)connectToAudioDevice;

@end

