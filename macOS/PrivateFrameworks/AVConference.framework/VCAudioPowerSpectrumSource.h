//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCObject.h>

#import "VCAudioIOSink.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumSource : VCObject <VCAudioIOSink>
{
    long long _streamToken;
    struct _VCAudioPowerSpectrumSourceRealtimeContext _realtimeContext;
}

@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
- (void)unregisterAudioPowerSpectrumSink:(id)arg1;
- (void)registerAudioPowerSpectrumSink:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2;
@property(readonly, nonatomic) struct _VCAudioPowerSpectrumSourceRealtimeContext *realtimeContext;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)cleanupAudioPowerSpectrumSinks;
- (void)cleanupQueue:(struct opaqueCMSimpleQueue **)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

