//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGPeopleVisitingMemoryGenerator : PGFeaturedMemoryGenerator
{
}

- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePeopleAndVisitsUsingBlock:(CDUnknownBlockType)arg1;
- (id)consolidatedDateIntervalsFromDateIntervals:(id)arg1;
- (void)enumerateVerifiedPeopleNodesUsingBlock:(CDUnknownBlockType)arg1;

@end

