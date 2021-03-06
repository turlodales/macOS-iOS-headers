//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/ABCommand.h>

@class ABGroup, ABPerson, NSDictionary;

@interface ABNewPersonCommand : ABCommand
{
    ABPerson *_newPerson;
    ABGroup *_selectedGroup;
    NSDictionary *_personProperties;
}

- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (void)dealloc;
- (id)initWithNewPerson:(id)arg1 selectedGroup:(id)arg2 addressBook:(id)arg3;

@end

