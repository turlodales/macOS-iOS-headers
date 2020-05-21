//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SignpostPredicateProducer.h"

@class NSMutableDictionary, NSPredicate;

@interface SignpostSupportSubsystemCategoryFilter : NSObject <SignpostPredicateProducer>
{
    NSMutableDictionary *_subsystemsDict;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *subsystemsDict; // @synthesize subsystemsDict=_subsystemsDict;
- (id)debugDescription;
- (void)addEntry:(id)arg1;
- (void)addSubsystem:(id)arg1 category:(id)arg2;
- (id)_initWithEntries:(id)arg1;
- (BOOL)matchesSubsystem:(id)arg1 category:(id)arg2;
- (id)liveStreamingPredicate;
@property(readonly, nonatomic) NSPredicate *predicateEquivalent;
- (id)_predicateEquivalentWithIsSimplified:(BOOL)arg1;
- (id)_subpredicatesForSubsystemsWithIsSimplified:(BOOL)arg1;
@property(readonly, nonatomic) unsigned long long _compoundPredicateType;
- (void)_fixupToSupportFramerateCalculation;
- (void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2;
@property(readonly, nonatomic) BOOL _wantsNotSubsystem;
- (BOOL)passesSubsystem:(id)arg1 category:(id)arg2;

@end

