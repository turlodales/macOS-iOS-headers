//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AADeviceProvisioningSession : NSObject
{
    NSString *_dsid;
    unsigned long long _dsidNumber;
    struct OpaqueCFHTTPCookieStorage *_cookieStorageRef;
}

- (void).cxx_destruct;
- (int)eraseProvisioning;
- (int)synchronizeProvisioningWithData:(id)arg1;
- (int)provisionDeviceWithData:(id)arg1;
- (id)deviceProvisioningInfo;
- (void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(BOOL)arg2;
- (void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(BOOL)arg2;
- (void)addProvisioningInfoToAARequest:(id)arg1;
- (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithDSID:(id)arg1;
- (id)init;

@end

