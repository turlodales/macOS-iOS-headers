//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import "HMDAWDLogEvent.h"

@class HMDAccessory, NSString;

@interface HMDBLEBroadcastEventReceived : HMDLogEvent <HMDAWDLogEvent>
{
    BOOL _hasExpectedGSN;
    HMDAccessory *_accessory;
}

+ (id)broadcastEventFromAccessory:(id)arg1 withExpectedGSN:(BOOL)arg2;
+ (id)uuid;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasExpectedGSN; // @synthesize hasExpectedGSN=_hasExpectedGSN;
@property(readonly, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (id)initBroadcastEventFromAccessory:(id)arg1 withExpectedGSN:(BOOL)arg2;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

