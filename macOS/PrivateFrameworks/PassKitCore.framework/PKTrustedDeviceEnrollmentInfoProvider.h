//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKXPCService;

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject
{
    PKXPCService *_remoteService;
}

- (void).cxx_destruct;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)trustedDeviceEnrollmentSignatureForDevice:(unsigned long long)arg1 accountDSID:(id)arg2 sessionData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)trustedDeviceEnrollmentInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

