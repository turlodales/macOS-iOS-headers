//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, TKTokenAuthOperation, TKTokenKeyAlgorithm, TKTokenKeyExchangeParameters, TKTokenSession;

@protocol TKTokenSessionDelegate <NSObject>

@optional
- (NSData *)tokenSession:(TKTokenSession *)arg1 performKeyExchangeWithPublicKey:(NSData *)arg2 usingKey:(id)arg3 algorithm:(TKTokenKeyAlgorithm *)arg4 parameters:(TKTokenKeyExchangeParameters *)arg5 error:(id *)arg6;
- (NSData *)tokenSession:(TKTokenSession *)arg1 decryptData:(NSData *)arg2 usingKey:(id)arg3 algorithm:(TKTokenKeyAlgorithm *)arg4 error:(id *)arg5;
- (NSData *)tokenSession:(TKTokenSession *)arg1 signData:(NSData *)arg2 usingKey:(id)arg3 algorithm:(TKTokenKeyAlgorithm *)arg4 error:(id *)arg5;
- (BOOL)tokenSession:(TKTokenSession *)arg1 supportsOperation:(long long)arg2 usingKey:(id)arg3 algorithm:(TKTokenKeyAlgorithm *)arg4;
- (TKTokenAuthOperation *)tokenSession:(TKTokenSession *)arg1 beginAuthForOperation:(long long)arg2 constraint:(id)arg3 error:(id *)arg4;
@end

