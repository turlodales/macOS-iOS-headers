//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSString;
@protocol OS_dispatch_semaphore;

@interface ICDeviceListRequest : NSObject
{
    BOOL _didGetICloudDeviceList;
    NSArray *_devices;
    ACAccount *_account;
    NSObject<OS_dispatch_semaphore> *_workSemaphore;
    NSString *_name;
    NSString *_model;
    NSString *_modelDisplayName;
    NSString *_softwareVersion;
}

+ (id)combineICloudDevices:(id)arg1 withCloudKitDevices:(id)arg2;
+ (id)setOfDeviceNamesFromDevices:(id)arg1;
+ (id)filteredDevices:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy, nonatomic) NSString *modelDisplayName; // @synthesize modelDisplayName=_modelDisplayName;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) NSObject<OS_dispatch_semaphore> *workSemaphore; // @synthesize workSemaphore=_workSemaphore;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property BOOL didGetICloudDeviceList; // @synthesize didGetICloudDeviceList=_didGetICloudDeviceList;
@property(retain) NSArray *devices; // @synthesize devices=_devices;
- (void)fetchWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchICloudDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchCloudKitDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)waitForFetchWithTimeout:(double)arg1;
- (BOOL)anyOSXDeviceNotUpgraded;
- (BOOL)anyDeviceNotUpgradable;
- (BOOL)anyDeviceNeedsUpgrade;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end

