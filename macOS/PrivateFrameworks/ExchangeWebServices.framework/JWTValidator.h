//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface JWTValidator : NSObject
{
    NSString *_rawHeader;
    NSString *_rawPayload;
    NSString *_rawSignature;
    NSData *_encodedHeader;
    NSData *_encodedPayload;
    NSData *_encodedSignature;
    id _headerJSONObject;
    id _payloadJSONObject;
}

+ (id)log;
+ (id)base64URLDecode:(id)arg1;
+ (id)base64URLEncode:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id payloadJSONObject; // @synthesize payloadJSONObject=_payloadJSONObject;
@property(retain, nonatomic) id headerJSONObject; // @synthesize headerJSONObject=_headerJSONObject;
@property(retain, nonatomic) NSData *encodedSignature; // @synthesize encodedSignature=_encodedSignature;
@property(retain, nonatomic) NSData *encodedPayload; // @synthesize encodedPayload=_encodedPayload;
@property(retain, nonatomic) NSData *encodedHeader; // @synthesize encodedHeader=_encodedHeader;
@property(retain, nonatomic) NSString *rawSignature; // @synthesize rawSignature=_rawSignature;
@property(retain, nonatomic) NSString *rawPayload; // @synthesize rawPayload=_rawPayload;
@property(retain, nonatomic) NSString *rawHeader; // @synthesize rawHeader=_rawHeader;
- (BOOL)_signatureValid:(id)arg1;
- (BOOL)idTokenValidWithJWKS:(id)arg1 withAudience:(id)arg2 withIssuer:(id)arg3;
- (BOOL)personalAccount;
- (id)initWithIdToken:(id)arg1;
- (id)init;

@end

