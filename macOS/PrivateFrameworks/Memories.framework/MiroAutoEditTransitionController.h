//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MiroAutoEditKenBurnsController, MiroBlueprint, MiroMemory, NSMutableArray, NSMutableDictionary, Project;

__attribute__((visibility("hidden")))
@interface MiroAutoEditTransitionController : NSObject
{
    int _numberOfPotentialTransitionPoints;
    Project *_project;
    MiroBlueprint *_activeBlueprint;
    NSMutableArray *_layoutClips;
    MiroAutoEditKenBurnsController *_kbController;
    NSMutableArray *_kenBurnsPanZoomPatterns;
    NSMutableArray *_transitions;
    NSMutableDictionary *_groupingTransitions;
    NSMutableArray *_specialTransitions;
    NSMutableArray *_multiTransitions;
    MiroMemory *_activeMemory;
}

- (void).cxx_destruct;
@property(nonatomic) MiroMemory *activeMemory; // @synthesize activeMemory=_activeMemory;
@property(nonatomic) int numberOfPotentialTransitionPoints; // @synthesize numberOfPotentialTransitionPoints=_numberOfPotentialTransitionPoints;
@property(retain, nonatomic) NSMutableArray *multiTransitions; // @synthesize multiTransitions=_multiTransitions;
@property(retain, nonatomic) NSMutableArray *specialTransitions; // @synthesize specialTransitions=_specialTransitions;
@property(retain, nonatomic) NSMutableDictionary *groupingTransitions; // @synthesize groupingTransitions=_groupingTransitions;
@property(retain, nonatomic) NSMutableArray *transitions; // @synthesize transitions=_transitions;
@property(retain, nonatomic) NSMutableArray *kenBurnsPanZoomPatterns; // @synthesize kenBurnsPanZoomPatterns=_kenBurnsPanZoomPatterns;
@property(retain, nonatomic) MiroAutoEditKenBurnsController *kbController; // @synthesize kbController=_kbController;
@property(retain, nonatomic) NSMutableArray *layoutClips; // @synthesize layoutClips=_layoutClips;
@property(retain, nonatomic) MiroBlueprint *activeBlueprint; // @synthesize activeBlueprint=_activeBlueprint;
@property(retain, nonatomic) Project *project; // @synthesize project=_project;
- (id)_everyTransitionDEBUG;
- (void)applyMultiUpTransitionTreatmentToLayoutClip:(id)arg1;
- (BOOL)attemptToTransitionFromClip:(id)arg1 toClip:(id)arg2 withSettingsFromLayoutClip:(id)arg3;
- (BOOL)transitionCandidate:(id)arg1 validForLayoutClip:(id)arg2;
- (id)transitionForLayoutClip:(id)arg1;
- (int)maxTransitionDurationFromClip:(id)arg1 toClip:(id)arg2 transitionName:(id)arg3;
- (BOOL)clipShouldTrimToSelection:(id)arg1;
- (BOOL)clipHasMediaLimitations:(id)arg1;
- (unsigned long long)kenBurnsPreferredMovementForClip:(id)arg1;
- (void)applyKenBurnsOrEffectForKenBurnsClip:(id)arg1;
- (unsigned long long)kenBurnsPaceForBlueprint;
- (void)applyPanoStyleToClip:(id)arg1;
- (BOOL)transitionAcceptableBetween:(id)arg1 secondClip:(id)arg2;
- (id)convertMultiTransitionDictionary:(id)arg1 basedOnMultiLayout:(int)arg2;
- (id)transitionDictionaryForMultiFromBlueprint:(id)arg1;
- (id)transitionFromTransitions:(id)arg1 leadingClipType:(int)arg2 followingClipType:(int)arg3 includesPano:(BOOL)arg4;
- (id)clipBeforeClip:(id)arg1;
- (id)prepareTransitionsFromBlueprint:(id)arg1 forNumberOfEditPoints:(int)arg2 numberOfMultiTransitions:(int)arg3;
- (void)shuffleTransitionsInArray:(id)arg1;
- (void)adjustChosenTransitionsToAdhereToContentRules:(id)arg1;
- (void)updateNumberOfTransitionsToInclude:(int)arg1;
- (unsigned long long)safeInsertIndexForTransition:(id)arg1 inTransitions:(id)arg2;
- (void)applyTransitionToLayoutClip:(id)arg1;
- (void)assignFirstAppropriateTransitionTo:(id)arg1;
- (void)assignTransitionsToLayoutClips;
- (BOOL)findAndAssignConsecutiveClipsIn:(id)arg1 supportingTransitionGroup:(id)arg2;
- (void)assignRequiredCutsAndMultiTransitionsIn:(id)arg1;
- (void)applyKenBurnsForBurstClip:(id)arg1;
- (void)applyClipEffectsBasedOnTransitions;
- (BOOL)transitionDictatesKenBurnsMotion:(id)arg1;
- (void)assignRemainingKenBurnsAnyClipTreatments;
- (void)applyDeterminedKenBurnsTreatments:(id)arg1 forAspect:(id)arg2;
- (void)applyTransitions;
- (int)numberOfMultiTransitionsNeeded;
- (int)numberOfTransitionClipsInLayoutClips;
- (id)nextKBPanAndZoomSetForNumberOfEdits:(int)arg1 following:(id)arg2 forAspect:(id)arg3;
- (void)establishPanAndZoomPatterns;
- (void)prepareTransitionsForBlueprint;

@end

