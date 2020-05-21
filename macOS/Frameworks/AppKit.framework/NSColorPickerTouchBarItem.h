//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTouchBarItem.h>

#import "NSGestureRecognizerDelegate.h"
#import "NSTouchBarColorPickerViewControllerDelegate.h"
#import "NSTouchBarItemTypePopover.h"

@class NSArray, NSColor, NSColorList, NSImage, NSString, NSTouchBar, NSTouchBarItemOverlay, NSView;

@interface NSColorPickerTouchBarItem : NSTouchBarItem <NSTouchBarItemTypePopover, NSGestureRecognizerDelegate, NSTouchBarColorPickerViewControllerDelegate>
{
    id _overlay;
    NSString *_customizationLabel;
    NSColor *_color;
    id _target;
    SEL _action;
    long long _mode;
    NSView *_view;
    NSString *_buttonTitle;
    NSImage *_buttonImage;
    NSColorList *_colorList;
    id _autounbinder;
    NSArray *_allowedColorSpaces;
    BOOL _showsAlpha;
    BOOL _supportsPressAndHoldVariants;
    BOOL _enabled;
}

+ (BOOL)automaticallyNotifiesObserversOfColor;
+ (id)keyPathsForValuesAffectingStoredColor;
+ (id)colorPickerWithIdentifier:(id)arg1 buttonTitle:(id)arg2;
+ (id)colorPickerWithIdentifier:(id)arg1 buttonImage:(id)arg2;
+ (id)strokeColorPickerWithIdentifier:(id)arg1;
+ (id)textColorPickerWithIdentifier:(id)arg1;
+ (id)colorPickerWithIdentifier:(id)arg1;
+ (id)keyPathsForValuesAffectingPresented;
- (void).cxx_destruct;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
@property BOOL colorListSupportsPressAndHoldVariants; // @synthesize colorListSupportsPressAndHoldVariants=_supportsPressAndHoldVariants;
@property BOOL showsAlpha; // @synthesize showsAlpha=_showsAlpha;
- (void)_pickColor:(id)arg1;
@property(copy) NSColor *color;
@property(readonly, copy) NSColor *storedColor;
@property(copy) NSArray *allowedColorSpaces;
@property(retain) NSColorList *colorList; // @synthesize colorList=_colorList;
@property long long mode;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id)view;
@property(copy) NSString *customizationLabel; // @synthesize customizationLabel=_customizationLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 buttonTitle:(id)arg2 buttonImage:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_showPressHoldPopup:(id)arg1;
@property(readonly) BOOL isPresented;
- (void)dismissPopover:(id)arg1;
- (void)showPopover:(id)arg1;
@property(readonly) NSTouchBar *popoverTouchBar;
@property(readonly) BOOL showsCloseButton;
@property(readonly) BOOL supportsPressAndHold;
- (long long)_type;
@property(readonly) NSTouchBarItemOverlay *_overlay;
- (void)_pressAndHoldDidCancelTracking;
- (void)_pressAndHoldDidEndTracking;
- (void)_pressAndHoldWillBeginTracking;
- (void)_pickPressAndHoldColor:(id)arg1;
- (void)colorPicker:(id)arg1 didChangeCurrentModeFrom:(long long)arg2 to:(long long)arg3;
- (void)colorPickerViewControllerDidCancel:(id)arg1;
- (void)colorPickerViewControllerDidEnd:(id)arg1;
- (void)colorPickerViewControllerWillBegin:(id)arg1;
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2;
- (void)_updateButtonImagePosition;
- (void)setButtonTitle:(id)arg1;
- (id)buttonTitle;
- (void)setButtonImage:(id)arg1;
- (id)buttonImage;
- (id)_autounbinder;
- (oneway void)release;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

