//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/ABCNFetchRequest.h>

@class NSPredicate;

@interface ABCNGroupFetchRequest : ABCNFetchRequest
{
    NSPredicate *_predicate;
    BOOL _mutableObjects;
}

@property(nonatomic) BOOL mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void)executeFetchWithDataMapper:(id)arg1 observer:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

