//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSURLCompletionMatchData-Protocol.h>

@class NSMutableArray, NSString, WebBookmark;
@protocol WBSURLCompletionMatchData;

__attribute__((visibility("hidden")))
@interface URLCompletionMatchBookmarkListData : NSObject <WBSURLCompletionMatchData>
{
    NSMutableArray *_bookmarks;
    id <WBSURLCompletionMatchData> _historyMatchData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <WBSURLCompletionMatchData> historyMatchData; // @synthesize historyMatchData=_historyMatchData;
@property(readonly, nonatomic) BOOL shouldPreload;
- (BOOL)matchesAutocompleteTrigger:(id)arg1;
- (float)topSitesScoreForPageTitleAtTime:(double)arg1;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) BOOL lastVisitWasFailure;
@property(readonly, nonatomic) BOOL containsBookmark;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *originalURLString;
- (id)matchDataByMergingWithMatchData:(id)arg1;
@property(readonly, nonatomic) WebBookmark *bookmark;
- (id)initWithBookmarks:(id)arg1 andHistoryMatchData:(id)arg2;
- (id)initWithBookmarks:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long visitCount;

@end

