//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/ABAbstractGroupEntriesFactory.h>

@interface ABDefaultGroupEntriesFactory : ABAbstractGroupEntriesFactory
{
    BOOL _includeLastImport;
}

@property BOOL includeLastImport; // @synthesize includeLastImport=_includeLastImport;
- (id)makeGroupEntriesWithHidingPolicy:(id)arg1;
- (id)makeGroupEntries;

@end

