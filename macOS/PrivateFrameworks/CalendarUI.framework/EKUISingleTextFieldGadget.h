//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUIIsolateableSingleViewGadget.h>

#import <CalendarUI/CalUIResizingTextFieldDelegate-Protocol.h>

@class EKUIResizingTextField, NSColor, NSString;

@interface EKUISingleTextFieldGadget : EKUIIsolateableSingleViewGadget <CalUIResizingTextFieldDelegate>
{
    EKUIResizingTextField *_textField;
    NSColor *_previousFontColor;
}

- (void).cxx_destruct;
@property(retain) NSColor *previousFontColor; // @synthesize previousFontColor=_previousFontColor;
@property(retain) EKUIResizingTextField *textField; // @synthesize textField=_textField;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (void)setActiveKeyboardHover:(BOOL)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (void)setObject:(id)arg1;
- (void)updateEvent;
- (id)control;
- (id)placeholderText;
- (id)initWithViewController:(id)arg1;
- (id)initWithNoTextFieldWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

