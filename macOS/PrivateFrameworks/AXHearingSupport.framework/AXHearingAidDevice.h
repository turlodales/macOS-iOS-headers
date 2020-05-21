//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXHADeviceProtocol.h"
#import "CBPeripheralDelegate.h"

@class AXDispatchTimer, AXHearingAidMode, CBPeripheral, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface AXHearingAidDevice : NSObject <CBPeripheralDelegate, AXHADeviceProtocol>
{
    double _leftVolume;
    double _rightVolume;
    double _leftMicrophoneVolume;
    double _rightMicrophoneVolume;
    double _leftStreamVolume;
    double _rightStreamVolume;
    BOOL _leftTreble;
    BOOL _rightTreble;
    BOOL _leftBass;
    BOOL _rightBass;
    BOOL _keepInSync;
    BOOL _finishedLoading;
    long long initialLoadToken;
    AXDispatchTimer *_propertyWriteTimer;
    BOOL _isListeningForStreamingChanges;
    struct OpaqueIOPSPowerSourceID *_leftPowerSouceID;
    struct OpaqueIOPSPowerSourceID *_rightPowerSourceID;
    NSMutableDictionary *_leftPowerSouceDictionary;
    NSMutableDictionary *_rightPowerSourceDictionary;
    BOOL isPaired;
    BOOL isConnecting;
    BOOL isPersistent;
    BOOL _supportsBinauralStreaming;
    BOOL _supportsCombinedPresets;
    BOOL _supportsCombinedVolumes;
    short _leftMicrophoneVolumeSteps;
    short _rightMicrophoneVolumeSteps;
    short _leftStreamVolumeSteps;
    short _rightStreamVolumeSteps;
    short _leftSensitivitySteps;
    short _rightSensitivitySteps;
    short _leftMixedVolumeSteps;
    short _rightMixedVolumeSteps;
    int _availableEars;
    unsigned int leftProgramVersion;
    unsigned int rightProgramVersion;
    unsigned int _leftPresetBitmask;
    unsigned int _rightPresetBitmask;
    NSString *leftUUID;
    NSString *rightUUID;
    NSString *name;
    NSMutableArray *manufacturer;
    NSMutableArray *model;
    NSString *leftFirmwareVersion;
    NSString *rightFirmwareVersion;
    NSString *leftHardwareVersion;
    NSString *rightHardwareVersion;
    double rightBatteryLevel;
    double leftBatteryLevel;
    NSArray *rightPrograms;
    NSArray *leftPrograms;
    AXHearingAidMode *currentRightProgram;
    AXHearingAidMode *currentLeftProgram;
    AXHearingAidMode *currentLeftStreamingProgram;
    AXHearingAidMode *currentRightStreamingProgram;
    CBPeripheral *leftPeripheral;
    CBPeripheral *rightPeripheral;
    AXHearingAidMode *_leftSelectedProgram;
    AXHearingAidMode *_rightSelectedProgram;
    AXHearingAidMode *_leftSelectedStreamingProgram;
    AXHearingAidMode *_rightSelectedStreamingProgram;
    double _leftSensitivity;
    double _rightSensitivity;
    double _leftMixedVolume;
    double _rightMixedVolume;
    unsigned long long leftLoadedProperties;
    unsigned long long rightLoadedProperties;
    NSMutableDictionary *leftPropertiesLoadCount;
    NSMutableDictionary *rightPropertiesLoadCount;
    NSString *leftPeripheralUUID;
    NSString *rightPeripheralUUID;
    unsigned long long leftWriteRequestProperties;
    unsigned long long rightWriteRequestProperties;
    unsigned long long _leftWriteResponseProperties;
    unsigned long long _rightWriteResponseProperties;
    NSDate *_leftBatteryLowDate;
    NSDate *_rightBatteryLowDate;
}

