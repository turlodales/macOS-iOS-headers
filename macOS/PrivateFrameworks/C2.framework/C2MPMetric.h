//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class C2MPCloudKitInfo, C2MPDeviceInfo, C2MPGenericEvent, C2MPNetworkEvent, C2MPServerInfo, NSString;

__attribute__((visibility("hidden")))
@interface C2MPMetric : PBCodable <NSCopying>
{
    unsigned long long _reportFrequency;
    unsigned long long _reportFrequencyBase;
    unsigned long long _triggers;
    C2MPCloudKitInfo *_cloudkitInfo;
    C2MPDeviceInfo *_deviceInfo;
    C2MPGenericEvent *_genericEvent;
    int _metricType;
    C2MPNetworkEvent *_networkEvent;
    NSString *_reportTransportSourceApplicationBundleIdentifier;
    NSString *_reportTransportSourceApplicationSecondaryIdentifier;
    C2MPServerInfo *_serverInfo;
    BOOL _reportTransportAllowExpensiveAccess;
    BOOL _reportTransportAllowPowerNapScheduling;
    struct {
        unsigned int reportFrequency:1;
        unsigned int reportFrequencyBase:1;
        unsigned int triggers:1;
        unsigned int metricType:1;
        unsigned int reportTransportAllowExpensiveAccess:1;
        unsigned int reportTransportAllowPowerNapScheduling:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) C2MPGenericEvent *genericEvent; // @synthesize genericEvent=_genericEvent;
@property(retain, nonatomic) C2MPNetworkEvent *networkEvent; // @synthesize networkEvent=_networkEvent;
@property(retain, nonatomic) NSString *reportTransportSourceApplicationSecondaryIdentifier; // @synthesize reportTransportSourceApplicationSecondaryIdentifier=_reportTransportSourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *reportTransportSourceApplicationBundleIdentifier; // @synthesize reportTransportSourceApplicationBundleIdentifier=_reportTransportSourceApplicationBundleIdentifier;
@property(nonatomic) BOOL reportTransportAllowPowerNapScheduling; // @synthesize reportTransportAllowPowerNapScheduling=_reportTransportAllowPowerNapScheduling;
@property(nonatomic) BOOL reportTransportAllowExpensiveAccess; // @synthesize reportTransportAllowExpensiveAccess=_reportTransportAllowExpensiveAccess;
@property(nonatomic) unsigned long long reportFrequencyBase; // @synthesize reportFrequencyBase=_reportFrequencyBase;
@property(nonatomic) unsigned long long reportFrequency; // @synthesize reportFrequency=_reportFrequency;
@property(nonatomic) unsigned long long triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) C2MPServerInfo *serverInfo; // @synthesize serverInfo=_serverInfo;
@property(retain, nonatomic) C2MPCloudKitInfo *cloudkitInfo; // @synthesize cloudkitInfo=_cloudkitInfo;
@property(retain, nonatomic) C2MPDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasGenericEvent;
@property(readonly, nonatomic) BOOL hasNetworkEvent;
@property(readonly, nonatomic) BOOL hasReportTransportSourceApplicationSecondaryIdentifier;
@property(readonly, nonatomic) BOOL hasReportTransportSourceApplicationBundleIdentifier;
@property(nonatomic) BOOL hasReportTransportAllowPowerNapScheduling;
@property(nonatomic) BOOL hasReportTransportAllowExpensiveAccess;
@property(nonatomic) BOOL hasReportFrequencyBase;
@property(nonatomic) BOOL hasReportFrequency;
@property(nonatomic) BOOL hasTriggers;
@property(readonly, nonatomic) BOOL hasServerInfo;
@property(readonly, nonatomic) BOOL hasCloudkitInfo;
@property(readonly, nonatomic) BOOL hasDeviceInfo;
- (int)StringAsMetricType:(id)arg1;
- (id)metricTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMetricType;
@property(nonatomic) int metricType; // @synthesize metricType=_metricType;

@end

