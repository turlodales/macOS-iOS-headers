//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSSet;
@protocol ABCardViewMultiValue;

@protocol ABFaceTimeDataSource <NSObject>
- (id <ABCardViewMultiValue>)emailAddresses;
- (id <ABCardViewMultiValue>)phoneNumbers;
- (BOOL)isDirectoryResult;
- (BOOL)isTransient;
- (NSSet *)uniqueIdentifiers;
@end

