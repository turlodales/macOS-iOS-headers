//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PerformanceAnalysis/MallocDataCategorySummary.h>

@class NSMutableArray;

@interface AllocationTotal : MallocDataCategorySummary
{
    NSMutableArray *allocations;
}

@property(retain) NSMutableArray *allocations; // @synthesize allocations;
- (BOOL)printData:(id)arg1;
- (void)addAllocation:(id)arg1;
- (void)dealloc;
- (id)initWithAllocation:(id)arg1;

@end

