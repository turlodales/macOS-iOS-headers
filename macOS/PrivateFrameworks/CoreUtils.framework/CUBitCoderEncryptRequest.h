//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CUBitCoderEncryptRequest : NSObject
{
    NSData *_aad;
    unsigned long long _authTagLength;
    NSData *_data;
    NSData *_nonce;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long authTagLength; // @synthesize authTagLength=_authTagLength;
@property(copy, nonatomic) NSData *aad; // @synthesize aad=_aad;

@end

