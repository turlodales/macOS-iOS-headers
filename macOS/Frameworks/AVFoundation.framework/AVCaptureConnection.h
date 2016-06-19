//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureConnectionInternal, AVCaptureOutput, AVCaptureVideoPreviewLayer, NSArray;

@interface AVCaptureConnection : NSObject
{
    AVCaptureConnectionInternal *_internal;
}

+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
+ (void)initialize;
- (void)_mixerNodeFormatDescriptionDidChangeFromPropertyListener;
- (void)_splitterNodeFormatDescriptionDidChangeFromPropertyListener;
- (void)setVideoScaleAndCropFactor:(double)arg1;
- (double)videoScaleAndCropFactor;
- (double)maxVideoScaleAndCropFactor;
@property(nonatomic) CDStruct_1b6d18a9 videoMaxFrameDuration;
@property(readonly, nonatomic, getter=isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;
@property(nonatomic) CDStruct_1b6d18a9 videoMinFrameDuration;
@property(readonly, nonatomic, getter=isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;
@property(nonatomic) long long videoFieldMode;
@property(readonly, nonatomic, getter=isVideoFieldModeSupported) BOOL supportsVideoFieldMode;
@property(nonatomic) long long videoOrientation;
@property(readonly, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;
@property(nonatomic, getter=isVideoMirrored) BOOL videoMirrored;
- (void)_setVideoMirrored:(BOOL)arg1;
@property(nonatomic) BOOL automaticallyAdjustsVideoMirroring;
@property(readonly, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;
@property(readonly, nonatomic) NSArray *audioChannels;
- (BOOL)isLive;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)setActive:(BOOL)arg1;
@property(readonly, nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic) NSArray *inputPorts;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property(readonly, nonatomic) AVCaptureOutput *output;
- (struct opaqueCMFormatDescription *)copyExpandedSourceSummaryAudioFormatDescription;
- (struct opaqueCMFormatDescription *)copySourceSummaryAudioFormatDescription;
- (struct opaqueCMFormatDescription *)copySourceSummaryAudioFormatDescriptionWithOptionalExpansion:(BOOL)arg1;
- (struct opaqueCMFormatDescription *)copyPostSplitSummaryAudioFormatDescription;
- (int *)splitterAudioChannelMapWithSize:(unsigned long long *)arg1;
- (BOOL)audioChannelsAreAllEnabled;
- (void)_clearAudioPropertyListeners;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (void)updateAudioAvgLevelsArray;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (void)updateAudioPeakLevelsArray;
- (id)_audioLevelsForPropertyID:(unsigned int)arg1;
- (void)setVolume:(float)arg1 forChannel:(id)arg2;
- (void)_applyVolumeFromAudioChannel:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forChannel:(id)arg2;
- (void)_applySplitterChannelMapFromAudioChannelsEnabled;
- (void)_rebuildEnabledAudioChannelsArray;
- (void)_updateAudioChannelsArrayCount;
- (void)_mixerNodeFormatDescriptionDidChange;
- (void)_splitterNodeFormatDescriptionDidChange;
- (void *)mostRecentlySeenClientSequenceID;
- (void)setMostRecentlySeenClientSequenceID:(void *)arg1;
- (void *)copyClientSequenceID;
- (void *)incrementClientSequenceIDAndRetain;
- (unsigned int)writerElement;
- (void)setWriterElement:(unsigned int)arg1;
- (CDStruct_da23731b *)extendedNodeInfo;
- (unsigned int)scope;
- (unsigned int)element;
- (int)node;
- (struct OpaqueCMIOGraph *)graph;
- (id)firstInputPort;
- (id)firstActiveInputPort;
- (id)mediaType;
- (void)finalize;
- (void)dealloc;
- (void)detachFromAudioSplitterAndMixerNodes;
- (void)attachToSplitterNode:(int)arg1 audioMixerNode:(int)arg2;
- (void)setGraph:(struct OpaqueCMIOGraph *)arg1 node:(int)arg2 element:(unsigned int)arg3 scope:(unsigned int)arg4;
- (id)description;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (void)initCommonStorage;
- (id)init;

@end

