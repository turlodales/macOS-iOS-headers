//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableSet, NSSet;

@interface WBSHistoryDeletionPlan : NSObject
{
    id <WBSHistoryStore> _store;
    NSSet *_excludedItems;
    NSSet *_excludedVisits;
    NSMutableSet *_discoveredItemsToDelete;
    BOOL _wasPrepared;
    NSSet *_triggeringItems;
    NSSet *_triggeringVisits;
    NSSet *_discoveredVisitsToDelete;
    NSMapTable *_updatedLastVisitsByItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL wasPrepared; // @synthesize wasPrepared=_wasPrepared;
@property(readonly, nonatomic) NSMapTable *updatedLastVisitsByItem; // @synthesize updatedLastVisitsByItem=_updatedLastVisitsByItem;
@property(readonly, nonatomic) NSSet *discoveredVisitsToDelete; // @synthesize discoveredVisitsToDelete=_discoveredVisitsToDelete;
@property(readonly, nonatomic) NSSet *discoveredItemsToDelete; // @synthesize discoveredItemsToDelete=_discoveredItemsToDelete;
@property(readonly, nonatomic) NSSet *triggeringVisits; // @synthesize triggeringVisits=_triggeringVisits;
@property(readonly, nonatomic) NSSet *triggeringItems; // @synthesize triggeringItems=_triggeringItems;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2 relatedVisitKey:(id)arg3 relatedVisitsQueryFactory:(CDUnknownBlockType)arg4;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2;
- (void)_prepareWithTriggeringItems:(id)arg1 triggeringVisits:(id)arg2;
@property(readonly, nonatomic) NSMapTable *allVisitsToDeleteByItemExcludingItemsBeingDeleted;
@property(readonly, nonatomic) NSSet *allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
@property(readonly, nonatomic) NSSet *allItemsToDelete;
- (id)initWithSQLiteStore:(id)arg1 triggeringVisits:(id)arg2 updatedLastVisitsByItem:(id)arg3;
- (id)initWithSQLiteStore:(id)arg1 discoveredItemsToDelete:(id)arg2;
- (id)initWithSQLiteStore:(id)arg1 triggeringVisits:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4;
- (id)initWithSQLiteStore:(id)arg1 triggeringItems:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4 reason:(long long)arg5;

@end

