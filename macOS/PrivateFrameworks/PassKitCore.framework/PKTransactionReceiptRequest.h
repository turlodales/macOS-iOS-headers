//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, NSString, NSURL;

@interface PKTransactionReceiptRequest : PKPaymentWebServiceRequest
{
    NSURL *_receiptProviderURL;
    NSString *_authorizationToken;
    NSData *_signature;
    NSString *_receiptIdentifier;
    NSString *_conversationIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(readonly, nonatomic) NSString *receiptIdentifier; // @synthesize receiptIdentifier=_receiptIdentifier;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSString *authorizationToken; // @synthesize authorizationToken=_authorizationToken;
@property(readonly, nonatomic) NSURL *receiptProviderURL; // @synthesize receiptProviderURL=_receiptProviderURL;
- (id)_urlRequest;
- (id)initWithReceiptProviderURL:(id)arg1 authorizationToken:(id)arg2 signature:(id)arg3 receiptIdentifier:(id)arg4;

@end

