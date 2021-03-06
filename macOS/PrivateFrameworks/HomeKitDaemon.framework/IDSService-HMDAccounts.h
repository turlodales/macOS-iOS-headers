//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/IDSService.h>

@class HMDAccountHandle, HMDDeviceHandle, NSArray;

@interface IDSService (HMDAccounts)
@property(readonly, copy) HMDDeviceHandle *hmd_localDeviceHandle;
@property(readonly, copy) HMDAccountHandle *hmd_preferredHandle;
@property(readonly, copy) NSArray *hmd_handles;
@property(readonly, nonatomic, getter=hmd_isActive) BOOL hmd_active;
@end

