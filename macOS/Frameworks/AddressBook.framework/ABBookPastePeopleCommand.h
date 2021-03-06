//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ABBookUndoableCommand.h"

@class ABImportRecordFactory, ABRecordContext, NSArray, NSDictionary, NSMutableArray;

@interface ABBookPastePeopleCommand : ABBookUndoableCommand
{
    ABRecordContext *_recordContext;
    NSArray *_groups;
    NSDictionary *_pasteboardDictionary;
    NSMutableArray *_addedPersonUids;
    ABImportRecordFactory *_importRecordFactory;
    BOOL ignoresGuardianRestrictions;
}

- (void)setIgnoresGuardianRestrictions:(BOOL)arg1;
- (BOOL)ignoresGuardianRestrictions;
- (void)removePeople:(id)arg1;
- (id)addedPeople;
- (void)executeUndo;
- (void)rememberPersonUidsOfPeople:(id)arg1;
- (void)addMembers:(id)arg1 toGroup:(id)arg2;
- (void)addMembersToGroups:(id)arg1;
- (void)removeIdentifiers:(id)arg1 forProperty:(id)arg2;
- (void)removeAllPropertyIdentifiers:(id)arg1;
- (id)massagePersonDictionary:(id)arg1;
- (id)addPersonWithDictionary:(id)arg1;
- (BOOL)personIsMemberOfAllGroups:(id)arg1;
- (id)personWithUid:(id)arg1 fromExistingPeople:(id)arg2 orPersonDictionary:(id)arg3;
- (id)peopleFromPasteboardDictionary;
- (void)execute;
- (id)pastedUids;
- (id)actionName;
- (void)dealloc;
- (id)initWithRecordContext:(id)arg1 groups:(id)arg2 pasteboardDictionary:(id)arg3;
- (id)initWithAccount:(id)arg1 addressBook:(id)arg2 groups:(id)arg3 pasteboardDictionary:(id)arg4;

@end

