//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginAuthentication.h>

@interface HMDRemoteLoginInitiatorAuthentication : HMDRemoteLoginAuthentication
{
    id <HMDRemoteLoginInitiatorAuthenticationDelegate> _delegate;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <HMDRemoteLoginInitiatorAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleAuthenticationResponse:(id)arg1 error:(id)arg2;
- (int)loginType;
- (void)authenticate;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5;

@end

