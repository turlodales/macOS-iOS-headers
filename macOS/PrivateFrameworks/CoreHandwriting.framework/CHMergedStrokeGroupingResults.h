//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSDictionary;

@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult
{
    NSDictionary *_groupingResultsByStrategyIdentifier;
}

@property(readonly, retain, nonatomic) NSDictionary *groupingResultsByStrategyIdentifier; // @synthesize groupingResultsByStrategyIdentifier=_groupingResultsByStrategyIdentifier;
- (void)dealloc;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 groupingResultsByStrategyIdentifier:(id)arg4;

@end

