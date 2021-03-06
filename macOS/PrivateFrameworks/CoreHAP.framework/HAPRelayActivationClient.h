//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayActivationClientDelegate;

@interface HAPRelayActivationClient : HMFObject
{
    id <HAPRelayActivationClientDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <HAPRelayActivationClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3;
- (void)requestChallenge;
- (void)close;
- (void)open;

@end

