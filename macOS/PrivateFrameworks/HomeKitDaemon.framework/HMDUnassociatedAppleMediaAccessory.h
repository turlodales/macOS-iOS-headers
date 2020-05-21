//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDUnassociatedMediaAccessory.h>

#import "HMFLogging.h"

@class HMDDevice, HMFSoftwareVersion, NSString;

@interface HMDUnassociatedAppleMediaAccessory : HMDUnassociatedMediaAccessory <HMFLogging>
{
    BOOL _currentAccessory;
    NSString *_model;
    NSString *_serialNumber;
    HMFSoftwareVersion *_softwareVersion;
    HMDDevice *_device;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)namespace;
+ (Class)modelClass;
- (void).cxx_destruct;
@property(nonatomic, getter=isCurrentAccessory) BOOL currentAccessory; // @synthesize currentAccessory=_currentAccessory;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (id)dumpDescription;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
@property(retain) HMDDevice *device; // @synthesize device=_device;
@property(copy) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy) NSString *model; // @synthesize model=_model;
- (id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

