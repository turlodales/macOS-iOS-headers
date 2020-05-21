//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AOSUI/MMService.h>

#import "MMServicePreflightProtocol.h"
#import "MMWebKitViewControllerDelegate.h"

@class MMWebKitViewController, NSString;

@interface MMNotesService : MMService <MMWebKitViewControllerDelegate, MMServicePreflightProtocol>
{
    MMWebKitViewController *_webKitViewController;
    BOOL _addressCreationPending;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL addressCreationPending; // @synthesize addressCreationPending=_addressCreationPending;
@property(retain, nonatomic) MMWebKitViewController *webKitViewController; // @synthesize webKitViewController=_webKitViewController;
- (void)_closeModalWindow;
- (void)mmWebKitViewControllerDidDismiss:(id)arg1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitViewControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitViewControllerDidSucceed:(id)arg1;
- (void)mmWebKitViewControllerDidCancel:(id)arg1;
- (void)_propertiesChanged:(id)arg1;
- (void)disableNotesAddressListeners;
- (void)enableNotesAddressListeners;
- (void)_serviceFailed:(id)arg1;
- (BOOL)_hasEmailAddress;
- (void)_showClientFailureSheet:(id)arg1;
- (void)_showMergeConfirmationSheet:(id)arg1;
- (BOOL)shouldEnableOnLogin;
- (BOOL)isDataService;
- (void)setEnabled:(BOOL)arg1 creating:(BOOL)arg2 withWindow:(id)arg3;
- (id)icon;
- (id)initWithServiceID:(id)arg1 forAccount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

