//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABCommand.h"

@class ABGroup, ABPerson, NSData;

@interface ABMeCommand : ABCommand
{
    ABGroup *_selectedGroup;
    ABPerson *_currentMe;
    ABPerson *_newMe;
    NSData *_currentMeImageData;
    NSData *_newMeImageData;
}

- (BOOL)doIt;
- (void)undoIt;
- (void)redoIt;
- (void)dealloc;
- (id)initWithGroup:(id)arg1 newMe:(id)arg2 addressBook:(id)arg3;

@end

