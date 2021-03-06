//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsDonation/NSObject-Protocol.h>

@protocol CNDonationAccountLogger, CNDonationAgentLogger, CNDonationAnalyticsLogger, CNDonationExtensionLogger, CNDonationPreferencesLogger, CNDonationToolLogger;

@protocol CNDonationLoggerProvider <NSObject>
@property(readonly) id <CNDonationAnalyticsLogger> analyticsLogger;
@property(readonly) id <CNDonationPreferencesLogger> preferencesLogger;
@property(readonly) id <CNDonationAccountLogger> accountLogger;
@property(readonly) id <CNDonationToolLogger> toolLogger;
@property(readonly) id <CNDonationExtensionLogger> extensionLogger;
@property(readonly) id <CNDonationAgentLogger> agentLogger;
@end

