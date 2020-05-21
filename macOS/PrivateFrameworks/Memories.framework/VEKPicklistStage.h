//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/VEKPipelineStage.h>

@class NSArray, VEKProduction;

@interface VEKPicklistStage : VEKPipelineStage
{
    VEKProduction *_production;
    NSArray *_featuredPeople;
    double _maximumPossibleMemoryDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double maximumPossibleMemoryDuration; // @synthesize maximumPossibleMemoryDuration=_maximumPossibleMemoryDuration;
@property(retain, nonatomic) NSArray *featuredPeople; // @synthesize featuredPeople=_featuredPeople;
@property(nonatomic) __weak VEKProduction *production; // @synthesize production=_production;
- (id)memoryClassificationKeys;
- (BOOL)memoryClassificationBased;
- (double)titleCardDuration;
- (BOOL)needsTitleCard;
- (long long)pickedItemCountForBuckets:(struct Buckets)arg1 pickList:(id)arg2;
- (id)fudgedDurationInfoWithBuckets:(id)arg1 pickList:(id)arg2;
- (double)maximumPossibleMemoryDurationForPickList:(id)arg1;
- (double)maxDurationRangeForBuckets:(struct Buckets)arg1;
- (double)durationRangeForBuckets:(struct Buckets)arg1;
- (id)runStageWithInput:(id)arg1;
- (id)outputTypes;
- (id)inputTypes;

@end

