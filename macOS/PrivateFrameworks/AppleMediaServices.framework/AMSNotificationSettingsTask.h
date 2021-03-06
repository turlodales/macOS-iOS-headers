//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSProcessInfo, NSString;
@protocol AMSBagProtocol;

@interface AMSNotificationSettingsTask : AMSTask <AMSBagConsumer>
{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    NSString *_identifier;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (id)_generateParametersForItems:(id)arg1;
- (id)updateSettings:(id)arg1;
- (id)fetchSettingsForSections:(id)arg1;
- (id)fetchSettingForIdentifier:(id)arg1;
- (id)fetchAllSettings;
- (id)initWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

