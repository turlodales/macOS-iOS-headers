//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreTelephony/CoreTelephonyClientCallDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientCapabilitiesDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientCarrierBundleDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientCarrierServicesDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientCellularUsagePolicyDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientDataDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientEmergencyDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientPNRDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientRegistrationDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientSMSDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientSubscriberDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientSuppServicesDelegateInternal-Protocol.h>
#import <CoreTelephony/CoreTelephonyClientVoicemailDelegateInternal-Protocol.h>
#import <CoreTelephony/NSObject-Protocol.h>

@class NSString;

@protocol CoreTelephonyClientDelegateProxyInterface <NSObject, CoreTelephonyClientDelegateInternal, CoreTelephonyClientCellularUsagePolicyDelegateInternal, CoreTelephonyClientRegistrationDelegateInternal, CoreTelephonyClientDataDelegateInternal, CoreTelephonyClientSubscriberDelegateInternal, CoreTelephonyClientEmergencyDelegateInternal, CoreTelephonyClientSMSDelegateInternal, CoreTelephonyClientVoicemailDelegateInternal, CoreTelephonyClientPNRDelegateInternal, CoreTelephonyClientCarrierBundleDelegateInternal, CoreTelephonyClientCapabilitiesDelegateInternal, CoreTelephonyClientSuppServicesDelegateInternal, CoreTelephonyClientCallDelegateInternal, CoreTelephonyClientCarrierServicesDelegateInternal>
- (void)clientDidTriggerFault:(NSString *)arg1;
@end

