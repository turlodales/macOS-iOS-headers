//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOAbstractRequestResponseTicket.h>

#import "GEOMapServiceCompletionTicket.h"

@class GEOAutocompleteSessionData, GEOMapServiceTraits, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchAutocompleteTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCompletionTicket>
{
    NSString *_searchQuery;
    GEOAutocompleteSessionData *_sessionData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_searchQuery) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (BOOL)showAutocompleteClientSource;
- (BOOL)autocompleteTopSectionIsQuerySuggestions;
- (id)sortPriorityMapping;
- (id)clientRankingModel;
- (BOOL)shouldDisplayNoResults;
- (BOOL)hasShouldDisplayNoResults;
- (double)retainSearchTime;
- (BOOL)isRapEnabled;
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;
- (void)applyToSuggestionList:(id)arg1;
- (BOOL)matchesFragment:(id)arg1;
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 searchQuery:(id)arg3 sessionData:(id)arg4;

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property(readonly, nonatomic) CDStruct_d1a7ebee dataRequestKind;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

