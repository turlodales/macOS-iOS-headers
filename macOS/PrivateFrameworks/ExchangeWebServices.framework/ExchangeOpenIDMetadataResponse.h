//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString;

@interface ExchangeOpenIDMetadataResponse : NSObject
{
    NSString *_tokenRequestURI;
    NSString *_authorizationURI;
    NSString *_jwsURI;
    NSString *_issuer;
    NSDictionary *_data;
    long long _statusCode;
    NSError *_error;
    NSString *_errorMessage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *issuer; // @synthesize issuer=_issuer;
@property(readonly, nonatomic) NSString *jwsURI; // @synthesize jwsURI=_jwsURI;
@property(readonly, nonatomic) NSString *authorizationURI; // @synthesize authorizationURI=_authorizationURI;
@property(readonly, nonatomic) NSString *tokenRequestURI; // @synthesize tokenRequestURI=_tokenRequestURI;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

