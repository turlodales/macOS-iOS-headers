//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UAUPlugin/NSObject-Protocol.h>

@class NSArray, UpdaterSessionParameters;

@protocol UserAccountUpdaterProtocol <NSObject>
- (BOOL)includePluginInUpdateSession:(UpdaterSessionParameters *)arg1;

@optional
- (void)updateAccount;
- (void)updateAccountWithPrivilege;
- (BOOL)allowsAsyncExecution;
- (NSArray *)mustRunAfterBundleIDs;
- (BOOL)shouldRunForNewUsers;
@end

