//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceCancelPaymentRequest : PKAccountWebServiceRequest
{
    NSString *_accountIdentifier;
    NSString *_paymentReferenceIdentifier;
    NSURL *_baseURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *paymentReferenceIdentifier; // @synthesize paymentReferenceIdentifier=_paymentReferenceIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end

