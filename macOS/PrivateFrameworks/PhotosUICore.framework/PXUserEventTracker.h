//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXUserEventTrackerCommon.h>

@class NSDictionary, NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon
{
    unsigned long long _totalNumberOfRelatedJumps;
    unsigned long long _MaxDepthOfRelatedJumps;
    NSDictionary *_messageTracerFieldStringLookupForMainStates;
    NSDictionary *_messageTracerFieldStringLookupForSubStates;
    NSDictionary *_messageTracerFieldStringLookupForSubSubStates;
    NSDictionary *_messageTracerFieldStringLookupPerSubStatesForViewCount;
    NSDictionary *_messageTracerFieldStringLookupPerSubSubStatesForViewCount;
    NSHashTable *__relatedLookupTable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setRelatedLookupTable:) NSHashTable *_relatedLookupTable; // @synthesize _relatedLookupTable=__relatedLookupTable;
- (void)_messageTracerJumpCountLoggingDryrun:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (void)_messageTracerDurationLoggingDryrun:(unsigned long long)arg1 duration:(double)arg2;
- (void)_messageTracerDurationLoggingDryrunForSubState:(unsigned long long)arg1 duration:(double)arg2;
- (id)_truncateToSignificantFigureForValue:(id)arg1 numOfSignificantDigits:(int)arg2;
- (void)_logMessageTracerUsageStatistics:(id)arg1 fieldKey:(id)arg2 value:(id)arg3;
- (void)_logMessageTracerRelatedJumpStatistics:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (void)_logMessageTracerDurationCounterForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logMessageTracerDurationCounterForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logMessageTracerDurationCounterForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logMessageTracerViewCountCounterForLogSubState:(unsigned long long)arg1;
- (void)_logMessageTracerViewCountCounterForLogSubSubState:(unsigned long long)arg1;
- (void)logFirstTimeExpericeReadiness:(BOOL)arg1 forLibrarySize:(long long)arg2;
- (void)logInterestingMemoryNotificationRespondedCount;
- (void)logInterestingMemoryNotificationSeenCount;
- (void)logNavigationListViewTapWithKey:(struct __CFString *)arg1;
- (void)logSearchNumberOfTermsInSearchFieldOnSuccessfulSearch:(unsigned long long)arg1;
- (void)logSearchPerSessionNextTokenSuggestionTapped:(BOOL)arg1 wordCompletionTapped:(BOOL)arg2;
- (void)logSearchSuccessfulResult:(BOOL)arg1;
- (void)logSearchSiriFoundResults:(BOOL)arg1;
- (void)logSearchTapSearch;
- (void)logSearchZeroKeywordSearch;
- (void)logSearchWordCompletionTapped;
- (void)logSearchNextTokenSuggestionTapped;
- (void)logSearchWordEmbeddingSelected;
- (void)logSearchWordEmbeddingsPresented;
- (void)logForYouInboxViewedCount;
- (void)logForYouSuggestionSavedCount;
- (void)logForYouSuggestionSharedCount;
- (void)logForYouSuggestionViewed1UpCount;
- (void)logForYouSuggestionViewedCount;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
- (void)logForYouSharedAlbumInvitationReportedAsJunkCount;
- (void)logForYouSharedAlbumInvitationDeclinedCount;
- (void)logForYouSharedAlbumInvitationAcceptedCount;
- (void)logForYouContextualMemoriesDetailsCount;
- (void)logForYouMemoriesDetailsCount;
- (void)logForYouMemoriesFeedCount;
- (void)logUserDidSelectGadgetAccessoryButtonWithKey:(struct __CFString *)arg1;
- (void)logPeopleDetailShowFaces;
- (void)logPeopleDetailNotThisPerson;
- (void)logPeopleDetailKeyPhotoChanged;
- (void)logPeopleRemoveFromPeopleHome;
- (void)logPeopleAddToPeopleHome;
- (void)logPeopleHomeNumberOfPeopleWithContactName:(unsigned long long)arg1 numberOfPeopleWithStringName:(unsigned long long)arg2;
- (void)logPeopleHomeFavoritePersonCount:(unsigned long long)arg1 totalPersonCount:(unsigned long long)arg2;
- (void)logNamingTypeSelection:(unsigned long long)arg1;
- (void)logMergeCandidateInlineControlWithSignature:(unsigned long long)arg1;
- (void)logConfirmAdditionalMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logConfirmAdditionalVisionFaceCountConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2;
- (void)logConfirmAdditionalSuggestionsConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2;
- (void)logConfirmAdditionalMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logPeopleConfirmAdditionalViewCount;
- (void)logBootstrapMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logBootstrapMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logPeopleMeSuggestionConfirmed:(BOOL)arg1;
- (void)logPeopleDetailCount;
- (void)logPeopleHomeCount;
- (void)logImpressionCountForEventSource:(unsigned long long)arg1;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logViewCountForLogSubSubState:(unsigned long long)arg1;
- (void)logViewCountForLogSubState:(unsigned long long)arg1;
- (void)_resetDetailViewTraversalStatistics;
- (void)eventSourceWillAppear:(unsigned long long)arg1 sender:(id)arg2;
- (void)eventSourceDidDisappear:(unsigned long long)arg1 sender:(id)arg2;
- (void)didNavigateInOneUpFromOrigin:(long long)arg1;
- (void)didPresentOneUpFromOrigin:(long long)arg1;
- (void)didCreateMemoryViaAddToMemories;
- (void)didFavoriteMemory;
- (void)didConfirmDeleteOfMemory;
- (void)didPlayMiroMovieForAssetCollection:(id)arg1;
- (void)didViewDetailsForAssetCollection:(id)arg1;
- (void)didFinishViewingDetailsWithCurrentContext:(id)arg1;
- (void)willViewDetailsWithCurrentContext:(id)arg1;
- (id)init;

@end

