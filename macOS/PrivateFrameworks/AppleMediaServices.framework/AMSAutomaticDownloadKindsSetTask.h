//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import "AMSBagConsumer.h"

@class ACAccount, NSArray, NSString;

@interface AMSAutomaticDownloadKindsSetTask : AMSTask <AMSBagConsumer>
{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSArray *_enabledMediaKinds;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(readonly) NSArray *enabledMediaKinds; // @synthesize enabledMediaKinds=_enabledMediaKinds;
@property(readonly) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly) ACAccount *account; // @synthesize account=_account;
- (id)perform;
- (id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

