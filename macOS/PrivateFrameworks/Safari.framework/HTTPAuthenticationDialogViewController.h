//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/TabDialogViewController.h>

#import <Safari/HTTPAuthenticationDialogViewDelegate-Protocol.h>

@class HTTPAuthenticationDialogConfiguration;

__attribute__((visibility("hidden")))
@interface HTTPAuthenticationDialogViewController : TabDialogViewController <HTTPAuthenticationDialogViewDelegate>
{
}

- (void)didDismissHTTPAuthenticationDialogView:(id)arg1;
- (void)didSubmitHTTPAuthenticationDialogView:(id)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithDialogConfiguration:(id)arg1 slot:(CDStruct_497cfc99)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 dialogConfiguration:(id)arg3 slot:(CDStruct_497cfc99)arg4;

// Remaining properties
@property(readonly, nonatomic) HTTPAuthenticationDialogConfiguration *configuration; // @dynamic configuration;

@end

