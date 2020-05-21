//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BLEMIDIAccessor : NSObject
{
}

+ (void)logEvent:(char *)arg1 length:(unsigned short)arg2 timeStamp:(unsigned long long)arg3 intoBuffer:(char *)arg4;
+ (void)splitOffset:(unsigned short)arg1 intoHeaderByte:(char *)arg2 timeStampByte:(char *)arg3;
+ (unsigned long long)timeStampWithEpoch:(unsigned long long)arg1 offset:(unsigned short)arg2;
+ (unsigned short)reconstructWithHighByte:(unsigned char)arg1 lowByte:(unsigned char)arg2 overflow:(BOOL)arg3;
+ (unsigned short)timeStampOffset:(unsigned long long)arg1;
+ (BOOL)uuidIsForgettable:(id)arg1;
+ (BOOL)deviceIsOnline:(unsigned int)arg1;
+ (BOOL)deviceIsNullDevice:(unsigned int)arg1;
+ (BOOL)deviceIsLocalPeripheral:(unsigned int)arg1;
+ (BOOL)deviceIsRemotePeripheral:(unsigned int)arg1;
+ (id)nameForMIDIDevice:(unsigned int)arg1;
+ (id)uuidForMIDIDevice:(unsigned int)arg1;
+ (id)localPeripheralName;
+ (unsigned int)localPeripheral;
+ (unsigned int)nullDevice;
+ (unsigned int)midiDeviceForUUID:(id)arg1 isLocalPeripheral:(BOOL)arg2 isRemotePeripheral:(BOOL)arg3;
+ (unsigned int)midiDeviceForUUID:(id)arg1;

@end

