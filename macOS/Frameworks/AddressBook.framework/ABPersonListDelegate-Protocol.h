//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABPersonListController, NSArray;
@protocol NSDraggingInfo;

@protocol ABPersonListDelegate <NSObject>
- (BOOL)shouldDrawHorizontalSeparators;
- (void)setCardEditingMode:(BOOL)arg1;
- (void)toggleCardEditingMode:(id)arg1;
- (BOOL)personList:(ABPersonListController *)arg1 acceptGroupsDrop:(id <NSDraggingInfo>)arg2;
- (BOOL)personList:(ABPersonListController *)arg1 acceptFilenamesDrop:(id <NSDraggingInfo>)arg2;
- (unsigned long long)personList:(ABPersonListController *)arg1 validateGroupsDrop:(id <NSDraggingInfo>)arg2;
- (unsigned long long)personList:(ABPersonListController *)arg1 validateFilenamesDrop:(id <NSDraggingInfo>)arg2;
- (void)personListDidDoubleClick:(ABPersonListController *)arg1;
- (void)personList:(ABPersonListController *)arg1 didSelectEntries:(NSArray *)arg2;

@optional
- (void)personListDidChangeAddressBook:(ABPersonListController *)arg1;
- (void)entriesChangedInPersonList:(ABPersonListController *)arg1;
- (BOOL)personList:(ABPersonListController *)arg1 deleteContactsWithoutConfirmationWithSender:(id)arg2;
- (BOOL)personList:(ABPersonListController *)arg1 ignoreContactsWithSender:(id)arg2;
- (BOOL)personList:(ABPersonListController *)arg1 rejectContactsWithSender:(id)arg2;
- (BOOL)personList:(ABPersonListController *)arg1 deleteContactsWithSender:(id)arg2;
- (BOOL)personList:(ABPersonListController *)arg1 canDeleteContactsWithSender:(id)arg2;
@end

