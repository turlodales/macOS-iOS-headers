//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDResidentDevice, HMDResidentDeviceManager;

@protocol HMDResidentDeviceManagerDelegate <NSObject>
- (void)residentDeviceManagerDidUpdateResidents:(HMDResidentDeviceManager *)arg1;
- (void)residentDeviceManager:(HMDResidentDeviceManager *)arg1 didUpdatePrimaryResident:(HMDResidentDevice *)arg2;
- (void)residentDeviceManager:(HMDResidentDeviceManager *)arg1 didUpdateResidentAvailable:(BOOL)arg2;
@end

