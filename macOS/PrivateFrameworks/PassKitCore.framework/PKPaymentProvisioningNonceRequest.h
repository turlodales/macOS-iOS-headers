//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@interface PKPaymentProvisioningNonceRequest : PKPaymentWebServiceRequest
{
    unsigned long long _nonceType;
}

@property(nonatomic) unsigned long long nonceType; // @synthesize nonceType=_nonceType;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithNonceType:(unsigned long long)arg1;

@end