+ (id)characteristicsUUIDs;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *rightBatteryLowDate; // @synthesize rightBatteryLowDate=_rightBatteryLowDate;
@property(retain, nonatomic) NSDate *leftBatteryLowDate; // @synthesize leftBatteryLowDate=_leftBatteryLowDate;
@property(nonatomic) unsigned long long rightWriteResponseProperties; // @synthesize rightWriteResponseProperties=_rightWriteResponseProperties;
@property(nonatomic) unsigned long long leftWriteResponseProperties; // @synthesize leftWriteResponseProperties=_leftWriteResponseProperties;
@property(nonatomic) BOOL supportsCombinedVolumes; // @synthesize supportsCombinedVolumes=_supportsCombinedVolumes;
@property(nonatomic) BOOL supportsCombinedPresets; // @synthesize supportsCombinedPresets=_supportsCombinedPresets;
@property(nonatomic) BOOL supportsBinauralStreaming; // @synthesize supportsBinauralStreaming=_supportsBinauralStreaming;
@property(nonatomic) short rightMixedVolumeSteps; // @synthesize rightMixedVolumeSteps=_rightMixedVolumeSteps;
@property(nonatomic) short leftMixedVolumeSteps; // @synthesize leftMixedVolumeSteps=_leftMixedVolumeSteps;
@property(nonatomic) short rightSensitivitySteps; // @synthesize rightSensitivitySteps=_rightSensitivitySteps;
@property(nonatomic) short leftSensitivitySteps; // @synthesize leftSensitivitySteps=_leftSensitivitySteps;
@property(nonatomic) short rightStreamVolumeSteps; // @synthesize rightStreamVolumeSteps=_rightStreamVolumeSteps;
@property(nonatomic) short leftStreamVolumeSteps; // @synthesize leftStreamVolumeSteps=_leftStreamVolumeSteps;
@property(nonatomic) short rightMicrophoneVolumeSteps; // @synthesize rightMicrophoneVolumeSteps=_rightMicrophoneVolumeSteps;
@property(nonatomic) short leftMicrophoneVolumeSteps; // @synthesize leftMicrophoneVolumeSteps=_leftMicrophoneVolumeSteps;
@property(nonatomic) unsigned int rightPresetBitmask; // @synthesize rightPresetBitmask=_rightPresetBitmask;
@property(nonatomic) unsigned int leftPresetBitmask; // @synthesize leftPresetBitmask=_leftPresetBitmask;
@property(nonatomic) unsigned int rightProgramVersion; // @synthesize rightProgramVersion;
@property(nonatomic) unsigned int leftProgramVersion; // @synthesize leftProgramVersion;
@property(nonatomic) unsigned long long rightWriteRequestProperties; // @synthesize rightWriteRequestProperties;
@property(nonatomic) unsigned long long leftWriteRequestProperties; // @synthesize leftWriteRequestProperties;
@property(retain, nonatomic) NSString *rightPeripheralUUID; // @synthesize rightPeripheralUUID;
@property(retain, nonatomic) NSString *leftPeripheralUUID; // @synthesize leftPeripheralUUID;
@property(retain, nonatomic) NSMutableDictionary *rightPropertiesLoadCount; // @synthesize rightPropertiesLoadCount;
@property(retain, nonatomic) NSMutableDictionary *leftPropertiesLoadCount; // @synthesize leftPropertiesLoadCount;
@property(nonatomic) unsigned long long rightLoadedProperties; // @synthesize rightLoadedProperties;
@property(nonatomic) unsigned long long leftLoadedProperties; // @synthesize leftLoadedProperties;
@property(nonatomic) BOOL keepInSync; // @synthesize keepInSync=_keepInSync;
@property(nonatomic) double rightMixedVolume; // @synthesize rightMixedVolume=_rightMixedVolume;
@property(nonatomic) double leftMixedVolume; // @synthesize leftMixedVolume=_leftMixedVolume;
@property(nonatomic) BOOL rightBass; // @synthesize rightBass=_rightBass;
@property(nonatomic) BOOL leftBass; // @synthesize leftBass=_leftBass;
@property(nonatomic) BOOL rightTreble; // @synthesize rightTreble=_rightTreble;
@property(nonatomic) BOOL leftTreble; // @synthesize leftTreble=_leftTreble;
@property(nonatomic) double rightSensitivity; // @synthesize rightSensitivity=_rightSensitivity;
@property(nonatomic) double leftSensitivity; // @synthesize leftSensitivity=_leftSensitivity;
@property(nonatomic) double leftStreamVolume; // @synthesize leftStreamVolume=_leftStreamVolume;
@property(nonatomic) double rightStreamVolume; // @synthesize rightStreamVolume=_rightStreamVolume;
@property(nonatomic) double leftMicrophoneVolume; // @synthesize leftMicrophoneVolume=_leftMicrophoneVolume;
@property(nonatomic) double rightMicrophoneVolume; // @synthesize rightMicrophoneVolume=_rightMicrophoneVolume;
@property(retain, nonatomic) AXHearingAidMode *rightSelectedStreamingProgram; // @synthesize rightSelectedStreamingProgram=_rightSelectedStreamingProgram;
@property(retain, nonatomic) AXHearingAidMode *leftSelectedStreamingProgram; // @synthesize leftSelectedStreamingProgram=_leftSelectedStreamingProgram;
@property(retain, nonatomic) AXHearingAidMode *rightSelectedProgram; // @synthesize rightSelectedProgram=_rightSelectedProgram;
@property(retain, nonatomic) AXHearingAidMode *leftSelectedProgram; // @synthesize leftSelectedProgram=_leftSelectedProgram;
@property(nonatomic) int availableEars; // @synthesize availableEars=_availableEars;
@property(nonatomic) BOOL isPersistent; // @synthesize isPersistent;
@property(nonatomic) BOOL isConnecting; // @synthesize isConnecting;
@property(nonatomic) BOOL isPaired; // @synthesize isPaired;
@property(retain, nonatomic) CBPeripheral *rightPeripheral; // @synthesize rightPeripheral;
@property(retain, nonatomic) CBPeripheral *leftPeripheral; // @synthesize leftPeripheral;
@property(retain, nonatomic) AXHearingAidMode *currentRightStreamingProgram; // @synthesize currentRightStreamingProgram;
@property(retain, nonatomic) AXHearingAidMode *currentLeftStreamingProgram; // @synthesize currentLeftStreamingProgram;
@property(retain, nonatomic) AXHearingAidMode *currentLeftProgram; // @synthesize currentLeftProgram;
@property(retain, nonatomic) AXHearingAidMode *currentRightProgram; // @synthesize currentRightProgram;
@property(copy, nonatomic) NSArray *leftPrograms; // @synthesize leftPrograms;
@property(copy, nonatomic) NSArray *rightPrograms; // @synthesize rightPrograms;
@property(nonatomic) double leftBatteryLevel; // @synthesize leftBatteryLevel;
@property(nonatomic) double rightBatteryLevel; // @synthesize rightBatteryLevel;
@property(retain, nonatomic) NSString *rightHardwareVersion; // @synthesize rightHardwareVersion;
@property(retain, nonatomic) NSString *leftHardwareVersion; // @synthesize leftHardwareVersion;
@property(retain, nonatomic) NSString *rightFirmwareVersion; // @synthesize rightFirmwareVersion;
@property(retain, nonatomic) NSString *leftFirmwareVersion; // @synthesize leftFirmwareVersion;
@property(retain, nonatomic) NSMutableArray *model; // @synthesize model;
@property(retain, nonatomic) NSMutableArray *manufacturer; // @synthesize manufacturer;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *rightUUID; // @synthesize rightUUID;
@property(retain, nonatomic) NSString *leftUUID; // @synthesize leftUUID;
- (id)persistentRepresentation;
- (BOOL)addPeripheral:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isBluetoothPaired;
- (BOOL)isPartiallyBluetoothPaired;
- (void)peripheralDidUnpair:(id)arg1;
- (void)peripheral:(id)arg1 didFinishPairingWithResult:(id)arg2;
- (void)pairingDidCompleteForPeripheral:(id)arg1;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didInvalidateServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheralDidUpdateName:(id)arg1;
- (id)deviceDescription;
- (id)valueForProperty:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (void)setMixedVolume:(double)arg1 forLeft:(BOOL)arg2;
- (void)setBass:(BOOL)arg1 forLeft:(BOOL)arg2;
- (void)setTreble:(BOOL)arg1 forLeft:(BOOL)arg2;
- (unsigned char)volumeValueForProperty:(unsigned long long)arg1 andPeripheral:(id)arg2;
- (BOOL)signedValueForProperty:(unsigned long long)arg1 andPeripheral:(id)arg2;
- (id)selectedProgramIndexes;
- (id)selectedPrograms;
- (void)selectProgram:(id)arg1 forEar:(int)arg2;
- (void)readProperty:(unsigned long long)arg1 fromPeripheral:(id)arg2;
- (void)readValueForCharacteristic:(id)arg1 fromPeripheral:(id)arg2;
- (void)_writeAllProgramSelectionsToPeripheral;
- (void)writeSignedInt:(BOOL)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;
- (void)writeInt:(unsigned char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;
- (void)delayWriteProperty:(unsigned long long)arg1 forPeripheral:(id)arg2;
- (void)_sendDelayedWrites;
- (void)writeValueForProperty:(unsigned long long)arg1;
- (void)updateBatteryServiceForPeripheral:(id)arg1;
- (void)updateNameWithAdvertisingData:(id)arg1;
- (void)updateName;
- (BOOL)deviceSupportsProperty:(unsigned long long)arg1;
- (void)loadFailedProperties;
- (void)loadRequiredProperties;
- (void)loadBasicProperties;
- (void)loadProperties:(unsigned long long)arg1 forPeripheral:(id)arg2 withRetryPeriod:(double)arg3;
- (void)setNotify:(BOOL)arg1 forPeripheral:(id)arg2;
- (id)peripheral:(id)arg1 characteristicForUUID:(id)arg2;
- (unsigned long long)availablePropertiesForPeripheral:(id)arg1;
- (id)peripheral:(id)arg1 characteristicForProperty:(unsigned long long)arg2;
- (unsigned long long)peripheral:(id)arg1 propertyForCharacteristic:(id)arg2;
- (id)programs;
- (int)connectedEars;
- (BOOL)hasConnection;
- (BOOL)isConnected;
- (BOOL)rightAvailable;
- (BOOL)leftAvailable;
- (void)mateWithDevice:(id)arg1;
- (BOOL)didLoadRequiredProperties;
- (BOOL)didLoadBasicProperties;
- (BOOL)didLoadPersistentProperties;
- (BOOL)peripheral:(id)arg1 didLoadProperty:(unsigned long long)arg2;
@property(readonly, retain, nonatomic) NSString *deviceUUID;
- (BOOL)containsPeripheralWithUUID:(id)arg1;
- (void)connectionDidChange;
- (void)disconnectAndUnpair:(BOOL)arg1;
- (void)connect;
- (void)dealloc;
- (id)initWithLeftDevice:(id)arg1 andRightDevice:(id)arg2;
- (id)initWithPersistentRepresentation:(id)arg1;
- (id)initWithPeripheral:(id)arg1;
- (void)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

