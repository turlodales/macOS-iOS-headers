//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFSessionInterface.h"

@class NFPeerPaymentRequest, NSData;

@protocol NFPeerPaymentSessionInterface <NFSessionInterface>
- (oneway void)performPeerPayment:(NSData *)arg1 request:(NFPeerPaymentRequest *)arg2 callback:(void (^)(NFPeerPaymentResponse *, NSError *))arg3;
- (oneway void)deleteKey:(void (^)(NSError *))arg1;
@end

