//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGHighlightItemEnrichmentRule.h"

@class NSString, PGManager;

@interface PGMonthEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>
{
    PGManager *_manager;
    id <PGHighlightItemModelReader> _modelReader;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PGHighlightItemModelReader> modelReader; // @synthesize modelReader=_modelReader;
@property(readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
- (id)sortedItemsByWeekOfMonthFromItems:(id)arg1 sortDescriptors:(id)arg2;
- (id)bestItemsFromSortedItemsByWeekOfMonth:(id)arg1 previouslySelectedItemsCountByWeek:(id)arg2 maximumNumberOfItems:(unsigned long long)arg3 sortDescriptors:(id)arg4;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(CDUnknownBlockType)arg2 maximumNumberOfVisibleItems:(unsigned long long)arg3 maximumNumberOfVisibleRegularItems:(unsigned long long)arg4;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_sampleAssets:(id)arg1 withSize:(unsigned long long)arg2;
- (id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (id)fallbackKeyAssetWithHighlightItemList:(id)arg1;
- (id)firstKeyAssetWithHighlightItemList:(id)arg1;
- (id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (double)promotionScoreForHighlightItemList:(id)arg1;
- (id)initWithManager:(id)arg1 modelReader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

