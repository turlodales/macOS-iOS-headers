//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationLegacySupport.h"
#import "NEConfigurationValidating.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSURL;

@interface NEEvaluateConnectionRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    long long _action;
    NSArray *_matchDomains;
    NSArray *_useDNSServers;
    NSURL *_probeURL;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSURL *probeURL; // @synthesize probeURL=_probeURL;
@property(copy) NSArray *useDNSServers; // @synthesize useDNSServers=_useDNSServers;
@property(readonly) NSArray *matchDomains; // @synthesize matchDomains=_matchDomains;
@property(readonly) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchDomains:(id)arg1 andAction:(long long)arg2;

@end

