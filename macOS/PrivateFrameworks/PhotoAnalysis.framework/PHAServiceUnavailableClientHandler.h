//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHAServiceOperationHandling.h"
#import "PLPhotoAnalysisServiceProtocol.h"

@interface PHAServiceUnavailableClientHandler : NSObject <PLPhotoAnalysisServiceProtocol, PHAServiceOperationHandling>
{
}

- (void)reportTurboEnabledWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rebuildPersonsWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)personPromoterStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)faceProcessingStatusForUserInterfaceWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetFaceClassificationModelWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetPeopleWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)validateClusterCacheWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)processPersonsWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)reclusterFacesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetFaceClusteringStateWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)localizedLabelForSceneIdentifier:(unsigned int)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestRunPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 context:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)runCurationWithItems:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetRevGeocodingWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestHighlightEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestGraphServicePerformsQueryWithContext:(id)arg1 query:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestGraphServiceStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestHighlightEstimatesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSuggestionInfosWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestMemoryInfosWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestUtilityAssetInformationWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestCurationDebugInformationForAsset:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestM5CompatibleMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestPeopleSuggestionLearningWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 withOptions:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestLocalizedSceneAncestryInformationWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)invalidateGraphWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)enrichDataModelWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAssetCollectionsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSocialGroupsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAllSocialGroupsForPersonIdentifier:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSortedArrayOfPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestLastQuestionGenerationJobDateWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestGenerateQuestionsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestRelatedMomentsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)notifyLibraryAvailableAtURL:(id)arg1;
- (void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)writeQALog:(id)arg1;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unloadGraphWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)loadGraphWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleOperation:(id)arg1;
- (id)error;

@end

