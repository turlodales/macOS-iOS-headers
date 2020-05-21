//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContainer, CKDatabase, NSArray, NSCache;

@interface WFGallerySessionManager : NSObject
{
    BOOL _performExpensiveFetchOperations;
    CKContainer *_container;
    CKDatabase *_database;
    NSArray *_preferredLocalizations;
    NSCache *_workflowSearchCache;
    NSCache *_collectionSearchCache;
    NSCache *_pageCache;
    NSCache *_workflowCache;
    NSCache *_bannerImageCache;
}

+ (id)defaultPreferredLocalizations;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSCache *bannerImageCache; // @synthesize bannerImageCache=_bannerImageCache;
@property(readonly, nonatomic) NSCache *workflowCache; // @synthesize workflowCache=_workflowCache;
@property(readonly, nonatomic) NSCache *pageCache; // @synthesize pageCache=_pageCache;
@property(readonly, nonatomic) NSCache *collectionSearchCache; // @synthesize collectionSearchCache=_collectionSearchCache;
@property(readonly, nonatomic) NSCache *workflowSearchCache; // @synthesize workflowSearchCache=_workflowSearchCache;
@property(readonly, copy, nonatomic) NSArray *preferredLocalizations; // @synthesize preferredLocalizations=_preferredLocalizations;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) BOOL performExpensiveFetchOperations; // @synthesize performExpensiveFetchOperations=_performExpensiveFetchOperations;
- (void)uploadWorkflow:(id)arg1 withName:(id)arg2 shortDescription:(id)arg3 longDescription:(id)arg4 private:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)deleteBanner:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateWorkflow:(id)arg1 withName:(id)arg2 shortDescription:(id)arg3 longDescription:(id)arg4 workflow:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)updateCollection:(id)arg1 small2xImage:(id)arg2 large2xImage:(id)arg3 small3xImage:(id)arg4 large3xImage:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)updateBanner:(id)arg1 withName:(id)arg2 detailPage:(id)arg3 iphone2xImage:(id)arg4 iphone3xImage:(id)arg5 ipadImage:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)updatePage:(id)arg1 withName:(id)arg2 banners:(id)arg3 collections:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)createCollection:(id)arg1 small2xImage:(id)arg2 large2xImage:(id)arg3 small3xImage:(id)arg4 large3xImage:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)createBannerWithName:(id)arg1 detailPage:(id)arg2 iphone2xImage:(id)arg3 iphone3xImage:(id)arg4 ipadImage:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)unshareSharedShortcut:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)updateItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCurrentUserIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getCollectionForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getWorkflowForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)sortAndFilterSearchResults:(id)arg1 searchedWords:(id)arg2;
- (id)searchCollections:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)queryFilterForTokenizedKey:(id)arg1 words:(id)arg2 endsWithSpace:(BOOL)arg3;
- (id)searchUsingWebServicesForItem:(Class)arg1 query:(id)arg2 queryFilter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)searchWorkflows:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)searchWorkflowsAndCollections:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadWorkflowInGalleryWorkflow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)preferredPageInPages:(id)arg1 preferredLanguages:(id)arg2;
- (id)getImageForBanner:(id)arg1 size:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getPageWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getHomeWithPreferredLanguages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getHomeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)createItemRequest;
- (id)initWithContainer:(id)arg1 preferredLocalizations:(id)arg2 performExpensiveFetchOperations:(BOOL)arg3;
- (id)init;

@end

