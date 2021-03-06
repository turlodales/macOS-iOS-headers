//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol EDSearchableIndexSchedulable;

@protocol EDSearchableIndexSchedulableDelegate <NSObject>
- (BOOL)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (double)budgetedTimeRemainingForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didGenerateImportantPowerEventWithIdentifier:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didGeneratePowerEventWithIdentifier:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)indexingDidSuspendForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)indexingDidResumeForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didIndexItemCount:(long long)arg2;
- (void)searchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1 didIndexForTime:(double)arg2;

@optional
- (void)didCancelDataSourceUpdateRequestForSearchableIndexSchedulable:(id <EDSearchableIndexSchedulable>)arg1;
@end

