//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CRKClassKitRosterRequirements;

@interface CRKClassKitClassPropertyApplicator : NSObject
{
    id <CRKClassKitRosterRequirements> _requirements;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CRKClassKitRosterRequirements> requirements; // @synthesize requirements=_requirements;
- (id)identifiersOfUsers:(id)arg1;
- (BOOL)additionsAndRemovalsIntersect:(id)arg1;
- (void)removeUser:(id)arg1 fromClass:(id)arg2;
- (void)addUser:(id)arg1 toClass:(id)arg2;
- (id)applyProperties:(id)arg1 toClass:(id)arg2 error:(id *)arg3;
- (id)initWithRequirements:(id)arg1;

@end

