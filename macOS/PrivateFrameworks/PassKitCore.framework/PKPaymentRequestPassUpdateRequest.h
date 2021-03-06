//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPassUpgradeRequest, PKPaymentPass;

@interface PKPaymentRequestPassUpdateRequest : PKPaymentWebServiceRequest
{
    PKPaymentPass *_pass;
    PKPassUpgradeRequest *_request;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKPassUpgradeRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithPaymentPass:(id)arg1 updateRequest:(id)arg2;

@end

