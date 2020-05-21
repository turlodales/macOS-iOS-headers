//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABGroupDropHelper.h"

@class CNContactPickerView, NSString;

@interface CNContactPickerGroupDropHelper : NSObject <ABGroupDropHelper>
{
    id <NSDraggingInfo> _draggingInfo;
    CNContactPickerView *_pickerView;
    NSString *_selectedEntryIdentifier;
    NSString *_destinationEntryIdentifier;
}

- (void).cxx_destruct;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)acceptDropWithIgnoresGuardianRestrictions:(BOOL)arg1;
- (BOOL)acceptDrop;
- (unsigned long long)validateDrop;
- (id)initWithDraggingInfo:(id)arg1 pickerView:(id)arg2 selectedEntryIdentifier:(id)arg3 destinationEntryIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

