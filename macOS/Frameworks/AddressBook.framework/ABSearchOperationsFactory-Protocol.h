//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABAddressBook, NSArray, NSString;
@protocol ABSearchOperationDelegate;

@protocol ABSearchOperationsFactory <NSObject>
- (NSArray *)searchOperationsForString:(NSString *)arg1 addressBook:(ABAddressBook *)arg2 delegate:(id <ABSearchOperationDelegate>)arg3;
@end

