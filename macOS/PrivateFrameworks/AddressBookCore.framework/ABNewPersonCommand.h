//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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

