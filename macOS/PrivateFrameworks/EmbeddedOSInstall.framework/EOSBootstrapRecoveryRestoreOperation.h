//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmbeddedOSInstall/EOSRestoreOperation.h>

@interface EOSBootstrapRecoveryRestoreOperation : EOSRestoreOperation
{
}

- (void)_recoveryRestoreWithDevice:(id)arg1;
- (void)_dfuRestoreWithDevice:(id)arg1;
- (id)activityObject;
- (double)deviceDisconnectionTimeout;
- (double)deviceConnectionTimeout;
- (long long)restorePhase;
- (long long)expectedDeviceMode;
- (void)deviceConnected:(id)arg1;

@end

