//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, PGGraphNode;

@interface PGPotentialHobbyMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    NSArray *_hobbyAssets;
    PGGraphNode *_person;
    long long _year;
    long long _hobbyType;
}

- (void).cxx_destruct;
@property(readonly) long long hobbyType; // @synthesize hobbyType=_hobbyType;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphNode *person; // @synthesize person=_person;
@property(retain) NSArray *hobbyAssets; // @synthesize hobbyAssets=_hobbyAssets;
- (void)addMomentNode:(id)arg1;
- (id)initWithPerson:(id)arg1 year:(long long)arg2 hobbyType:(long long)arg3;

@end

