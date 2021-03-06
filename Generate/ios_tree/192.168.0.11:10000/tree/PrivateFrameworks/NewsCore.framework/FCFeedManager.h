/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedManager : NSObject {
    FCCloudContext * _context;
    NSMapTable * _feedDescriptorsByID;
    NFMutexLock * _feedDescriptorsLock;
    <FCFeedPersonalizing> * _feedPersonalizer;
    NSObject<OS_dispatch_group> * _forYouPrefetchGroup;
    long long  _savedStoriesCount;
}

@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) NSMapTable *feedDescriptorsByID;
@property (nonatomic, retain) NFMutexLock *feedDescriptorsLock;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *forYouPrefetchGroup;
@property (nonatomic) long long savedStoriesCount;

+ (id)_identifierForFeedName:(id)arg1;
+ (id)feedDescriptorNameForForYou;
+ (id)feedDescriptorNameForReadingHistory;
+ (id)feedDescriptorNameForReadingList;

- (void).cxx_destruct;
- (id)_feedDescriptorWithIdentifier:(id)arg1 forceRecreate:(bool)arg2 tag:(id)arg3;
- (id)context;
- (id)feedDescriptorForArticlesInSameClusterAsArticleID:(id)arg1;
- (id)feedDescriptorForForYou;
- (id)feedDescriptorForReadingHistory;
- (id)feedDescriptorForReadingList;
- (id)feedDescriptorForTag:(id)arg1;
- (id)feedDescriptorWithIdentifier:(id)arg1;
- (id)feedDescriptorsByID;
- (id)feedDescriptorsLock;
- (id)feedPersonalizer;
- (id)forYouPrefetchGroup;
- (id)init;
- (id)initWithCloudContext:(id)arg1;
- (void)notifyWhenForYouPrefetchIsCompleteWithBlock:(id /* block */)arg1;
- (void)prefetchForYouWithHighPriority:(bool)arg1 completionHandler:(id /* block */)arg2;
- (long long)savedStoriesCount;
- (void)setContext:(id)arg1;
- (void)setFeedDescriptorsByID:(id)arg1;
- (void)setFeedDescriptorsLock:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setForYouPrefetchGroup:(id)arg1;
- (void)setSavedStoriesCount:(long long)arg1;

@end
