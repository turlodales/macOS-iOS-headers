//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSURL;

@interface PKAccountWebServiceCertificatesRequest : PKAccountWebServiceRequest
{
    NSURL *_baseURL;
    unsigned long long _destination;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end

