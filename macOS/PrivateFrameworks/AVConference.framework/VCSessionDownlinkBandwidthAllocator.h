//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionDownlinkBandwidthAllocator : NSObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_clients;
    NSMutableDictionary *_selectedMediaEntriesForClients;
    NSMutableDictionary *_allocatedMediaEntriesForClients;
    NSMutableSet *_decoderConstrainedClients;
    NSMutableSet *_bandwidthConstrainedClients;
    NSMutableArray *_sortedMediaEntries;
    struct opaqueRTCReporting *_reportingAgent;
    unsigned int _maxConcurrentVideoClients;
}

- (void)actualNetworkBitrateVideoDidChangeForClient:(id)arg1;
- (void)deregisterForBandwidthAllocationWithClient:(id)arg1;
- (void)actualNetworkBitrateAudioDidChangeForClient:(id)arg1;
- (void)reportingSessionParticipantEventBitrateChanged:(id)arg1 optedInNetworkBitrate:(unsigned int)arg2 actualNetworkBitrate:(unsigned int)arg3 optedInStreamID:(unsigned short)arg4 actualStreamID:(unsigned short)arg5;
- (void)registerForBandwidthAllocationWithClient:(id)arg1;
- (void)reset;
- (void)updateSelectedMediaEntriesForClientWithUUID:(id)arg1;
- (id)distributeBitrate:(unsigned int)arg1;
- (unsigned long long)simultaneousTalkers;
- (void)updateClient:(id)arg1 bandwidthConstrained:(BOOL)arg2 decoderConstrained:(BOOL)arg3;
- (void)updateHighestAudioBitrates:(id)arg1 bitrate:(unsigned int)arg2;
- (unsigned int)requiredAudioBitrate:(unsigned int)arg1 highestAudioBitrates:(id)arg2;
- (void)sortMediaEntries;
- (void)dealloc;
- (id)initWithReportingAgent:(struct opaqueRTCReporting *)arg1;

@end

