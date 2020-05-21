//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OS_sec_identity.h"

@class NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_identity : NSObject <OS_sec_identity>
{
    struct __SecIdentity *identity;
    struct __CFArray *certs;
    CDUnknownBlockType sign_block;
    CDUnknownBlockType decrypt_block;
    NSObject<OS_dispatch_queue> *operation_queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCertificates:(struct __CFArray *)arg1 signBlock:(CDUnknownBlockType)arg2 decryptBlock:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)initWithIdentityAndCertificates:(struct __SecIdentity *)arg1 certificates:(struct __CFArray *)arg2;
- (id)initWithIdentity:(struct __SecIdentity *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

