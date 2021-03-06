//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/DimmingViewDelegate-Protocol.h>
#import <Safari/TabDialogInstallationTarget-Protocol.h>

@class BrowserViewController, NSString, NSView, TabDialogInstaller, WBSPair;

__attribute__((visibility("hidden")))
@interface BrowserContainerViewController : NSViewController <DimmingViewDelegate, TabDialogInstallationTarget>
{
    NSView *_firstResponderViewBeforeDimmingViewPresentation;
    WBSPair *_currentURLToUsageState;
    TabDialogInstaller *_tabDialogInstaller;
}

- (void).cxx_destruct;
- (void)uninstallTabDialogViewAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)transplantTabDialogView:(id)arg1 andDimmingView:(id)arg2 placement:(long long)arg3;
- (void)installTabDialogView:(id)arg1 andDimmingView:(id)arg2 placement:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) BOOL isWindowMainWindow;
@property(readonly, nonatomic) BOOL isBrowserViewVisible;
- (void)updateUsageTrackingInformationAfterShowingDigitalHealthOverlay;
- (void)updateUsageTrackingInformation;
- (BOOL)_isShowingPagePreview;
@property(readonly, nonatomic) BOOL isWindowClosing;
@property(readonly, nonatomic) BOOL didFireCloseEvent;
@property(readonly, nonatomic) BOOL isShowingTabDialog;
- (void)resetTabDialogInstaller;
- (void)uninstallModalDialogDimmingViewAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dimContentViewForModalDialogPresentation;
- (void)didFinishShowingDialog;
- (void)willShowDialog;
- (void)prepareForModalDialogPresentation;
@property(readonly, nonatomic) NSView *tabDialogHostingView;
@property(readonly, nonatomic) TabDialogInstaller *tabDialogInstaller; // @synthesize tabDialogInstaller=_tabDialogInstaller;
@property(readonly, nonatomic) BrowserViewController *browserViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

