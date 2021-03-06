//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDRelaySessionEvent : HMDLogEvent <HMDAWDLogEvent>
{
    unsigned long long _actionType;
    long long _statusCode;
}

+ (id)relaySessionEventWithActionType:(unsigned long long)arg1;
+ (id)stringForActionType:(unsigned long long)arg1;
+ (id)uuid;
+ (void)initialize;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (id)initWithActionType:(unsigned long long)arg1;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

