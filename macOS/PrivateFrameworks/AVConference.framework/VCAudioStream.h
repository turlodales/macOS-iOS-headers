//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCMediaStream.h>

#import "VCAudioIODelegate.h"
#import "VCAudioIOSink.h"
#import "VCMediaStreamSyncSource.h"

@class AVTelephonyInterface, DTMFEventHandler, NSMutableArray, NSNumber, NSObject<OS_dispatch_source>, NSObject<VCMediaStreamSyncSourceDelegate>, NSString, VCAudioIO, VCAudioPayload, VCAudioPowerSpectrumSource, VCAudioTransmitter, WRMClient;

__attribute__((visibility("hidden")))
@interface VCAudioStream : VCMediaStream <VCMediaStreamSyncSource, VCAudioIOSink, VCAudioIODelegate>
{
    int _clientPid;
    int numBufferBytesAvailable;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    double dAudioHostTime;
    BOOL lastVoiceActive;
    double _remoteMediaStallTimeout;
    unsigned int conferenceID;
    unsigned int lastInputAudioTimeStamp;
    unsigned int lastSentAudioSampleTime;
    long long sampleRate;
    long long samplesPerFrame;
    struct _opaque_pthread_rwlock_t stateLock;
    NSMutableArray *audioPayloads;
    struct AudioStreamBasicDescription vpioFormat;
    int preferredAudioCodec;
    DTMFEventHandler *dtmfEventHandler;
    WRMClient *wrmClient;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    VCAudioTransmitter *_audioTransmitter;
    int _reportingModuleID;
    AVTelephonyInterface *_telephonyInterface;
    BOOL isValid;
    int deviceRole;
    void *_audioMediaControlInfoGenerator;
    id syncSourceDelegate;
    VCAudioIO *_audioIO;
    BOOL _isMuted;
    unsigned int *_reportingSSRCList;
    unsigned int _reportingSSRCCount;
    BOOL _sendActiveVoiceOnly;
    BOOL _currentDTXEnable;
    NSNumber *_targetStreamID;
    BOOL _rtpEnabledBeforeInterrupt;
    BOOL _rtcpEnabledBeforeInterrupt;
    unsigned int _pullAudioSamplesCount;
    struct _VCAudioStreamSinkContext _sinkContext;
    struct _VCAudioStreamSourceContext _sourceContext;
    long long _inputAudioPowerSpectrumToken;
    long long _outputAudioPowerSpectrumToken;
    VCAudioPowerSpectrumSource *_inputAudioPowerSpectrumSource;
    VCAudioPowerSpectrumSource *_outputAudioPowerSpectrumSource;
}

+ (id)capabilities;
+ (id)supportedAudioPayloads;
+ (unsigned char)audioIODirectionWithMediaStreamDirection:(long long)arg1;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
@property(nonatomic, getter=isCurrentDTXEnabled) BOOL currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(retain) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(retain) VCAudioTransmitter *audioTransmitter; // @synthesize audioTransmitter=_audioTransmitter;
@property(nonatomic) int deviceRole; // @synthesize deviceRole;
@property(nonatomic) BOOL isValid; // @synthesize isValid;
@property(readonly) unsigned int conferenceID; // @synthesize conferenceID;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)collectTxChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_3ab08b48 *)arg1 interval:(float)arg2;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)handleCodecRateModeChange:(int)arg1 payload:(int)arg2;
- (void)unregisterCodecRateModeChangeNotifications;
- (void)registerActiveAudioStreamChangeNotifications;
- (void)registerCodecRateModeChangeNotifications;
- (void)vcMediaStreamTransport:(id)arg1 updateSourceNTPTime:(double)arg2 rtpTimeStamp:(unsigned int)arg3;
- (long long)getSyncSourceSampleRate;
@property(nonatomic) NSObject<VCMediaStreamSyncSourceDelegate> *syncSourceDelegate; // @synthesize syncSourceDelegate;
- (void)setCanProcessAudio:(BOOL)arg1;
- (BOOL)canProcessAudio;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)reportingAudioStreamEvent:(unsigned short)arg1;
- (id)getReportingServiceID;
- (struct __CFString *)getReportingClientName;
- (int)getReportingClientType;
- (struct __CFDictionary *)getClientSpecificUserInfo:(id)arg1;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (double)rtcpHeartbeatLeeway;
- (void)onSendRTCPPacket;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)streamIDsFromTransport;
- (void)cleanupBeforeReconfigure:(id)arg1;
- (void)createReportSSRCListWithStreamConfigs:(id)arg1;
- (id)createTransport;
- (BOOL)setupSourceTransport:(id)arg1;
- (BOOL)validateAudioStreamConfigurations:(id)arg1;
- (void)onCallIDChanged;
- (id)supportedPayloads;
@property(readonly, nonatomic) void *realtimeSourceContext;
@property(nonatomic) float volume;
@property(nonatomic, getter=isRemoteMuted) BOOL remoteMuted;
@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_isMuted;
@property(nonatomic) BOOL sendActiveVoiceOnly;
- (void)setStreamDirection:(long long)arg1;
- (BOOL)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
- (void)cleanupAudio;
- (void)prepareAudio;
- (void)updateSoundMeter:(struct _METER_INFO *)arg1 isInputMeter:(BOOL)arg2 sampleBuffer:(struct opaqueVCAudioBufferList *)arg3;
- (void)pushSamplesOutputPowerSpectrum:(struct opaqueVCAudioBufferList *)arg1;
- (void)setFrequencyMeteringEnabled:(BOOL)arg1 meterType:(int)arg2;
- (BOOL)isFrequencyMeteringEnabled:(int)arg1;
- (struct _METER_INFO *)meterWithType:(int)arg1;
- (void)stopSendDTMFEvent;
- (void)sendDTMFEvent:(id)arg1;
- (BOOL)createAudioTransmitter:(long long)arg1 streamIDs:(id)arg2;
- (BOOL)createAudioReceiver;
- (int)bundlingSchemeForOperatingMode:(int)arg1 payloadType:(int)arg2;
- (int)getPacketsPerBundleForStreamConfig:(id)arg1;
- (void)dealloc;
- (BOOL)setupAudioStreamWithClientPid:(int)arg1;
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2 transportSessionID:(unsigned int)arg3;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2;
- (id)initWithClientPid:(int)arg1;
- (void)setupAudioPowerSpectrum;
- (int)operatingModeForAudioStreamMode:(long long)arg1;
- (void)stateEnter;
- (void)stateExit;
- (void)setState:(int)arg1;
- (double)lastReceivedRTCPPacketTime;
- (double)lastReceivedRTPPacketTime;
- (BOOL)setReceiverPayloads;
- (void)setDTXPayload:(id)arg1;
- (id)addAudioPayload:(int)arg1;
- (id)configForPayloadType:(int)arg1;
- (unsigned int)preferredAudioBitrateForPayload:(int)arg1;
- (void)getCodecConfigForPayload:(int)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)setupPayloads;
- (id)getSupportedPayloads;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned int)codecTypeFromAudioPayload:(int)arg1;
- (int)captureMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)setInputTimestamp:(unsigned int)arg1 packetTimestamp:(int)arg2 hostTime:(double)arg3;
- (void)_computeInternalFormatForAudioConfig:(id)arg1;
- (unsigned int)internalSampleRateForCodecType:(long long)arg1;
- (unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg1 numSamples:(int)arg2 hostTime:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

