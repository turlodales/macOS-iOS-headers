//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKRemotePaymentRequest;

@interface PKPaymentAuthorizationContinuitySendParam : PKPaymentAuthorizationStateParam
{
    PKRemotePaymentRequest *_remotePaymentRequest;
}

+ (id)paramWithRemotePaymentRequest:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PKRemotePaymentRequest *remotePaymentRequest; // @synthesize remotePaymentRequest=_remotePaymentRequest;

@end

