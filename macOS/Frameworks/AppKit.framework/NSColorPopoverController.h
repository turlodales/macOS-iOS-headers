//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSColorPickerMatrixViewDelegate.h"

@class NSButton, NSColorPickerMatrixView, NSPopover, NSString;

__attribute__((visibility("hidden")))
@interface NSColorPopoverController : NSViewController <NSColorPickerMatrixViewDelegate>
{
    NSColorPickerMatrixView *_topBarMatrixView;
    NSColorPickerMatrixView *_colorMatrixView;
    NSButton *_colorPanelButton;
    NSPopover *_popover;
    id _delegate;
}

+ (id)defaultTopBarColorList;
@property NSPopover *popover; // @synthesize popover=_popover;
@property id delegate; // @synthesize delegate=_delegate;
- (id)matrixColorPicker:(id)arg1 highlightColorForColor:(id)arg2;
- (void)matrixColorPicker:(id)arg1 selectedColor:(id)arg2;
- (void)_showColorPanel:(id)arg1;
@property NSButton *colorPanelButton;
@property NSColorPickerMatrixView *colorMatrixView;
@property NSColorPickerMatrixView *topBarMatrixView; // @synthesize topBarMatrixView=_topBarMatrixView;
- (void)_loadViewIfNecessary;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

