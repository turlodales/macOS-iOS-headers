//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface WFSSHKeyPair : NSObject <NSSecureCoding>
{
    NSNumber *_keySize;
    NSString *_comment;
    NSData *_privateKeyData;
    NSData *_publicKeyData;
    Class _format;
}

+ (BOOL)parsePublicKey:(id)arg1 type:(id *)arg2 data:(id *)arg3 comment:(id *)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id *)arg3;
+ (id)defaultKeyComment;
+ (id)knownHostFileURL;
+ (void)setSharedKeyPair:(id)arg1;
+ (id)sharedKeyPair;
+ (id)keyFormats;
- (void).cxx_destruct;
@property(retain, nonatomic) Class format; // @synthesize format=_format;
@property(readonly, nonatomic) NSData *publicKeyData; // @synthesize publicKeyData=_publicKeyData;
@property(readonly, nonatomic) NSData *privateKeyData; // @synthesize privateKeyData=_privateKeyData;
@property(readonly, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) NSNumber *keySize; // @synthesize keySize=_keySize;
- (id)publicKeyFingerprintWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedType;
- (id)publicKey;
- (id)privateKeyPEM;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(Class)arg1 privateKeyData:(id)arg2 publicKeyData:(id)arg3 keySize:(id)arg4 comment:(id)arg5;

@end

