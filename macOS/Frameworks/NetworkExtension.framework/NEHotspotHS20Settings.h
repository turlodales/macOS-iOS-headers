//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NEHotspotHS20Settings : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _roamingEnabled;
    NSString *_domainName;
    NSArray *_roamingConsortiumOIs;
    NSArray *_naiRealmNames;
    NSArray *_MCCAndMNCs;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSArray *MCCAndMNCs; // @synthesize MCCAndMNCs=_MCCAndMNCs;
@property(copy) NSArray *naiRealmNames; // @synthesize naiRealmNames=_naiRealmNames;
@property(copy) NSArray *roamingConsortiumOIs; // @synthesize roamingConsortiumOIs=_roamingConsortiumOIs;
@property(getter=isRoamingEnabled) BOOL roamingEnabled; // @synthesize roamingEnabled=_roamingEnabled;
@property(readonly) NSString *domainName; // @synthesize domainName=_domainName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDomainName:(id)arg1 roamingEnabled:(BOOL)arg2;
- (id)description;

@end

