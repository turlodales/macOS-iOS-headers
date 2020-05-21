//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSArray, NSDate, NSDictionary, NSString;

@interface HMDNetworkRouterFirewallRuleCloudNetworkDeclarations : HMFObject <HMFLogging>
{
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_baseAccessoryIdentifier;
    NSString *_name;
    NSDate *_lastModifiedTime;
    NSArray *_ruleConfigurations;
}

+ (id)__decodeRuleConfigurationWithVersionString:(id)arg1 ruleConfigurationValue:(id)arg2 baseAccessoryIdentifier:(id)arg3;
+ (id)__decodeRuleConfigurationsFromJSONDictionary:(id)arg1 baseAccessoryIdentifier:(id)arg2 allowUnzippedData:(BOOL)arg3;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *ruleConfigurations; // @synthesize ruleConfigurations=_ruleConfigurations;
@property(readonly, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *baseAccessoryIdentifier; // @synthesize baseAccessoryIdentifier=_baseAccessoryIdentifier;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2 allowUnzippedData:(BOOL)arg3;
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2;
- (id)initWithBaseAccessoryIdentifier:(id)arg1 name:(id)arg2 lastModifiedTime:(id)arg3 ruleConfigurations:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

