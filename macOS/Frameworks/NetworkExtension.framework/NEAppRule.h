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

@class NSArray, NSString;

@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    BOOL _noRestriction;
    BOOL _noDivertDNS;
    NSString *_matchSigningIdentifier;
    NSString *_matchDesignatedRequirement;
    NSString *_matchPath;
    NSArray *_matchDomains;
    NSArray *_additionalExecutables;
    NSArray *_matchAccountIdentifiers;
}

+ (BOOL)supportsSecureCoding;
@property BOOL noDivertDNS; // @synthesize noDivertDNS=_noDivertDNS;
@property(copy) NSArray *matchAccountIdentifiers; // @synthesize matchAccountIdentifiers=_matchAccountIdentifiers;
@property BOOL noRestriction; // @synthesize noRestriction=_noRestriction;
@property(copy) NSArray *additionalExecutables; // @synthesize additionalExecutables=_additionalExecutables;
@property(copy) NSArray *matchDomains; // @synthesize matchDomains=_matchDomains;
@property(copy) NSString *matchPath; // @synthesize matchPath=_matchPath;
@property(readonly) NSString *matchDesignatedRequirement; // @synthesize matchDesignatedRequirement=_matchDesignatedRequirement;
@property(readonly) NSString *matchSigningIdentifier; // @synthesize matchSigningIdentifier=_matchSigningIdentifier;
- (void).cxx_destruct;
- (BOOL)signingIdentifierAllowed:(id)arg1 domainsRequired:(out char *)arg2;
- (BOOL)overlapsWithRule:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigningIdentifier:(id)arg1 designatedRequirement:(id)arg2;
- (id)initWithSigningIdentifier:(id)arg1;

@end

