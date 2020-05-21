//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/CNUIUndoableCommand.h>

@class NSArray, NSString;

@interface CNUIAggregateUndoableCommand : CNUIUndoableCommand
{
    NSString *_actionName;
    NSArray *_undoableCommands;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *undoableCommands; // @synthesize undoableCommands=_undoableCommands;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
- (void)executeUndoWithCNSaveRequest:(id)arg1;
- (void)executeWithCNSaveRequest:(id)arg1;
- (id)initWithUndoableCommands:(id)arg1 actionName:(id)arg2 contactStore:(id)arg3 ignoresGuardianRestrictions:(BOOL)arg4;
- (id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2;

@end

