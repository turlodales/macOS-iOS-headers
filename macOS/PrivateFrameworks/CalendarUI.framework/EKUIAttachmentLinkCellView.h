//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

#import "CalUITextFieldEditorDelegate.h"
#import "EKUITokenFieldDelegate.h"

@class EKAttachment, EKUIAttachmentGadget, EKUITokenField, NSFont, NSString;

@interface EKUIAttachmentLinkCellView : NSTableCellView <EKUITokenFieldDelegate, CalUITextFieldEditorDelegate>
{
    EKAttachment *_attachment;
    EKUITokenField *_tokenField;
    EKUIAttachmentGadget *_gadget;
}

+ (struct CGSize)fileIconSize;
- (void).cxx_destruct;
@property __weak EKUIAttachmentGadget *gadget; // @synthesize gadget=_gadget;
@property(retain) EKUITokenField *tokenField; // @synthesize tokenField=_tokenField;
@property(retain, nonatomic) EKAttachment *attachment; // @synthesize attachment=_attachment;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (void)doubleClickOnTokenCell:(id)arg1;
- (void)copyAttachment:(id)arg1;
- (void)_openAttachmentURL:(id)arg1;
- (void)openAttachment:(id)arg1;
- (void)_copyAttachmentLink:(id)arg1;
@property(retain, nonatomic) NSFont *font;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

