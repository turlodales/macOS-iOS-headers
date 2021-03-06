/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomeStatusItemManager : HFItemManager {
    NSTimer * _invalidationTimer;
    unsigned long long  _latestOverallLoadingState;
    long long  _latestOverallPriority;
    unsigned long long  _maxStatusItemCount;
    HMRoom * _room;
    HFStaticItem * _showDetailsItem;
    HFStatusItemProvider * _statusItemProvider;
}

@property (nonatomic, retain) NSTimer *invalidationTimer;
@property (nonatomic) unsigned long long latestOverallLoadingState;
@property (nonatomic) long long latestOverallPriority;
@property (nonatomic) unsigned long long maxStatusItemCount;
@property (nonatomic, retain) HMRoom *room;
@property (nonatomic, retain) HFStaticItem *showDetailsItem;
@property (nonatomic, retain) HFStatusItemProvider *statusItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (void)_invalidateItemsIfNecessary;
- (id)_itemsToHideInSet:(id)arg1;
- (long long)_overallPriority;
- (unsigned long long)_overflowStatusItemCount;
- (bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (id)_showDetailsItemTitle;
- (void)_updateInvalidationTimer;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithRoom:(id)arg1 maxStatusItems:(unsigned long long)arg2 delegate:(id)arg3;
- (id)invalidationTimer;
- (unsigned long long)latestOverallLoadingState;
- (long long)latestOverallPriority;
- (id)matchingItemForHomeKitObject:(id)arg1;
- (unsigned long long)maxStatusItemCount;
- (id)room;
- (void)setInvalidationTimer:(id)arg1;
- (void)setLatestOverallLoadingState:(unsigned long long)arg1;
- (void)setLatestOverallPriority:(long long)arg1;
- (void)setMaxStatusItemCount:(unsigned long long)arg1;
- (void)setRoom:(id)arg1;
- (void)setShowDetailsItem:(id)arg1;
- (void)setStatusItemProvider:(id)arg1;
- (id)showDetailsItem;
- (id)statusItemProvider;
- (id)statusItems;
- (void)updateNeedsInvalidation:(bool)arg1 forStatusItem:(id)arg2;

@end
