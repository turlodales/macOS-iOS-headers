//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import "HMDAWDLogEvent.h"

@class HMDHAPAccessory, NSString;

@interface HMDTargetControllerCommandEvent : HMDLogEvent <HMDAWDLogEvent>
{
    unsigned long long _commandType;
    HMDHAPAccessory *_accessory;
}

+ (id)commandEventWithCommandType:(unsigned long long)arg1 accessory:(id)arg2;
+ (id)uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) unsigned long long commandType; // @synthesize commandType=_commandType;
- (id)initWithCommandType:(unsigned long long)arg1 accessory:(id)arg2;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

