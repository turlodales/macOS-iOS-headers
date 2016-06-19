//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABPersonListDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABPersonListControllerDelegateWrapper : NSObject <ABPersonListDelegate>
{
    id <ABPersonListDelegate> _delegate;
}

@property(readonly) id <ABPersonListDelegate> delegate; // @synthesize delegate=_delegate;
- (void)personListDidChangeAddressBook:(id)arg1;
- (void)entriesChangedInPersonList:(id)arg1;
- (BOOL)personList:(id)arg1 deleteContactsWithoutConfirmationWithSender:(id)arg2;
- (BOOL)personList:(id)arg1 rejectContactsWithSender:(id)arg2;
- (BOOL)personList:(id)arg1 deleteContactsWithSender:(id)arg2;
- (BOOL)personList:(id)arg1 canDeleteContactsWithSender:(id)arg2;
- (BOOL)shouldDrawHorizontalSeparators;
- (void)setCardEditingMode:(BOOL)arg1;
- (void)toggleCardEditingMode:(id)arg1;
- (BOOL)personList:(id)arg1 acceptGroupsDrop:(id)arg2;
- (BOOL)personList:(id)arg1 acceptFilenamesDrop:(id)arg2;
- (unsigned long long)personList:(id)arg1 validateGroupsDrop:(id)arg2;
- (unsigned long long)personList:(id)arg1 validateFilenamesDrop:(id)arg2;
- (void)personListDidDoubleClick:(id)arg1;
- (void)personList:(id)arg1 didSelectEntries:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

