//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSProcessInfo, NSArray, NSDictionary, NSString;
@protocol AMSBagProtocol;

@interface AMSMediaTask : AMSTask <AMSBagConsumer>
{
    BOOL _charts;
    BOOL _URLKnownToBeTrusted;
    ACAccount *_account;
    NSArray *_additionalPlatforms;
    id <AMSBagProtocol> _bag;
    NSArray *_bundleIdentifiers;
    NSString *_clientIdentifier;
    AMSProcessInfo *_clientInfo;
    NSString *_clientVersion;
    NSDictionary *_filters;
    NSArray *_includedResultKeys;
    NSArray *_itemIdentifiers;
    NSString *_logKey;
    NSString *_searchTerm;
    long long _type;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property BOOL URLKnownToBeTrusted; // @synthesize URLKnownToBeTrusted=_URLKnownToBeTrusted;
@property(readonly) long long type; // @synthesize type=_type;
@property(retain) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(retain) NSArray *includedResultKeys; // @synthesize includedResultKeys=_includedResultKeys;
@property(retain) NSDictionary *filters; // @synthesize filters=_filters;
@property(readonly) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property BOOL charts; // @synthesize charts=_charts;
@property(retain) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(readonly) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain) NSArray *additionalPlatforms; // @synthesize additionalPlatforms=_additionalPlatforms;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (id)perform;
- (id)initWithType:(long long)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3 bag:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

