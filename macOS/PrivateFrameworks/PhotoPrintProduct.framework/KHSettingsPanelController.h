//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

@class NSButton, NSPopover, UXView;

@interface KHSettingsPanelController : UXViewController
{
    UXView *_settingsView;
    NSPopover *_popover;
    NSButton *_okButton;
    NSButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) NSButton *okButton; // @synthesize okButton=_okButton;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak UXView *settingsView; // @synthesize settingsView=_settingsView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

