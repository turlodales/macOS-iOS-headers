//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginInitiatorAuthentication.h>

@class NSDictionary;

@interface HMDRemoteLoginInitiatorProxyAuthentication : HMDRemoteLoginInitiatorAuthentication
{
    NSDictionary *_authResults;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *authResults; // @synthesize authResults=_authResults;
- (void)_authenticate;
- (void)authenticate;
- (int)loginType;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 authResults:(id)arg6;

@end

