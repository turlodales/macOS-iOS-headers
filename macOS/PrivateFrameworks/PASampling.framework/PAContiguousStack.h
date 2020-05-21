//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PAContiguousStack : NSObject
{
    NSMutableArray *_threads;
    unsigned long long _firstTimestampIndex;
    unsigned long long _previousCpuTimeNs;
    unsigned long long _previousCpuInstructions;
    unsigned long long _previousCpuCycles;
}

- (void).cxx_destruct;
- (void)iterateSampleTaskThreadPairsWithTasks:(id)arg1 fromTimestampIndex:(unsigned long long)arg2 toTimestampIndex:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4;
- (void)iterateSampleThreadsFromTimestampIndex:(unsigned long long)arg1 toTimestampIndex:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (BOOL)threadExistedPreviously;
- (BOOL)isIdleWorkQueueThread;
- (BOOL)isGlobalForcedIdleThread;
- (BOOL)isProcessorIdleThread;
- (unsigned long long)cpuCycles;
- (unsigned long long)cpuInstructions;
- (unsigned long long)cpuTimeNs;
- (id)sampleThreadAtTimestampIndex:(unsigned long long)arg1;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
@property(readonly) unsigned long long dispatchQueueId;
@property(readonly) unsigned long long threadId;
- (id)initWithTimestampIndex:(unsigned long long)arg1 andPreviousCpuTimeNs:(unsigned long long)arg2 andPreviousCpuInstructions:(unsigned long long)arg3 andPreviousCpuCycles:(unsigned long long)arg4;
- (BOOL)hasSingleName:(id *)arg1;
- (BOOL)isSingleStackWithLeafUserFrame:(id)arg1 andLeafKernelFrame:(id)arg2;
- (unsigned long long)count;
- (unsigned long long)lastTimestampIndex;
- (unsigned long long)firstTimestampIndex;
- (id)debugDescription;

@end

