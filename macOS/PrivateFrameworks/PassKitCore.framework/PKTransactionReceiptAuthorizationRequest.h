//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKTransactionReceiptAuthorizationRequest : PKPaymentWebServiceRequest
{
    NSString *_receiptServiceIdentifier;
    NSString *_receiptIdentifier;
    NSString *_cardNumberSuffix;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cardNumberSuffix; // @synthesize cardNumberSuffix=_cardNumberSuffix;
@property(readonly, nonatomic) NSString *receiptIdentifier; // @synthesize receiptIdentifier=_receiptIdentifier;
@property(readonly, nonatomic) NSString *receiptServiceIdentifier; // @synthesize receiptServiceIdentifier=_receiptServiceIdentifier;
- (void)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 webService:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithReceiptServiceIdentifier:(id)arg1 receiptIdentifier:(id)arg2 cardNumberSuffix:(id)arg3;

@end

