//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/ABGroupEntry.h>

@class ABAccount, ABAddressBook;

@interface ABBrowsingGroupEntry : ABGroupEntry
{
}

- (BOOL)shouldImportToDefaultAccount;
- (id)importFilesHelperWithFactory:(id)arg1 filenames:(id)arg2 showConfirmation:(BOOL)arg3;
- (id)pasteHelperWithFactory:(id)arg1;
- (id)actionScope;
- (id)selectHelperWithFactory:(id)arg1;
- (BOOL)canSelect;
- (BOOL)canDrag;
@property(readonly, retain) ABAddressBook *addressBook;
@property(readonly, retain) ABAccount *account;

@end

