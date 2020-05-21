//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SGSuggestionsServiceBaseProtocol.h"

@class NSArray, NSData, NSDate, NSString, NSURL, _PASDomainSelection;

@protocol SGSuggestionsServiceInternalProtocol <_SGSuggestionsServiceBaseProtocol>
- (void)deleteCloudKitZoneWithCompletion:(void (^)(NSError *))arg1;
- (void)suggestionsFromEmailContent:(NSString *)arg1 headers:(NSData *)arg2 source:(NSString *)arg3 options:(unsigned long long)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (void)suggestionsFromMockData:(id)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (BOOL)sleep:(id *)arg1;
- (void)sleepWithCompletion:(void (^)(NSError *))arg1;
- (BOOL)daemonExit:(id *)arg1;
- (void)daemonExitWithCompletion:(void (^)(NSError *))arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(void (^)(NSError *))arg1;
- (void)drainQueueCompletelyWithCompletion:(void (^)(NSError *))arg1;
- (BOOL)sendRTCLogs:(id *)arg1;
- (void)suggestionsFromRFC822Data:(NSData *)arg1 source:(NSString *)arg2 options:(unsigned long long)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (NSArray *)suggestionsFromRFC822Data:(NSData *)arg1 source:(NSString *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)realtimeSuggestionsFromURL:(NSURL *)arg1 title:(NSString *)arg2 HTMLPayload:(NSString *)arg3 extractionDate:(NSDate *)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (void)clearCachesFully:(BOOL)arg1 withCompletion:(void (^)(NSError *))arg2;
- (BOOL)clearCachesFully:(BOOL)arg1 error:(id *)arg2;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 groupIdentifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 identifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 domainIdentifiers:(_PASDomainSelection *)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 uniqueIdentifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(void (^)(NSError *))arg1;
- (BOOL)resetConfirmationAndRejectionHistory:(id *)arg1;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(void (^)(NSArray *, NSError *))arg6;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (void)emailAddressIsSignificant:(NSString *)arg1 withCompletion:(void (^)(NSNumber *, NSError *))arg2;
- (void)spotlightReimportFromIdentifier:(NSString *)arg1 forPersonHandle:(NSString *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 withCompletion:(void (^)(NSError *))arg5;
- (void)addInteractions:(NSArray *)arg1 bundleId:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)addSearchableItems:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
@end

