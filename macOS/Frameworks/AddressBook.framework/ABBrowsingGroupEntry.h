//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABGroupEntry.h>

@class ABAccount, ABAddressBook;

__attribute__((visibility("hidden")))
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

