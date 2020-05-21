//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSDecimalNumber, NSString;

@interface PKPeerPaymentRequestTokenRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_recipientIdentifier;
    NSDecimalNumber *_amount;
    NSString *_currency;
    NSString *_senderAddress;
    NSString *_recipientPhoneOrEmail;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *recipientPhoneOrEmail; // @synthesize recipientPhoneOrEmail=_recipientPhoneOrEmail;
@property(copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;

@end

