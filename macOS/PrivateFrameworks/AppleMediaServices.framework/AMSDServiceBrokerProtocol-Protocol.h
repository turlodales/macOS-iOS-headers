//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSPromise;

@protocol AMSDServiceBrokerProtocol <NSObject>
- (void)addInterruptionHandler:(void (^)(void))arg1;
- (AMSPromise *)securityServiceProxyWithDelegate:(id <AMSSecurityClientInterface>)arg1;
- (AMSPromise *)pushNotificationService;
- (AMSPromise *)deviceMessengerProxyWithDelegate:(id <AMSDeviceMessengerClientInterface>)arg1;
@end

