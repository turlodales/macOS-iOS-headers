//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString;

@interface PKPaymentPassesResponse : PKPaymentWebServiceResponse
{
    NSArray *_passURLs;
    NSString *_lastUpdatedTag;
    NSArray *_devicePassSerialNumbers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *devicePassSerialNumbers; // @synthesize devicePassSerialNumbers=_devicePassSerialNumbers;
@property(copy, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(copy, nonatomic) NSArray *passURLs; // @synthesize passURLs=_passURLs;
- (id)initWithData:(id)arg1;

@end

