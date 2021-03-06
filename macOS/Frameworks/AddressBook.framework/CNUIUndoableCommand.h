//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ABBookUndoableCommand.h"

#import <AddressBook/CNUISaveRequestCommand-Protocol.h>

@class CNContactStore, NSString;

@interface CNUIUndoableCommand : ABBookUndoableCommand <CNUISaveRequestCommand>
{
    BOOL _ignoresGuardianRestrictions;
    CNContactStore *_contactStore;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL ignoresGuardianRestrictions; // @synthesize ignoresGuardianRestrictions=_ignoresGuardianRestrictions;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)visit:(id)arg1;
- (void)didExecute;
- (void)willExecute;
- (void)executeUndoWithCNSaveRequest:(id)arg1;
- (void)executeRedoWithCNSaveRequest:(id)arg1;
- (void)executeWithCNSaveRequest:(id)arg1;
- (void)executeUndo;
- (void)executeRedo;
- (void)execute;
- (id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

