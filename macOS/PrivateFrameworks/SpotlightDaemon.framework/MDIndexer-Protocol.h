//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSSearchableIndexInterface.h"

@class CSSearchQueryContext, CSSearchableItem, CSUserAction, NSArray, NSDate, NSString, SPCoreSpotlightTask;

@protocol MDIndexer <CSSearchableIndexInterface>
- (void)runMigration;
- (double)lastUpdateTime;
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4;
- (void)clientDidCheckin:(NSString *)arg1 protectionClass:(NSString *)arg2 service:(id <CSSearchableIndexServiceInterface>)arg3 completionHandler:(void (^)(CSIndexJob *, NSError *))arg4;

@optional
@property __weak id <CSIndexExtensionDelegate> extensionDelegate;
- (void)deleteActionsWithIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteActionsBeforeTime:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteAllInteractionsWithBundleID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteAllUserActivities:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteAllSearchableItemsWithBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2 shouldGC:(BOOL)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)recordEngagementForBundleID:(NSString *)arg1 uniqueIdentifier:(NSString *)arg2 protectionClass:(NSString *)arg3 userQuery:(NSString *)arg4 date:(NSDate *)arg5;
- (void)startQueryTask:(SPCoreSpotlightTask *)arg1;
-     // Error parsing type: @"SPCoreSpotlightTask"56@0:8@"NSString"16@"CSSearchQueryContext"24@?<^v@?i{?=(?={?=^vI}{?=^vQ}{?=*Q}{?=*I}*BCSIQTcsiqtdfdq^v)}Q^v>32@?<v@?iQ^{__MDStoreOIDArray=}^{__MDPlistBytes=}@"NSString">40@?<v@?@"NSError">48, name: taskForQueryWithQueryString:queryContext:eventHandler:resultsHandler:completionHandler:
-     // Error parsing type: @"SPCoreSpotlightTask"56@0:8@"NSString"16@"CSSearchQueryContext"24@?<^v@?i{?=(?={?=^vI}{?=^vQ}{?=*Q}{?=*I}*BCSIQTcsiqtdfdq^v)}Q^v>32@?<v@?iQ^{__MDStoreOIDArray=}^{__MDPlistBytes=}@"NSString">40@?<v@?@"NSError">48, name: startQueryWithQueryString:queryContext:eventHandler:resultsHandler:completionHandler:
-     // Error parsing type: @"SPCoreSpotlightTask"48@0:8@"NSString"16@"CSSearchQueryContext"24@?<^v@?i{?=(?={?=^vI}{?=^vQ}{?=*Q}{?=*I}*BCSIQTcsiqtdfdq^v)}Q^v>32@?<v@?iQ^{__MDStoreOIDArray=}^{__MDPlistBytes=}@"NSString">40, name: startQuery:withContext:eventHandler:handler:
- (SPCoreSpotlightTask *)startQuery:(NSString *)arg1 withContext:(CSSearchQueryContext *)arg2 handler:(void (^)(int, unsigned long long, struct __MDStoreOIDArray *, struct __MDPlistBytes *, NSString *))arg3;
@end

