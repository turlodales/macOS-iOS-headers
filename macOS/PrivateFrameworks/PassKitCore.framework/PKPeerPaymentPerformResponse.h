//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentStatusResponse.h>

@class NSUUID;

@interface PKPeerPaymentPerformResponse : PKPeerPaymentStatusResponse
{
    NSUUID *_deviceScoreIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSUUID *deviceScoreIdentifier; // @synthesize deviceScoreIdentifier=_deviceScoreIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2;
- (id)initWithData:(id)arg1;

@end

