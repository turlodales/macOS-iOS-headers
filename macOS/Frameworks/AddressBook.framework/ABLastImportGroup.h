//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABSpecialGroup.h"

@interface ABLastImportGroup : ABSpecialGroup
{
}

+ (id)sharedLastImportGroup;
+ (id)specialGroupForAddressBook:(id)arg1;
- (BOOL)isDeletable;
- (BOOL)isRenamable;
- (BOOL)canDeletePeople;
- (id)uniqueIdForDrag;
- (BOOL)removeSubgroup:(id)arg1;
- (BOOL)addSubgroup:(id)arg1;
- (id)subgroups;
- (id)contactMembershipPredicate;
- (id)members;
- (id)membersAndSubgroups;
- (id)valueForProperty:(id)arg1;

@end

