//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate;

@interface MSDecodeOptions : NSObject
{
    BOOL _verifySignatures;
    BOOL _verifySigners;
    NSArray *_signerPolicies;
    NSDate *_verifyTime;
    struct __SecIdentity *_identity;
    NSData *_key;
    NSData *_LAContext;
}

- (void).cxx_destruct;
@property(retain) NSData *LAContext; // @synthesize LAContext=_LAContext;
@property(retain) NSData *key; // @synthesize key=_key;
@property struct __SecIdentity *identity; // @synthesize identity=_identity;
@property(retain) NSDate *verifyTime; // @synthesize verifyTime=_verifyTime;
@property(retain) NSArray *signerPolicies; // @synthesize signerPolicies=_signerPolicies;
@property BOOL verifySigners; // @synthesize verifySigners=_verifySigners;
@property BOOL verifySignatures; // @synthesize verifySignatures=_verifySignatures;
- (void)dealloc;
- (id)initWithDecryptionKey:(id)arg1;
- (id)initWithDecryptionIdentity:(struct __SecIdentity *)arg1;
- (id)init;

@end

