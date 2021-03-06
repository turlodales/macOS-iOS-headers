//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet;

@interface PGRecentPastEventPotentialMemory : PGPotentialMemory
{
    BOOL _isBirthday;
    NSSet *_peopleNodes;
    double _meanContentScore;
    double _neighborScore;
}

- (void).cxx_destruct;
@property BOOL isBirthday; // @synthesize isBirthday=_isBirthday;
@property double neighborScore; // @synthesize neighborScore=_neighborScore;
@property double meanContentScore; // @synthesize meanContentScore=_meanContentScore;
@property(retain) NSSet *peopleNodes; // @synthesize peopleNodes=_peopleNodes;
- (id)description;
- (void)computeRemainingScoresWithManager:(id)arg1 controller:(id)arg2 previousPotentialMemory:(id)arg3;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4;
- (id)initWithAssetCollection:(id)arg1 momentNode:(id)arg2 subcategory:(unsigned long long)arg3;

@end

