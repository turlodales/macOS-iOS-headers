//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, PGGraphNode;

@interface PGPotentialPeopleMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_peopleNode;
    long long _year;
    NSArray *_facedAssets;
}

- (void).cxx_destruct;
@property(retain) NSArray *facedAssets; // @synthesize facedAssets=_facedAssets;
@property(readonly) long long year; // @synthesize year=_year;
@property(retain) PGGraphNode *peopleNode; // @synthesize peopleNode=_peopleNode;
- (void)addMomentNode:(id)arg1;
- (id)initWithSubcategory:(unsigned long long)arg1 peopleNode:(id)arg2 year:(long long)arg3;

@end

