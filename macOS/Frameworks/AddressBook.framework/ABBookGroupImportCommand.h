//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABBookUndoableCommand.h"

@class ABGroupEntriesList, ABImportRecordFactory, ABLazyGroup, ABRecordContext, NSArray, NSMutableArray;

@interface ABBookGroupImportCommand : ABBookUndoableCommand
{
    ABRecordContext *_sourceContext;
    NSArray *_sourceGroups;
    NSArray *_sourcePersonUids;
    ABRecordContext *_destinationContext;
    ABLazyGroup *_destinationGroup;
    ABGroupEntriesList *_groupEntriesList;
    ABImportRecordFactory *_importRecordFactory;
    NSMutableArray *_importedGroups;
    NSMutableArray *_importedPeopleUids;
    BOOL ignoresGuardianRestrictions;
}

- (void)setIgnoresGuardianRestrictions:(BOOL)arg1;
- (BOOL)ignoresGuardianRestrictions;
- (void)removeRecords:(id)arg1;
- (void)undoImportedGroups;
- (void)undoImportedPeople;
- (void)executeUndo;
- (void)rememberImportedPeopleForUndo:(id)arg1;
- (void)rememberImportedGroupsForUndo:(id)arg1;
- (void)makeImportedGroupsSubgroupsOfDestinationGroup:(id)arg1;
- (void)makeImportedPeopleMembersOfDestinationGroup:(id)arg1;
- (void)addMembers:(id)arg1 toGroup:(id)arg2;
- (id)importGroup:(id)arg1;
- (id)importGroup:(id)arg1 withImportedPeople:(id)arg2;
- (id)importGroupsWithImportedPeople:(id)arg1;
- (id)importPerson:(id)arg1;
- (id)importPeople:(id)arg1;
- (void)addPeopleFromSourceGroups:(id)arg1;
- (void)addPeopleFromSourcePersonUid:(id)arg1;
- (id)allPeopleToImport;
- (id)importAllPeople;
- (void)execute;
- (id)actionName;
- (void)dealloc;
- (id)initWithSourceRecordContext:(id)arg1 sourcePersonUids:(id)arg2 sourceGroupUids:(id)arg3 destinationRecordContext:(id)arg4 destinationGroup:(id)arg5 groupEntriesList:(id)arg6;

@end

