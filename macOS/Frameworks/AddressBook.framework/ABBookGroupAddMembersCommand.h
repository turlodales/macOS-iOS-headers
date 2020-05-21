//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABBookUndoableCommand.h"

@class ABAddressBook, ABLazyGroup, NSMutableDictionary, NSSet;

@interface ABBookGroupAddMembersCommand : ABBookUndoableCommand
{
    ABAddressBook *_addressBook;
    ABLazyGroup *_lazyGroup;
    NSSet *_newMemberUids;
    NSMutableDictionary *_memberUidToLazyParentGroupUids;
    BOOL ignoresGuardianRestrictions;
}

- (void)setIgnoresGuardianRestrictions:(BOOL)arg1;
- (BOOL)ignoresGuardianRestrictions;
- (id)newMembers;
- (void)addMemberToPreviousGroup:(id)arg1;
- (void)addMembersToPreviousGroups;
- (void)removeMembersFromGroup:(id)arg1;
- (void)executeUndo;
- (void)addMembersToGroup:(id)arg1;
- (void)setMemberUidToLazyParentGroupUids;
- (void)execute;
@property(readonly, copy) NSSet *newMemberUids;
- (id)actionName;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 group:(id)arg2 newMemberUids:(id)arg3;

@end

