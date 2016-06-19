//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABBookUndoableCommand.h>

@class ABAccount, ABAddressBook, ABGroupEntriesList, NSString;

@interface ABBookRenameGroupCommand : ABBookUndoableCommand
{
    ABAddressBook *_addressBook;
    NSString *_groupUid;
    NSString *_oldName;
    NSString *_newName;
    ABGroupEntriesList *_groupEntriesList;
    ABAccount *_account;
}

+ (id)commandWithAddressBook:(id)arg1 group:(id)arg2 newName:(id)arg3 groupEntriesList:(id)arg4;
- (id)validGroup;
- (id)group;
- (void)setGroupName:(id)arg1;
- (void)executeUndo;
- (void)execute;
- (id)actionName;
- (void)dealloc;

@end

