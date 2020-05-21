//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMAvidVendorStreamFormat.h>

@interface AVB17221AEMAvidAudioMetaDataVendorStreamFormat : AVB17221AEMAvidVendorStreamFormat
{
}

+ (id)keyPathsForValuesAffectingSamplesPerFrame;
+ (id)keyPathsForValuesAffectingChannelsPerFrame;
+ (id)keyPathsForValuesAffectingNominalSampleRate;
- (id)samplingRate;
- (void)setSamplingRate:(id)arg1;
- (unsigned short)maximumIntervalFrames;
- (unsigned int)maximumPayloadSize;
- (unsigned int)maximumPDUSize;
- (BOOL)isSupportedAudioFormat;
- (BOOL)isAudioFormat;
- (unsigned short)numberOfAudioChannels;
@property(readonly) unsigned short samplesPerFrame;
@property unsigned short channelsPerFrame; // @dynamic channelsPerFrame;
@property unsigned char nominalSampleRate; // @dynamic nominalSampleRate;

@end

