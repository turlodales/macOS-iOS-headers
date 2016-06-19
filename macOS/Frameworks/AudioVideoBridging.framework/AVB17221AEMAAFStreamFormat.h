//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMStandardStreamFormat.h>

@interface AVB17221AEMAAFStreamFormat : AVB17221AEMStandardStreamFormat
{
}

+ (id)keyPathsForValuesAffectingUpTo;
+ (id)keyPathsForValuesAffectingFormat;
+ (id)keyPathsForValuesAffectingNominalSampleRate;
- (id)samplingRate;
- (void)setSamplingRate:(id)arg1;
- (BOOL)isSupportedAudioFormat;
- (BOOL)isAudioFormat;
@property BOOL upTo; // @dynamic upTo;
@property unsigned char format; // @dynamic format;
@property unsigned char nominalSampleRate; // @dynamic nominalSampleRate;
- (id)init;

@end

