//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/MSASModelBase.h>

@interface MSASDaemonModel : MSASModelBase
{
}

+ (id)defaultModel;
- (void)clearAllNextActivityDates;
- (void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2;
- (id)nextActivityDateByPersonID;
- (id)earliestNextActivityDate;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (id)init;

@end

