//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSObject<OS_dispatch_queue>, NSString, NSURL, OspreyGRPCChannel, OspreyKeychain;

__attribute__((visibility("hidden")))
@interface OspreyAbsintheAuthenticator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct NACContextOpaque_ *_nacContext;
    NSData *_certificateData;
    OspreyGRPCChannel *_channel;
    NSString *_uuid;
    NSDate *_sessionExpireOn;
    long long _state;
    NSData *_sessionInfo;
    NSURL *_server;
    OspreyKeychain *_keychainStorage;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak OspreyKeychain *keychainStorage; // @synthesize keychainStorage=_keychainStorage;
@property(retain, nonatomic) NSURL *server; // @synthesize server=_server;
@property(retain, nonatomic) NSData *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSDate *sessionExpireOn; // @synthesize sessionExpireOn=_sessionExpireOn;
- (void)createClientSessionWithData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchAbsintheServerCertificate:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_initializeAbsintheClientWithCertificateData:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)_ensureAuthenticatedWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (BOOL)isSessionInfoExpired;
- (id)_signData:(id)arg1;
- (void)signData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)didMoveToState:(long long)arg1;
- (void)willMoveToState:(long long)arg1;
- (BOOL)_readyToSignClientData;
- (void)deleteCachedCertificateDataWithEndpoint:(id)arg1;
- (void)setCachedCertificateData:(id)arg1 endpoint:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getCachedCertificateDataWithEndpoint:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_prefixIdentifierWithOsprey:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 channel:(id)arg2 keychainStorage:(id)arg3;
- (id)initWithURL:(id)arg1 channel:(id)arg2;

@end

