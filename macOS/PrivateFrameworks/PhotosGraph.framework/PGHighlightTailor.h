//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_group>, NSSet, PGManager;

@interface PGHighlightTailor : NSObject
{
    NSObject<OS_dispatch_group> *_enrichmentCommitGroup;
    PGManager *_manager;
    NSArray *_enrichmentProfiles;
    NSSet *_verifiedPersonLocalIdentifiers;
}

+ (BOOL)itemScoreIsAutoplayable:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *enrichmentProfiles; // @synthesize enrichmentProfiles=_enrichmentProfiles;
@property(retain, nonatomic) PGManager *manager; // @synthesize manager=_manager;
- (id)sortedCurationOfType:(unsigned short)arg1 fromHighlight:(id)arg2;
- (id)keyAssetFromHighlight:(id)arg1;
- (id)bestEnrichmentProfileForHighlight:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)enrichAllHighlightsWithOptions:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (BOOL)enrichHighlights:(id)arg1 options:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(long long)arg1 options:(unsigned long long)arg2;
- (void)writeHighlightEnrichmentValues:(id)arg1 toChangeRequest:(id)arg2;
- (id)enrichmentValuesForHighlight:(id)arg1 usingEnrichmentProfile:(id)arg2 options:(unsigned long long)arg3 reportChangedValuesOnly:(BOOL)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (id)computeChangedVisibilityScoresForItems:(id)arg1;
- (double)highlightVisibilityWeightForItem:(id)arg1;
- (id)assetSortDescriptors;
@property(readonly) NSSet *verifiedPersonLocalIdentifiers; // @synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers;
- (id)initForTesting;
- (id)initWithManager:(id)arg1;

@end

