//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginInitiatorAuthentication.h>

@class ACAccount;

@interface HMDRemoteLoginInitiatorCompanionAuthentication : HMDRemoteLoginInitiatorAuthentication
{
    ACAccount *_account;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_authenticate;
- (void)authenticate;
- (int)loginType;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 account:(id)arg6;

@end

