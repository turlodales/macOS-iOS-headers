//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/TabDialogViewController.h>

#import "AlertDialogViewDelegate.h"

@class AlertDialogConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface AlertDialogViewController : TabDialogViewController <AlertDialogViewDelegate>
{
}

+ (long long)alertDialogResultFromInteger:(long long)arg1;
- (id)_makeResponseWithResult:(long long)arg1 promptResponse:(id)arg2;
- (void)didRejectAlertDialogView:(id)arg1;
- (void)didDismissAlertDialogView:(id)arg1;
- (void)didAcceptAlertDialogView:(id)arg1 withPromptResponse:(id)arg2;
- (void)viewDidAppear;
- (void)viewDidLoad;
@property(readonly, copy, nonatomic) NSString *dialogMessage;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 dialogConfiguration:(id)arg3 slot:(CDStruct_497cfc99)arg4;
- (id)initWithDialogConfiguration:(id)arg1 slot:(CDStruct_497cfc99)arg2;

// Remaining properties
@property(readonly, nonatomic) AlertDialogConfiguration *configuration; // @dynamic configuration;

@end

