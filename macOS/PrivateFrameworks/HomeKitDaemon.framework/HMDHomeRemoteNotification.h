//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class NSString;

@interface HMDHomeRemoteNotification : HMFObject <HMFLogging>
{
    NSString *_updateIdentifier;
    id _value;
    NSString *_accessoryUUID;
    NSString *_serviceInstanceID;
    NSString *_characteristicInstanceID;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(readonly, nonatomic) NSString *serviceInstanceID; // @synthesize serviceInstanceID=_serviceInstanceID;
@property(readonly, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *updateIdentifier; // @synthesize updateIdentifier=_updateIdentifier;
@property(readonly, copy) NSString *description;
- (BOOL)matchesAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3;
- (BOOL)matchesCharacterisitic:(id)arg1;
- (id)logIdentifier;
- (id)initWithAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 updateIdentifier:(id)arg4 value:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

