//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary;
@protocol CSSpIdSpeakerRecognizer;

@protocol CSSpIdSpeakerRecognizerDelegate
- (void)speakerRecognizerFinishedProcessing:(id <CSSpIdSpeakerRecognizer>)arg1 withFinalSpeakerIdInfo:(NSDictionary *)arg2;
- (void)speakerRecognizer:(id <CSSpIdSpeakerRecognizer>)arg1 hasSpeakerIdInfo:(NSDictionary *)arg2;
@end

