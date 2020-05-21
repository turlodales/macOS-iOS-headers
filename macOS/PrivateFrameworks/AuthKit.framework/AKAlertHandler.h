//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AKAlertHandler : NSObject
{
    id <AKAlertHandlerUIProvider> _uiProvider;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property __weak id <AKAlertHandlerUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
- (id)_URLWithString:(id)arg1 byAppendingParameters:(id)arg2;
- (void)_openUpgradeAccountSecurityLevelWithBundleID:(id)arg1;
- (void)_openPasscodeSetup;
- (void)_openSpyglass;
- (id)notificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4;
- (BOOL)showAlert:(id)arg1 primaryAction:(CDUnknownBlockType)arg2 altAction:(CDUnknownBlockType)arg3 cancelAction:(CDUnknownBlockType)arg4;
- (BOOL)showAlert:(id)arg1 primaryAction:(CDUnknownBlockType)arg2 altAction:(CDUnknownBlockType)arg3;
- (void)_showAlertForPasscodeSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAlertForUnderageAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_showAlertForCannotFindServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAlertForInsufficientSecurityLevelWithBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_showAlertForUnverifiedEmailWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAlertForAccountNotSupportedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAlertForMissingAppleAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAlertForInvalidContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)showAlertForError:(id)arg1 withAuthKitAccount:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)showAlertForError:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

