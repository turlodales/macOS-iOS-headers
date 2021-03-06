//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, NSUUID;

@interface PKPeerPaymentSubmitDeviceScoreIdentifiersRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_paymentIdentifier;
    NSUUID *_requestDeviceScoreIdentifier;
    NSUUID *_sendDeviceScoreIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSUUID *sendDeviceScoreIdentifier; // @synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier;
@property(copy, nonatomic) NSUUID *requestDeviceScoreIdentifier; // @synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier;
@property(copy, nonatomic) NSString *paymentIdentifier; // @synthesize paymentIdentifier=_paymentIdentifier;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end

