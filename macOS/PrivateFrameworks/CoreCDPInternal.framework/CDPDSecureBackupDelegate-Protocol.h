//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CDPDSecureBackupContext, CDPDSecureBackupController, NSString;

@protocol CDPDSecureBackupDelegate
- (void)promptForLocalSecretWithCompletion:(void (^)(CDPLocalSecret *, NSError *))arg1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (BOOL)synchronizeCircleViewsForSecureBackupContext:(CDPDSecureBackupContext *)arg1;
- (NSString *)circlePeerIDForSecureBackupController:(CDPDSecureBackupController *)arg1;
@end

