//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString, NSURL;

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding>
{
    BOOL _hasAccounts;
    BOOL _hasApplications;
    BOOL _hasPeerPaymentAccount;
    NSString *_lastUpdatedTag;
    NSArray *_certificates;
    NSURL *_brokerURL;
    NSString *_regionCode;
    NSURL *_paymentServicesURL;
    NSURL *_inAppPaymentServicesURL;
    NSURL *_paymentServicesMerchantURL;
    NSURL *_partnerServiceURL;
    NSURL *_trustedServiceManagerURL;
    NSString *_trustedServiceManagerPushTopic;
    long long _consistencyCheckBackoffLevel;
    NSString *_userNotificationPushTopic;
    long long _outstandingCheckInAction;
    NSString *_lastDeviceCheckInBuildVersion;
    NSString *_deviceCheckInPushTopic;
    NSURL *_accountServiceURL;
    NSString *_accountServicePushTopic;
    NSURL *_applyServiceURL;
    NSString *_applyServicePushTopic;
    NSString *_productsPushTopic;
    NSString *_transactionZonePushTopic;
    NSURL *_peerPaymentServiceURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasPeerPaymentAccount; // @synthesize hasPeerPaymentAccount=_hasPeerPaymentAccount;
@property(retain, nonatomic) NSURL *peerPaymentServiceURL; // @synthesize peerPaymentServiceURL=_peerPaymentServiceURL;
@property(copy, nonatomic) NSString *transactionZonePushTopic; // @synthesize transactionZonePushTopic=_transactionZonePushTopic;
@property(copy, nonatomic) NSString *productsPushTopic; // @synthesize productsPushTopic=_productsPushTopic;
@property(nonatomic) BOOL hasApplications; // @synthesize hasApplications=_hasApplications;
@property(retain, nonatomic) NSString *applyServicePushTopic; // @synthesize applyServicePushTopic=_applyServicePushTopic;
@property(retain, nonatomic) NSURL *applyServiceURL; // @synthesize applyServiceURL=_applyServiceURL;
@property(nonatomic) BOOL hasAccounts; // @synthesize hasAccounts=_hasAccounts;
@property(retain, nonatomic) NSString *accountServicePushTopic; // @synthesize accountServicePushTopic=_accountServicePushTopic;
@property(retain, nonatomic) NSURL *accountServiceURL; // @synthesize accountServiceURL=_accountServiceURL;
@property(copy, nonatomic) NSString *deviceCheckInPushTopic; // @synthesize deviceCheckInPushTopic=_deviceCheckInPushTopic;
@property(copy, nonatomic) NSString *lastDeviceCheckInBuildVersion; // @synthesize lastDeviceCheckInBuildVersion=_lastDeviceCheckInBuildVersion;
@property(nonatomic) long long outstandingCheckInAction; // @synthesize outstandingCheckInAction=_outstandingCheckInAction;
@property(retain, nonatomic) NSString *userNotificationPushTopic; // @synthesize userNotificationPushTopic=_userNotificationPushTopic;
@property(nonatomic) long long consistencyCheckBackoffLevel; // @synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel;
@property(retain, nonatomic) NSString *trustedServiceManagerPushTopic; // @synthesize trustedServiceManagerPushTopic=_trustedServiceManagerPushTopic;
@property(retain, nonatomic) NSURL *trustedServiceManagerURL; // @synthesize trustedServiceManagerURL=_trustedServiceManagerURL;
@property(retain, nonatomic) NSURL *partnerServiceURL; // @synthesize partnerServiceURL=_partnerServiceURL;
@property(retain, nonatomic) NSURL *paymentServicesMerchantURL; // @synthesize paymentServicesMerchantURL=_paymentServicesMerchantURL;
@property(retain, nonatomic) NSURL *inAppPaymentServicesURL; // @synthesize inAppPaymentServicesURL=_inAppPaymentServicesURL;
@property(retain, nonatomic) NSURL *paymentServicesURL; // @synthesize paymentServicesURL=_paymentServicesURL;
@property(retain, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(retain, nonatomic) NSURL *brokerURL; // @synthesize brokerURL=_brokerURL;
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(retain, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

