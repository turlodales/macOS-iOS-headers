//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPContext, NSDictionary, NSString;

@protocol CDPDSecureBackupProxy <NSObject>
@property(retain, nonatomic) CDPContext *cdpContext;
- (void)uncacheAllSecrets;
- (void)cacheRecoveryKey:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)enableWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)disableWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (NSDictionary *)recoverWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (BOOL)enableWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (BOOL)disableWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (NSDictionary *)accountInfoWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithContext:(CDPContext *)arg1;
@end

