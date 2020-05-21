//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import "AMSBagConsumer.h"

@class AMSProcessInfo, NSString;

@interface AMSLookup : AMSTask <AMSBagConsumer>
{
    id <AMSBagProtocol> _bag;
    NSString *_caller;
    AMSProcessInfo *_clientInfo;
    NSString *_imageProfile;
    NSString *_keyProfile;
    NSString *_platform;
    long long _signatureType;
    long long _version;
    NSString *_language;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(retain) NSString *language; // @synthesize language=_language;
@property long long version; // @synthesize version=_version;
@property long long signatureType; // @synthesize signatureType=_signatureType;
@property(retain) NSString *platform; // @synthesize platform=_platform;
@property(retain) NSString *keyProfile; // @synthesize keyProfile=_keyProfile;
@property(retain) NSString *imageProfile; // @synthesize imageProfile=_imageProfile;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) NSString *caller; // @synthesize caller=_caller;
@property(retain) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (void)setContract:(id)arg1;
- (id)contract;
- (id)initWithBagContract:(id)arg1 caller:(id)arg2 keyProfile:(id)arg3;
- (id)initWithBagContract:(id)arg1;
- (id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2;
- (void)_addJSSignatureToRequest:(id)arg1;
- (id)performLookupWithBundleIdentifiers:(id)arg1 itemIdentifiers:(id)arg2;
- (id)initWithBag:(id)arg1 caller:(id)arg2 keyProfile:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

