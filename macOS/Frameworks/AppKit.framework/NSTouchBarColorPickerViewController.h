//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTouchBarColorPickerSwitcherDelegate.h"

@class NSArray, NSColor, NSColorList, NSString, NSView<NSTouchBarColorPickerView>, _NSTouchBarColorPickerContainerView;

@interface NSTouchBarColorPickerViewController : NSViewController <NSTouchBarColorPickerSwitcherDelegate>
{
    long long _currentMode;
    NSColor *_currentColor;
    id <NSTouchBarColorPickerViewControllerDelegate> _delegate;
    NSColorList *_colorList;
    NSArray *_allowedColorSpaces;
    BOOL _allowsAlpha;
    BOOL _supportsPressAndHoldVariants;
}

+ (id)keyPathsForValuesAffecting_currentPreferredPickerView;
+ (id)keyPathsForValuesAffectingWorkingColor;
+ (id)keyPathsForValuesAffecting_swatchIsPrearmed;
+ (id)keyPathsForValuesAffecting_shouldSwatchBeHidden;
- (void).cxx_destruct;
@property(copy) NSArray *allowedColorSpaces; // @synthesize allowedColorSpaces=_allowedColorSpaces;
@property BOOL colorListSupportsPressAndHoldVariants; // @synthesize colorListSupportsPressAndHoldVariants=_supportsPressAndHoldVariants;
@property(retain) NSColorList *colorList; // @synthesize colorList=_colorList;
@property BOOL allowsAlpha; // @synthesize allowsAlpha=_allowsAlpha;
@property(copy) NSColor *currentColor; // @synthesize currentColor=_currentColor;
- (void)_pickerDidCancelTracking;
- (void)_pickerDidEndTracking;
- (void)_pickerWillBeginTracking;
- (void)_pickColor:(id)arg1;
@property(readonly) NSView<NSTouchBarColorPickerView> *_currentPreferredPickerView;
@property(readonly, copy) NSColor *workingColor;
@property(readonly) BOOL _swatchIsPrearmed;
@property(readonly) BOOL _shouldSwatchBeHidden;
- (void)switcher:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)loadView;
@property long long currentMode;
@property __weak id <NSTouchBarColorPickerViewControllerDelegate> delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithInitialColor:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)_viewControllerSupports10_10Features;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) _NSTouchBarColorPickerContainerView *view; // @dynamic view;

@end

