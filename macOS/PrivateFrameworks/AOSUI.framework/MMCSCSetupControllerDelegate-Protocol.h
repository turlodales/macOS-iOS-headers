//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AOSUI/NSObject-Protocol.h>

@class MMCSCSetupController;

@protocol MMCSCSetupControllerDelegate <NSObject>

@optional
- (void)mmCSCSetupControllerDidCancel:(MMCSCSetupController *)arg1;
- (void)mmCSCSetupControllerDidOptOut:(MMCSCSetupController *)arg1;
- (void)mmCSCSetupControllerDidEnd:(MMCSCSetupController *)arg1;
@end

