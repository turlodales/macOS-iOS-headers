//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSImageView, NSPopover, NSStackView, NSTextField;

__attribute__((visibility("hidden")))
@interface _NSDebugTouchBarTableCellView : NSTableCellView
{
    NSTextField *_secondaryLabel;
    NSButton *_quickLookButton;
    NSImageView *_statusImageView;
    NSStackView *_statusStack;
    NSPopover *_inspectorPopover;
}

@property(retain) NSTextField *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)showInspectorPopover:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

