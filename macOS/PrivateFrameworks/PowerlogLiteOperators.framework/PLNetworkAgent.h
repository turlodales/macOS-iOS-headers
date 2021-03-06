//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition;

@interface PLNetworkAgent : PLAgent
{
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
}

+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (id)defaults;
+ (void)load;
- (void).cxx_destruct;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // @synthesize batteryLevelChanged=_batteryLevelChanged;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)log;
- (void)initOperatorDependancies;
- (id)init;

@end

