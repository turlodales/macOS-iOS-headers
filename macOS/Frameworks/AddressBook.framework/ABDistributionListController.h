//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowRestoration.h"

@class ABPeoplePickerView, NSArray, NSPopUpButton, NSString, NSTextField, NSView, NSWindow;

@interface ABDistributionListController : NSObject <NSWindowRestoration>
{
    NSWindow *window;
    NSPopUpButton *labelPopUp;
    ABPeoplePickerView *peoplePickerView;
    NSView *accessoryView;
    NSTextField *_informativeText;
    NSString *_property;
    NSArray *_labels;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sharedDistributionListController;
@property __weak NSTextField *informativeText; // @synthesize informativeText=_informativeText;
- (void)setGroup:(id)arg1;
- (void)showSheetForWindow:(id)arg1;
- (void)labelSelected:(id)arg1;
- (void)help:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)dismissSheet;
- (void)windowWillClose:(id)arg1;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)windowFrameChanged:(id)arg1;
- (void)awakeFromNib;
- (void)_reloadLabelPopUp;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

