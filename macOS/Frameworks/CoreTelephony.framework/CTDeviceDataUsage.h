//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSMutableDictionary;

@interface CTDeviceDataUsage : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _periods;
    NSMutableDictionary *_apps;
    NSMutableDictionary *_uninstalledApps;
    NSMutableDictionary *_proxiedOnlyApps;
    NSMutableDictionary *_systemServices;
    NSArray *_wifiAssist;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSArray *wifiAssist; // @synthesize wifiAssist=_wifiAssist;
@property(retain) NSMutableDictionary *systemServices; // @synthesize systemServices=_systemServices;
@property(retain) NSMutableDictionary *proxiedOnlyApps; // @synthesize proxiedOnlyApps=_proxiedOnlyApps;
@property(retain) NSMutableDictionary *uninstalledApps; // @synthesize uninstalledApps=_uninstalledApps;
@property(retain) NSMutableDictionary *apps; // @synthesize apps=_apps;
@property unsigned long long periods; // @synthesize periods=_periods;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)totalWifiAssistUsageForPeriod:(unsigned long long)arg1;
- (id)totalSystemServiceDataUsageForPeriod:(unsigned long long)arg1;
- (id)totalProxiedOnlyAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)totalUninstalledAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)totalAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)totalDataUsageForPeriod:(unsigned long long)arg1;
- (id)totalSystemServiceDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalProxiedOnlyAppDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalUninstalledAppDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalAppDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalDataUsedForPeriod:(unsigned long long)arg1;
- (id)totalDataUsage:(id)arg1 forPeriod:(unsigned long long)arg2;
- (id)systemServiceDataUsageForPeriod:(unsigned long long)arg1;
- (id)proxiedOnlyAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)uninstalledAppDataUsageForPeriod:(unsigned long long)arg1;
- (id)appDataUsageForPeriod:(unsigned long long)arg1;
- (id)dataUsage:(id)arg1 forPeriod:(unsigned long long)arg2;

@end

