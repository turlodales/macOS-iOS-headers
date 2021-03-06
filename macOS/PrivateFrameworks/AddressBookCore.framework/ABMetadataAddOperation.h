//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/ABMetadataOperation.h>

@class ABAddressBook, NSArray;

@interface ABMetadataAddOperation : ABMetadataOperation
{
    NSArray *_uniqueIds;
    ABAddressBook *_addressBookForReading;
}

- (void).cxx_destruct;
- (void)_doMain;
- (void)main;
- (void)_writeMetaDataForPeople:(id)arg1 withLock:(BOOL)arg2;
- (int)metadataJobType;
- (id)initWithMetadataManager:(id)arg1 recordUniqueIds:(id)arg2;

@end

