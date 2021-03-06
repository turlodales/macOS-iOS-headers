//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCPowerLog.h>

#import <MailCore/_MCBatchingTimerDelegate-Protocol.h>

@class NSLock, NSMutableDictionary, NSString, _MCBatchingTimer;

@interface MCAggregablePowerLog : MCPowerLog <_MCBatchingTimerDelegate>
{
    NSLock *_aggregationLock;
    NSMutableDictionary *_aggregatedEventDictionary;
    _MCBatchingTimer *_timer;
    CDUnknownBlockType _aggregationBlock;
    double _aggregationPeriod;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double aggregationPeriod; // @synthesize aggregationPeriod=_aggregationPeriod;
@property(readonly, copy, nonatomic) CDUnknownBlockType aggregationBlock; // @synthesize aggregationBlock=_aggregationBlock;
- (void)batchingTimerDidFire:(id)arg1;
- (void)logEventWithDictionary:(id)arg1;
- (id)initWithEventName:(id)arg1 aggregationPeriod:(double)arg2 aggregationBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

