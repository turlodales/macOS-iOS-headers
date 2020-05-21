//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import "NSGestureRecognizerDelegate.h"
#import "NSScrubberDataSource.h"
#import "NSScrubberDelegate.h"
#import "NSTouchBarColorListPickerPressAndHoldPopUpDelegate.h"
#import "NSTouchBarColorPickerView.h"

@class NSArray, NSColor, NSColorList, NSPressGestureRecognizer, NSScrubber, NSString, NSTouchBarColorListPickerPressAndHoldPopUp;

__attribute__((visibility("hidden")))
@interface NSTouchBarColorListPicker : NSControl <NSScrubberDelegate, NSScrubberDataSource, NSTouchBarColorListPickerPressAndHoldPopUpDelegate, NSGestureRecognizerDelegate, NSTouchBarColorPickerView>
{
    NSColorList *_colorList;
    NSColor *_currentColor;
    NSColor *_preTrackingColor;
    id _autounbinder;
    NSScrubber *_scrubber;
    NSPressGestureRecognizer *_longPressRecognizer;
    NSTouchBarColorListPickerPressAndHoldPopUp *_pressAndHoldPopUp;
    NSArray *_allowedColorSpaces;
    long long _scrubberHighlightCount;
    BOOL _continuous;
    BOOL _allowsAlpha;
    BOOL _supportsPressAndHoldVariants;
}

+ (id)thumbnailWithSize:(struct CGSize)arg1 inView:(id)arg2;
+ (long long)preferredColorSwatchType;
+ (id)keyPathsForValuesAffectingCurrentColor;
+ (BOOL)automaticallyNotifiesObserversOfCurrentColor;
+ (id)keyPathsForValuesAffectingSelectedColorKey;
+ (BOOL)accessibilityIsSingleCelled;
@property BOOL supportsPressAndHoldVariants; // @synthesize supportsPressAndHoldVariants=_supportsPressAndHoldVariants;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)isContinuous;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)popUpDidEndColorSelection:(id)arg1 cancelled:(BOOL)arg2;
- (void)popUpDidDismiss:(id)arg1;
- (void)popUp:(id)arg1 didHighlightColor:(id)arg2 withKey:(id)arg3 atIndex:(long long)arg4;
- (void)longPress:(id)arg1;
- (void)didCancelInteractingWithScrubber:(id)arg1;
- (void)didFinishInteractingWithScrubber:(id)arg1;
- (void)_didFinishInteractingWithScrubber:(id)arg1 cancelled:(BOOL)arg2;
- (void)didBeginInteractingWithScrubber:(id)arg1;
- (void)scrubber:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)scrubber:(id)arg1 didHighlightItemAtIndex:(long long)arg2;
- (void)_setCurrentColorWithScrubberIndex:(unsigned long long)arg1;
- (long long)_effectiveSelectedColorIndex;
- (id)_colorKeyForColorAtIndex:(long long)arg1;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (unsigned long long)_effectiveColorCount;
- (struct CGSize)intrinsicContentSize;
@property(copy) NSArray *allowedColorSpaces; // @synthesize allowedColorSpaces=_allowedColorSpaces;
@property BOOL allowsAlpha; // @synthesize allowsAlpha=_allowsAlpha;
- (void)_setCurrentColor:(id)arg1 updateScrubber:(BOOL)arg2;
@property(copy) NSColor *currentColor; // @synthesize currentColor=_currentColor;
@property(copy) NSString *selectedColorKey;
- (void)_colorListDidChange:(id)arg1;
@property(retain) NSColorList *colorList;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_autounbinder;
- (oneway void)release;

// Remaining properties
@property SEL action;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property __weak id target;

@end

