//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate;

@interface CKPublicKey : NSObject
{
    NSData *_publicKey;
    long long _version;
    NSDate *_expiration;
    NSData *_certData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *certData; // @synthesize certData=_certData;
@property(readonly, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
- (BOOL)hasExpired;
- (id)initWithPublicKey:(id)arg1 version:(long long)arg2 expiration:(id)arg3 certificateData:(id)arg4;

@end

