//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _CDInteractionCache, _CDInteractionStore, _PSContactResolver;

@interface _PSHeuristics : NSObject
{
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _CDInteractionStore *_interactionStore;
    _PSContactResolver *_contactResolver;
    _CDInteractionCache *_recencyCache;
}

+ (id)templateForInPhoneCallHeuristicWithContactId:(id)arg1 handle:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) _CDInteractionCache *recencyCache; // @synthesize recencyCache=_recencyCache;
@property(readonly, nonatomic) _PSContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1;
- (id)backFillProxiesByRecencyUsingMessagesCache:(id)arg1 startIndex:(unsigned long long)arg2;
- (id)inPhoneCallHeuristicSuggestionProxies;
- (id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)arg1 predictionContextBundleId:(id)arg2;
- (id)proximityBoostingHeuristicWithProximityBooster:(id)arg1 existingSuggestions:(id)arg2;
- (id)maximalIntersectionGroupChatSuggestionProxyWithSeedContactIdentifiers:(id)arg1 bundleIds:(id)arg2 meContactIdentifier:(id)arg3;
- (id)photoSuggestionProxiesPartitionedByPresenceInAttachments:(id)arg1 photoSuggestedPeople:(id)arg2 contactIDsInAssets:(id)arg3;
- (id)recentNonSystemSuggestionsForBundleIDs:(id)arg1 numberOfSuggestion:(unsigned long long)arg2;
- (id)seedSuggestionsForChatGuidsAndEmails:(id)arg1;
- (void)prepareRecencyCache;
- (id)initWithKnowledgeStore:(id)arg1 interactionStore:(id)arg2 contactResolver:(id)arg3;

@end

