//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface AVAudioDevice : NSObject
{
    NSString *_deviceName;
    NSNumber *_deviceID;
    NSString *_UID;
    BOOL _inputAvailable;
    BOOL _outputAvailable;
    BOOL _preferredDevice;
    BOOL _isBluetoothDevice;
    BOOL _isLineIn;
}

@property(readonly, nonatomic, getter=isPreferredDevice) BOOL preferredDevice; // @synthesize preferredDevice=_preferredDevice;
@property(readonly, nonatomic) BOOL outputAvailable; // @synthesize outputAvailable=_outputAvailable;
@property(readonly, nonatomic) BOOL inputAvailable; // @synthesize inputAvailable=_inputAvailable;
@property(readonly, nonatomic) NSString *UID; // @synthesize UID=_UID;
@property(readonly, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isStreamAvailableForScope:(unsigned int)arg1;
- (unsigned int)getDataSourceControlID;
- (unsigned int *)allocDeviceControlListAndSize:(unsigned int *)arg1;
- (BOOL)isBuiltInDevice;
- (BOOL)isSomethingConnectedToJack;
- (BOOL)isValidInputDevice;
- (BOOL)isValidDevice;
- (void)createNameForScope:(unsigned int)arg1;
- (void)createUID;
- (void)createName;
- (BOOL)isDeviceInEar:(id)arg1;
@property(readonly, nonatomic) BOOL isBluetoothDevice;
- (id)description;
- (void)dealloc;
- (id)initWithDeviceID:(id)arg1;

@end

