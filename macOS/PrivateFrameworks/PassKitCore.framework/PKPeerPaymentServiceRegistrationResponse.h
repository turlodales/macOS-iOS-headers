//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPeerPaymentServiceRegistrationResponse : PKPeerPaymentWebServiceResponse
{
    NSString *_deviceIdentifier;
    NSString *_peerPaymentServicesPushTopic;
    NSURL *_peerPaymentServiceURL;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *peerPaymentServiceURL; // @synthesize peerPaymentServiceURL=_peerPaymentServiceURL;
@property(readonly, copy, nonatomic) NSString *peerPaymentServicesPushTopic; // @synthesize peerPaymentServicesPushTopic=_peerPaymentServicesPushTopic;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)initWithData:(id)arg1;

@end

