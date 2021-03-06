//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, GKLeaderboard, NSArray, NSFont;

@interface GKDashboardLeaderboardScoreDataSource : GKCollectionDataSource
{
    BOOL _showingMoreScores;
    BOOL _forceInitialShowMore;
    GKLeaderboard *_leaderboard;
    id _timeScopeTarget;
    SEL _timeScopeAction;
    GKGameRecord *_gameRecord;
    NSArray *_scores;
    long long _visibleItemCount;
}

@property(nonatomic) BOOL forceInitialShowMore; // @synthesize forceInitialShowMore=_forceInitialShowMore;
@property(nonatomic, getter=isShowingMoreScores) BOOL showingMoreScores; // @synthesize showingMoreScores=_showingMoreScores;
@property(nonatomic) long long visibleItemCount; // @synthesize visibleItemCount=_visibleItemCount;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) SEL timeScopeAction; // @synthesize timeScopeAction=_timeScopeAction;
@property(nonatomic) id timeScopeTarget; // @synthesize timeScopeTarget=_timeScopeTarget;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)sectionHeaderButtonPressed:(id)arg1;
@property(readonly, nonatomic) NSFont *sectionHeaderFont;
- (id)sectionHeaderText;
- (id)itemForIndexPath:(id)arg1;
- (double)preferredCollectionHeight;
- (long long)itemCount;
@property(readonly, nonatomic) BOOL needsShowcaseCell; // @dynamic needsShowcaseCell;
- (BOOL)hasFriendsButton;
- (BOOL)isShowcaseIndexPath:(id)arg1;
- (BOOL)isShowMoreIndexPath:(id)arg1;
@property(readonly, nonatomic) BOOL needsShowMoreCell; // @dynamic needsShowMoreCell;
- (void)revealMoreItemsInCollectionView:(id)arg1 section:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showMoreInCollectionView:(id)arg1 section:(long long)arg2;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupCollectionView:(id)arg1;
@property(nonatomic) long long timeScope; // @dynamic timeScope;
@property(nonatomic) long long playerScope; // @dynamic playerScope;
- (void)dealloc;
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;

@end

