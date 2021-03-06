//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSDateInterval, NSSet, PGGraphLocationNode;

@interface PGPotentialPastSupersetMemory : PGPotentialMemory
{
    PGGraphLocationNode *_supersetLocationNode;
    NSDateInterval *_supersetDateInterval;
    NSSet *_interestingMomentNodes;
    NSArray *_interestingAssetsInSuperset;
    NSArray *_assetsInSuperset;
    NSSet *_supersetLocationNodes;
}

- (void).cxx_destruct;
@property(retain) NSSet *supersetLocationNodes; // @synthesize supersetLocationNodes=_supersetLocationNodes;
@property(retain) NSArray *assetsInSuperset; // @synthesize assetsInSuperset=_assetsInSuperset;
@property(retain) NSArray *interestingAssetsInSuperset; // @synthesize interestingAssetsInSuperset=_interestingAssetsInSuperset;
@property(readonly) NSSet *interestingMomentNodes; // @synthesize interestingMomentNodes=_interestingMomentNodes;
@property(readonly) NSDateInterval *supersetDateInterval; // @synthesize supersetDateInterval=_supersetDateInterval;
@property(readonly) PGGraphLocationNode *supersetLocationNode; // @synthesize supersetLocationNode=_supersetLocationNode;
- (id)initWithSupersetLocationNode:(id)arg1 supersetDateInterval:(id)arg2 interestingMomentNodes:(id)arg3 momentNodes:(id)arg4;

@end

