//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

@class NSColorSpace;

__attribute__((visibility("hidden")))
@interface NSColorPickerColorSpacePopUp : NSPopUpButton
{
    NSColorSpace *_selectedColorSpace;
    long long _selectedEntryMode;
}

+ (id)preferredColorSpaces;
@property long long selectedEntryMode;
@property(retain) NSColorSpace *selectedColorSpace;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_colorSpaceForColorDisplaysAsGeneric:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (void)colorPanelColorDidChange:(id)arg1;
- (void)_setNeedsDisplayInRectWithFocus:(struct CGRect)arg1;
- (BOOL)_isShowingKeyboardFocus;
- (void)doneSendingPopUpAction:(id)arg1;
- (void)_selectColorProfile:(id)arg1;
- (void)_selectEntryMode:(id)arg1;
- (void)willPopUpNotification:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInitNSColorPickerColorSpacePopUp;

@end

