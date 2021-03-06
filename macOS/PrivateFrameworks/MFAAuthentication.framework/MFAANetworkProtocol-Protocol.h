//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary, NSLocale, NSString;

@protocol MFAANetworkProtocol
- (void)verifyPairingWithToken:(NSData *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)removePairingWithToken:(NSData *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)addPairingWithToken:(NSData *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)getCachedStatusForCertSerial:(NSData *)arg1 issuerSeq:(NSData *)arg2 ppid:(NSString *)arg3 withReply:(void (^)(int, NSError *))arg4;
- (void)validateCertSerial:(NSData *)arg1 issuerSeq:(NSData *)arg2 ppid:(NSString *)arg3 withReply:(void (^)(int, NSError *))arg4;
- (void)requestMetadataForCertSerial:(NSData *)arg1 issuerSeq:(NSData *)arg2 ppid:(NSString *)arg3 requestedLocale:(NSLocale *)arg4 requestInfo:(NSDictionary *)arg5 withReply:(void (^)(NSString *, NSLocale *, NSDictionary *, NSError *))arg6;
- (void)confirmActivationForToken:(NSData *)arg1 withUUID:(NSString *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)requestActivationForToken:(NSData *)arg1 withUUID:(NSString *)arg2 withReply:(void (^)(NSData *, NSError *))arg3;
- (void)requestMetadataForToken:(NSData *)arg1 withUUID:(NSString *)arg2 requestedLocale:(NSLocale *)arg3 requestInfo:(NSDictionary *)arg4 withReply:(void (^)(NSString *, NSLocale *, NSDictionary *, NSError *))arg5;
@end

