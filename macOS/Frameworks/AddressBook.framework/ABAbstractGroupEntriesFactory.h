//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABGroupEntriesFactory-Protocol.h>

@class ABAddressBook, NSArray, NSString;

@interface ABAbstractGroupEntriesFactory : NSObject <ABGroupEntriesFactory>
{
    NSArray *_accounts;
    ABAddressBook *_addressBook;
}

@property(retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(retain) NSArray *accounts; // @synthesize accounts=_accounts;
- (id)makeGroupEntriesWithHidingPolicy:(id)arg1;
- (id)makeGroupEntries;
- (id)sortAccounts:(id)arg1;
- (void)setAccounts:(id)arg1 withAddressBook:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

