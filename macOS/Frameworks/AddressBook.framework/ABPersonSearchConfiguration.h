//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPersonListSearchController;

@interface ABPersonSearchConfiguration : NSObject
{
    ABPersonListSearchController *_controller;
    BOOL _shouldSelectBestEntry;
}

- (void).cxx_destruct;
@property BOOL shouldSelectBestEntry; // @synthesize shouldSelectBestEntry=_shouldSelectBestEntry;
- (void)incrementSearchCount;
- (void)searchForString:(id)arg1;
- (void)searchFieldDidChange:(id)arg1;
- (void)fetchContacts;
- (id)initWithController:(id)arg1;

@end

