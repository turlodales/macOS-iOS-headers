//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioChunk, CSSpIdContext, NSDictionary;
@protocol CSSpIdSpeakerRecognizerDelegate;

@protocol CSSpIdSpeakerRecognizer <NSObject>
@property(readonly, nonatomic) NSDictionary *lastSpeakerIdInfo;
- (void)setCVTTriggerPhraseDetected;
- (void)processMyriadDecision:(unsigned long long)arg1;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)processAudioChunk:(CSAudioChunk *)arg1;
- (id)initWithContext:(CSSpIdContext *)arg1 delegate:(id <CSSpIdSpeakerRecognizerDelegate>)arg2;
@end

