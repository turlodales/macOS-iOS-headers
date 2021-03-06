//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileKeyBag/NSObject-Protocol.h>

@class NSData, NSDictionary, NSFileHandle, NSString, UMPersonaMachPort;

@protocol KBXPCProtocol <NSObject>
- (void)Event:(int)arg1;
- (void)replacePersonaMachPortVoucher:(UMPersonaMachPort *)arg1 withAccountID:(NSString *)arg2 generationSet:(_Bool)arg3 forPid:(int)arg4 withReply:(void (^)(UMPersonaMachPort *, NSError *))arg5;
- (void)listAllUserSessionIDsWithAReply:(void (^)(NSArray *, NSError *))arg1;
- (void)removeUserSession:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)migrateUserSession:(NSDictionary *)arg1 fromfilePath:(NSString *)arg2 withSecret:(NSFileHandle *)arg3 oldSize:(unsigned long long)arg4 withOpaqueData:(NSData *)arg5 reply:(void (^)(NSDictionary *, NSError *))arg6;
- (void)createUserSession:(NSDictionary *)arg1 withSecret:(NSFileHandle *)arg2 oldSize:(unsigned long long)arg3 withOpaqueData:(NSData *)arg4 reply:(void (^)(NSDictionary *, NSError *))arg5;
- (void)unloadUserSession:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)loadUserSession:(NSDictionary *)arg1 withSecret:(NSFileHandle *)arg2 oldSize:(unsigned long long)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)getPolicyStatus:(NSDictionary *)arg1 withUUID:(NSData *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)bindToKEK:(NSFileHandle *)arg1 secretSize:(unsigned long long)arg2 withUID:(unsigned int)arg3 withHandle:(int)arg4 reply:(void (^)(NSError *))arg5;
- (void)setUserUUID:(NSFileHandle *)arg1 secretSize:(unsigned long long)arg2 withUID:(unsigned int)arg3 withUUID:(NSData *)arg4 withHandle:(int)arg5 reply:(void (^)(NSError *))arg6;
- (void)getDeviceLockState:(int)arg1 needsExtended:(_Bool)arg2 withReply:(void (^)(int, NSError *))arg3;
- (void)passcodeUnlockFailedWithReply:(void (^)(NSError *))arg1;
- (void)passcodeUnlockSuccessWithReply:(void (^)(NSError *))arg1;
- (void)passcodeUnlockStartWithReply:(void (^)(NSError *))arg1;
- (void)getLockSateInfoforUser:(int)arg1 WithReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)migrationWithReply:(void (^)(NSError *))arg1;
- (void)isKeyRollingInProgresswithreply:(void (^)(int, NSError *))arg1;
- (void)stashDestroywithReply:(void (^)(NSError *))arg1;
- (void)stashLoadwithReply:(void (^)(NSData *, NSError *))arg1;
- (void)stashVerifywithReply:(void (^)(int, NSError *))arg1;
- (void)stashCommitwithReply:(void (^)(NSError *))arg1;
- (void)stashCreatewithSecret:(NSFileHandle *)arg1 secrestSize:(unsigned long long)arg2 withMode:(int)arg3 reply:(void (^)(NSError *))arg4;
- (void)stopBackupSessionwithReply:(void (^)(NSError *))arg1;
- (void)startBackupSessionwithReply:(void (^)(NSError *))arg1;
- (void)getBackupkeyForInodeOrCryptoID:(unsigned long long)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)getBackupBlobreply:(void (^)(NSData *, NSError *))arg1;
- (void)registerBackupBag:(NSData *)arg1 withSecret:(NSFileHandle *)arg2 secretSize:(unsigned long long)arg3 reply:(void (^)(NSError *))arg4;
- (void)changeClassKeysGenerationWithSecret:(NSFileHandle *)arg1 secretSize:(unsigned long long)arg2 generationOption:(int)arg3 reply:(void (^)(NSError *))arg4;
- (void)changeSystemSecretWithEscrow:(NSData *)arg1 fromOldSecret:(NSFileHandle *)arg2 oldSize:(unsigned long long)arg3 toNewSecret:(NSFileHandle *)arg4 newSize:(unsigned long long)arg5 opaqueData:(NSData *)arg6 keepstate:(_Bool)arg7 reply:(void (^)(NSError *))arg8;
- (void)getPasscodeBlobWithReply:(void (^)(NSData *, NSError *))arg1;
- (void)changeSystemSecretfromOldSecret:(NSFileHandle *)arg1 oldSize:(unsigned long long)arg2 toNewSecret:(NSFileHandle *)arg3 newSize:(unsigned long long)arg4 opaqueData:(NSData *)arg5 reply:(void (^)(NSError *))arg6;
@end

