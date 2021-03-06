//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceTermsDataRequest : PKAccountWebServiceRequest
{
    NSURL *_baseURL;
    NSString *_accountIdentifier;
    NSString *_termsIdentifier;
    NSString *_termsDataFormat;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *termsDataFormat; // @synthesize termsDataFormat=_termsDataFormat;
@property(copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end

