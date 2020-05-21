//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying>
{
    unsigned long long _method;
    unsigned long long _digitalSignatureAlgorithm;
}

@property(nonatomic) unsigned long long digitalSignatureAlgorithm; // @synthesize digitalSignatureAlgorithm=_digitalSignatureAlgorithm;
@property(nonatomic) unsigned long long method; // @synthesize method=_method;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL isDigitalSignature;
@property(readonly, nonatomic) BOOL isCertificate;
- (id)description;
- (id)initWithDigitalSignathure:(unsigned long long)arg1;
- (id)initWithDigitalSignature:(unsigned long long)arg1;
- (id)initWithMethod:(unsigned long long)arg1;

@end

