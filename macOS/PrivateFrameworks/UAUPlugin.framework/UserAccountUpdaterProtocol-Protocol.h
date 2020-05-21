//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

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

