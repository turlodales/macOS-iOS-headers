//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDTLVProtocol.h"
#import "NSCopying.h"

@class HMDNetworkRouterWANFirewall, HMDNetworkRouterWANFirewallRuleList, NSString;

@interface HMDNetworkRouterWANFirewallConfiguration : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterWANFirewall *_type;
    HMDNetworkRouterWANFirewallRuleList *_ruleList;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
+ (id)configurationFromFirewallRuleConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDNetworkRouterWANFirewallRuleList *ruleList; // @synthesize ruleList=_ruleList;
@property(retain, nonatomic) HMDNetworkRouterWANFirewall *type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 ruleList:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

