//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData, NSURL;

@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse
{
    NSURL *_passURL;
    NSData *_credentialAttestation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *credentialAttestation; // @synthesize credentialAttestation=_credentialAttestation;
@property(readonly, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
- (id)initWithData:(id)arg1;

@end

