//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGPeopleInferencesConveniences : NSObject
{
}

+ (id)possibleUserLocalesFromGraph:(id)arg1;
+ (id)topPersonLocalIdentifierFor2PersonSocialGroupsInGraph:(id)arg1 personNodes:(id)arg2;
+ (id)_momentsAtHomeOrWorkForMomentNodes:(id)arg1 atHome:(BOOL)arg2 atWork:(BOOL)arg3;
+ (id)momentsAtHomeForMomentNodes:(id)arg1;
+ (id)momentsAtWorkForMomentNodes:(id)arg1;
+ (id)momentNodesbyAddressNodeFromMomentNodes:(id)arg1;
+ (id)personCountedSetFromMomentNodes:(id)arg1 amongPersonNodes:(id)arg2;
+ (id)personLocalIdentifierByContactIdentifierFromPersonNodes:(id)arg1;
+ (id)momentNodesLinkedToPersonNodes:(id)arg1;
+ (BOOL)signalInRunOptions:(unsigned long long)arg1 signal:(unsigned long long)arg2;
+ (BOOL)isValidContact:(id)arg1;

@end

