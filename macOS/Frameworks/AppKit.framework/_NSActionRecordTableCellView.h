//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "NSPopoverDelegate.h"

@class NSButton, NSPopUpButton, NSPopover, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface _NSActionRecordTableCellView : NSTableCellView <NSPopoverDelegate>
{
    NSTextField *_selectorTextField;
    NSTextField *_senderTextField;
    NSButton *_addButton;
    NSPopover *_popover;
    NSButton *_actionRadioButton;
    NSButton *_actionNameRadioButton;
    NSTextField *_labelTextField;
    NSPopUpButton *_imagePopUp;
    NSButton *_defaultCheckbox;
    long long _tag;
}

- (void)_save:(id)arg1;
- (void)_selectActionType:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)_add:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

