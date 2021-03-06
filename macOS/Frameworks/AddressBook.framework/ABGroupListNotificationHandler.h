//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAbstractGroupEntriesFactory, ABAddressBook, ABGroupEntriesList, NSArray;
@protocol ABAccountCollection;

@interface ABGroupListNotificationHandler : NSObject
{
    ABAddressBook *_addressBook;
    ABGroupEntriesList *_groupEntriesList;
    ABAbstractGroupEntriesFactory *_groupEntriesFactory;
    id <ABAccountCollection> _accountCollection;
    NSArray *_emptyAccountIdentifiers;
}

- (BOOL)doesExternalNotificationContainGroupChanges:(id)arg1;
- (BOOL)doesLocalNotificationContainEmptyAccountsChanges:(id)arg1;
- (BOOL)doesLocalNotificationContainGroupChanges:(id)arg1;
- (BOOL)didEmptyAccountsChange;
- (id)emptyAccountIdentifiers;
- (void)rebuildGroupEntriesListWithAccounts:(id)arg1;
- (void)handleDefaultAccountChangedNotification:(id)arg1;
- (void)handleAccountConfigurationChangeNotification:(id)arg1;
- (void)handleAccountRepositoryChangeNotification:(id)arg1;
- (void)handleExternalAddressBookNotification:(id)arg1;
- (void)handleLocalAddressBookNotification:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 groupEntriesList:(id)arg2 groupEntriesFactory:(id)arg3 accountCollection:(id)arg4;

@end

