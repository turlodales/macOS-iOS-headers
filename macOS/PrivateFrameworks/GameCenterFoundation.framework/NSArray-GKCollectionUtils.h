//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (GKCollectionUtils)
+ (id)_gkArrayWithIndexSet:(id)arg1;
- (id)_gkFoldWithInitialValue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_gkFirstObject;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkValuesForKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkSubarraysByKeyWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkFilterWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkMapWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkMapConcurrentlyWithBlock:(CDUnknownBlockType)arg1;
- (id)_gkOrderedSet;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)_gkValidatePlayersForReturnFromAPI;
- (id)_gkInternalsFromPlayers;
- (id)_gkPlayersFromInternals;
- (id)_gkPlayersIDsFromPlayers;
- (id)_gkIncompletePlayersFromPlayerIDs;
- (id)_gkGuestPlayersFromPlayers;
- (id)_gkNonGuestPlayersFromPlayers;
@end

