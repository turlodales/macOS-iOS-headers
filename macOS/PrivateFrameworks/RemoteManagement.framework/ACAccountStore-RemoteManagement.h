//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (RemoteManagement)
- (id)rm_remoteManagementAccountForIdentifier:(id)arg1;
- (id)rm_remoteManagementAccountForDSID:(id)arg1;
- (id)rm_remoteManagementAccountForAltDSID:(id)arg1;
- (id)_rm_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1 altDSID:(id)arg2;
- (id)_rm_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1;
- (id)rm_iTunesAccountForRemoteManagingAccountWithAltDSID:(id)arg1;
- (id)rm_iTunesAccountForRemoteManagingAccount;
- (id)rm_iCloudAccountForRemoteManagingAccountWithAltDSID:(id)arg1;
- (id)rm_iCloudAccountForRemoteManagingAccount;
- (id)rm_RemoteManagementAccounts;
- (id)rm_RemoteManagementAccountType;
@end

