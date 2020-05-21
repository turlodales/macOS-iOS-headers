//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSUUID, NWDeviceReport, NWL2Report, PBCodable;

@interface NWConnectionStatistics : NSObject
{
    unsigned int _awdMetricID;
    NSString *_clientIdentifier;
    NSString *_sourceIdentifier;
    NSUUID *_externallyVisibleConnectionUUID;
    NSArray *_externallyVisibleActivityUUIDs;
    NWL2Report *_layer2Report;
    NWDeviceReport *_deviceReport;
    PBCodable *_awdReport;
    NSArray *_activities;
    struct netcore_stats_tcp_report _report;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(nonatomic) unsigned int awdMetricID; // @synthesize awdMetricID=_awdMetricID;
@property(retain, nonatomic) PBCodable *awdReport; // @synthesize awdReport=_awdReport;
@property(nonatomic) struct netcore_stats_tcp_report report; // @synthesize report=_report;
@property(retain, nonatomic) NWDeviceReport *deviceReport; // @synthesize deviceReport=_deviceReport;
@property(retain, nonatomic) NWL2Report *layer2Report; // @synthesize layer2Report=_layer2Report;
@property(retain, nonatomic) NSArray *externallyVisibleActivityUUIDs; // @synthesize externallyVisibleActivityUUIDs=_externallyVisibleActivityUUIDs;
@property(retain, nonatomic) NSUUID *externallyVisibleConnectionUUID; // @synthesize externallyVisibleConnectionUUID=_externallyVisibleConnectionUUID;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (id)initWithPBCodableData:(id)arg1;
- (id)initWithTCPReport:(struct netcore_stats_tcp_report *)arg1 length:(unsigned long long)arg2 clientIdentifier:(id)arg3 sourceIdentifier:(id)arg4;
- (id)_createStatisticsReportFromStruct:(const struct netcore_stats_tcp_statistics_report *)arg1;
- (id)_createFallbackReportFromStruct:(const struct netcore_stats_tcp_cell_fallback_report *)arg1;
- (id)_createDataUsageSnapshotFromStruct:(const struct netcore_stats_data_usage_snapshot *)arg1;
- (BOOL)tlsHandshakeTimedOut;
@property(readonly, nonatomic) NSUUID *connectionUUID;
@property(readonly, nonatomic) BOOL kernelReportingWriteStalled;
@property(readonly, nonatomic) BOOL kernelReportingReadStalled;
@property(readonly, nonatomic) BOOL kernelReportingConnectionStalled;
@property(readonly, nonatomic) BOOL kernelReportedStalls;
@property(readonly, nonatomic) BOOL tlsSucceeded;
@property(readonly, nonatomic) BOOL tls13Configured;
@property(readonly, nonatomic) BOOL cellularRrcConnected;
@property(readonly, nonatomic) BOOL cellularFallback;
@property(readonly, nonatomic) BOOL fallbackEligible;
@property(readonly, nonatomic) unsigned int trafficClass;
@property(readonly, nonatomic) unsigned int tcpAppDataStallTimerMsecs;
@property(readonly, nonatomic) unsigned int tcpAppReportingDataStallCount;
@property(readonly, nonatomic) unsigned int tcpConnectionReuseCount;
@property(readonly, nonatomic) unsigned int tcpBetterRouteEventCount;
@property(readonly, nonatomic) BOOL tcpFastOpen;
@property(readonly, nonatomic) unsigned int tcpSynRetransmissionCount;
@property(readonly, nonatomic) unsigned int tcpRTTVariance;
@property(readonly, nonatomic) unsigned int tcpRTTBestMsecs;
@property(readonly, nonatomic) unsigned int tcpRTTSmoothedMsecs;
@property(readonly, nonatomic) unsigned int tcpRTTCurrentMsecs;
@property(readonly, nonatomic) unsigned long long packetsRetransmitted;
@property(readonly, nonatomic) unsigned long long packetsOOO;
@property(readonly, nonatomic) unsigned long long packetsDuplicate;
@property(readonly, nonatomic) unsigned long long packetsOut;
@property(readonly, nonatomic) unsigned long long packetsIn;
@property(readonly, nonatomic) unsigned long long bytesRetransmitted;
@property(readonly, nonatomic) unsigned long long bytesOOO;
@property(readonly, nonatomic) unsigned long long bytesDuplicate;
@property(readonly, nonatomic) unsigned long long bytesOut;
@property(readonly, nonatomic) unsigned long long bytesIn;
@property(readonly, nonatomic) BOOL connected;
@property(readonly, nonatomic) int connectedInterfaceType;
@property(readonly, nonatomic) unsigned int flowDurationMsecs;
@property(readonly, nonatomic) unsigned int connectionEstablishmentTimeMsecs;
@property(readonly, nonatomic) unsigned int timeToConnectionEstablishmentMsecs;
@property(readonly, nonatomic) unsigned int timeToConnectionStartMsecs;
@property(readonly, nonatomic) int interfaceType;
@property(readonly, nonatomic) BOOL dnsAnswersCached;
@property(readonly, nonatomic) unsigned int dnsResolvedTimeMsecs;
@property(readonly, nonatomic) unsigned int timeToDnsStartMsecs;
@property(readonly, nonatomic) unsigned int timeToDnsResolvedMsecs;
@property(readonly, nonatomic) BOOL delegated;

@end

