//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import "PGGraphLocalizable.h"
#import "PGGraphSynonymSupport.h"

@class NSArray, NSString, PVSceneTaxonomyNode;

@interface PGGraphSceneNode : PGGraphNode <PGGraphLocalizable, PGGraphSynonymSupport>
{
    PVSceneTaxonomyNode *_sceneTaxonomyNode;
}

+ (id)suggestionWhitelistedScenes;
+ (BOOL)isSceneSuitableForSuggestionsWithIdentifier:(unsigned int)arg1 confidence:(double)arg2;
+ (BOOL)isSceneSuitableForSuggestionsWithLabel:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *localizedSynonyms;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) unsigned long long numberOfHighConfidenceAssets;
@property(readonly, nonatomic) unsigned long long numberOfAssets;
@property(readonly, nonatomic) PVSceneTaxonomyNode *sceneTaxonomyNode; // @synthesize sceneTaxonomyNode=_sceneTaxonomyNode;
@property(readonly, nonatomic) BOOL isSuitableForSuggestions;
@property(readonly, nonatomic) BOOL isIndexed;
@property(readonly, nonatomic) unsigned long long level;
@property(readonly, nonatomic) unsigned int sceneIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

