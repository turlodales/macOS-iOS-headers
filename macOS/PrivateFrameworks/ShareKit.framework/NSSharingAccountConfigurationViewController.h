//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSSharingPlugInViewControllerProtocol.h"

@class NSButton, NSImage, NSImageView, NSString, NSTextField, NSTouchBar;

@interface NSSharingAccountConfigurationViewController : NSViewController <NSSharingPlugInViewControllerProtocol>
{
    NSImageView *logoImageView;
    NSImageView *iconImageView;
    NSTextField *setupTextField;
    NSButton *cancelButton;
    NSButton *configureButton;
    NSTouchBar *configurationTouchBar;
}

- (void).cxx_destruct;
@property(readonly) NSButton *configureButton; // @synthesize configureButton;
@property(readonly) NSButton *cancelButton; // @synthesize cancelButton;
@property(readonly) NSTextField *setupTextField; // @synthesize setupTextField;
@property(readonly) NSImageView *iconImageView; // @synthesize iconImageView;
@property(readonly) NSImageView *logoImageView; // @synthesize logoImageView;
- (id)makeTouchBar;
- (void)viewDidAppear;
- (void)closeAndConfigure:(id)arg1;
- (void)close:(id)arg1;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)serviceNotConfiguredError;
- (id)nibBundle;
- (id)nibName;
- (void)setNoConfiguredAccountImage;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSImage *previewImage;
@property(getter=isPreviewImageVisible) BOOL previewImageVisible;
@property(readonly) Class superclass;

@end

