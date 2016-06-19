//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ICADevices/Device.h>

@class NSString;

@interface MassStorageDevice : Device
{
    NSString *_diskBSDName;
}

@property(readonly) NSString *diskBSDName; // @synthesize diskBSDName=_diskBSDName;
- (void)unregisterDevice;
- (void)registerDevice;
- (void)updateDeviceDictionary:(id)arg1;
- (short)openDevice;
- (void)dealloc;
- (id)initWithDiskBSDName:(id)arg1;

@end

