//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDPassLibraryInAppExportedInterface.h"

@class CLLocation, NSArray, NSNumber, NSSet, NSString, PKCatalog, PKContact, PKDisplayProfile, PKFieldProperties, PKPaymentSetupConfiguration, PKPaymentSetupRequest;

@protocol PDPassLibraryExtendedExportedInterface <PDPassLibraryInAppExportedInterface>
- (void)paymentPassWithAssociatedAccountIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentPass *))arg2;
- (void)presentPaymentSetupRequest:(PKPaymentSetupRequest *)arg1 orientation:(NSNumber *)arg2 completion:(void (^)(BOOL))arg3;
- (void)paymentSetupFeaturesForConfiguration:(PKPaymentSetupConfiguration *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)getDataForBundleResources:(NSSet *)arg1 objectUniqueIdentifier:(NSString *)arg2 handler:(void (^)(NSDictionary *))arg3;
- (void)spotlightDeleteIndexEntriesForAllPassesWithCompletion:(void (^)(NSError *))arg1;
- (void)spotlightReindexPassesWithUniqueIDs:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)spotlightReindexAllPassesWithCompletion:(void (^)(NSError *))arg1;
- (void)isPassbookVisibleWithHandler:(void (^)(BOOL))arg1;
- (void)isRemovingPassesOfType:(unsigned long long)arg1 handler:(void (^)(BOOL))arg2;
- (void)enabledValueAddedServicePassesWithHandler:(void (^)(NSArray *))arg1;
- (void)getDiffForPassUpdateUserNotificationWithIdentifier:(NSString *)arg1 handler:(void (^)(PKDiff *))arg2;
- (void)getRouteRelevantPassesForLocation:(CLLocation *)arg1 handler:(void (^)(NSArray *, NSDictionary *))arg2;
- (void)fetchCurrentRelevantPassInfo:(void (^)(NSArray *))arg1;
- (void)fetchHasCandidatePasses:(void (^)(BOOL))arg1;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)logDelayExitReasons;
- (void)sendUserEditedCatalog:(PKCatalog *)arg1;
- (void)pendingUserNotificationsWithCompletion:(void (^)(NSArray *))arg1;
- (void)issueWalletUserNotificationWithTitle:(NSString *)arg1 message:(NSString *)arg2 forPassUniqueIdentifier:(NSString *)arg3 customActionRoute:(NSString *)arg4;
- (void)shuffleGroups:(int)arg1;
- (void)forceImmediateRevocationCheck;
- (void)introduceDatabaseIntegrityProblem;
- (void)nukeDatabaseAndExit;
- (void)removeAllScheduledActivities;
- (void)noteAccountDeletedWithHandler:(void (^)(void))arg1;
- (void)noteAccountChangedWithHandler:(void (^)(void))arg1;
- (void)notifyPassUsedWithIdentifier:(NSString *)arg1 fromSource:(long long)arg2;
- (void)noteObjectSharedWithUniqueID:(NSString *)arg1;
- (void)personalizePassWithUniqueIdentifier:(NSString *)arg1 contact:(PKContact *)arg2 personalizationToken:(NSString *)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(void (^)(BOOL))arg6;
- (void)updateObjectWithUniqueIdentifier:(NSString *)arg1 handler:(void (^)(BOOL))arg2;
- (void)rescheduleCommutePlanRenewalReminderForPassWithUniqueID:(NSString *)arg1;
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(NSString *)arg2;
- (void)resetApplePayWithDiagnosticReason:(NSString *)arg1 handler:(void (^)(BOOL))arg2;
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)getImageSetContainerForUniqueID:(NSString *)arg1 ofType:(long long)arg2 displayProfile:(PKDisplayProfile *)arg3 suffix:(NSString *)arg4 handler:(void (^)(PKImageSetXPCContainer *))arg5;
- (void)getMetadataForFieldWithProperties:(PKFieldProperties *)arg1 handler:(void (^)(PKFieldMetadata *))arg2;
- (void)getPassesWithUniqueIdentifiers:(NSArray *)arg1 handler:(void (^)(NSArray *))arg2;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(NSString *)arg1 fromSource:(long long)arg2 handler:(void (^)(BOOL))arg3;
- (void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 handler:(void (^)(BOOL))arg2;
- (void)openWalletUIWithRelevantPass:(NSString *)arg1;
- (void)openDigitalIssuanceUIForIdentifier:(NSString *)arg1 withCompletion:(void (^)(BOOL))arg2;
- (void)openPaymentUIWithCompletion:(void (^)(BOOL))arg1;
@end

