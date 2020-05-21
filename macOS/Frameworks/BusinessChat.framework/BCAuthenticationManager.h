//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class BCAuthenticationRequest, NSString;

@interface BCAuthenticationManager : NSObject <NSURLSessionDelegate>
{
    BCAuthenticationRequest *_authenticationRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BCAuthenticationRequest *authenticationRequest; // @synthesize authenticationRequest=_authenticationRequest;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)accessTokenForData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exchangeCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)processFragments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)processQueryItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTokenWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAuthenticationRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

