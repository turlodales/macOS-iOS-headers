//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection, _PSSuggesterConfiguration;

@interface _PSSuggester : NSObject
{
    NSXPCConnection *_connection;
    struct os_unfair_lock_s _lock;
    _PSSuggesterConfiguration *_configuration;
}

+ (id)suggesterWithDaemon;
- (void).cxx_destruct;
@property(readonly, nonatomic) _PSSuggesterConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)provideFeedbackForMessagesZkwSuggestions:(id)arg1;
- (void)provideFeedbackForSuggestions:(id)arg1;
- (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1;
- (id)hourOfDayProbabilitiesToInteractWithContact:(id)arg1;
- (id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2;
- (id)rankedZKWSuggestionsFromContext:(id)arg1;
- (id)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(BOOL)arg2;
- (id)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2;
- (id)shareExtensionSuggestionsFromContext:(id)arg1;
- (id)suggestInteractionsFromContext:(id)arg1;
- (id)shareSheetInteractionsFromContext:(id)arg1 maximumNumberOfSuggestions:(long long)arg2;
- (id)shareSheetInteractionsFromContext:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithDaemonUsingConfiguration:(id)arg1;
- (id)init;

@end

