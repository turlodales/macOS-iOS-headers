//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFDictationConnection, AFDictationOptions, AFSpeechPackage, NSArray, NSDictionary, NSError, NSFileHandle, NSString, SASMultilingualSpeechRecognized, SASSpeechPartialResult;

@protocol AFDictationDelegate <NSObject>

@optional
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePackage:(AFSpeechPackage *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didReceiveSearchResults:(NSArray *)arg2 recognizedText:(NSString *)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
- (void)dictationConnection:(AFDictationConnection *)arg1 didFinishWritingAudioFile:(NSFileHandle *)arg2 error:(NSError *)arg3;
- (void)dictationConnnectionDidChangeAvailability:(AFDictationConnection *)arg1;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeTranscriptionObjects:(NSArray *)arg2 languageModel:(NSString *)arg3;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(AFDictationConnection *)arg1;
- (void)dictationConnection:(AFDictationConnection *)arg1 didProcessAudioDuration:(double)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePartialResult:(SASSpeechPartialResult *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeTokens:(NSArray *)arg2 languageModel:(NSString *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePhrases:(NSArray *)arg2 languageModel:(NSString *)arg3 correctionIdentifier:(id)arg4 replacingPreviousPhrasesCount:(unsigned long long)arg5;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePhrases:(NSArray *)arg2 languageModel:(NSString *)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(AFDictationConnection *)arg1 languageDetectorFailedWithError:(NSError *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeMultilingualSpeech:(SASMultilingualSpeechRecognized *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didDetectLanguage:(NSString *)arg2 confidenceScores:(NSDictionary *)arg3 isConfident:(BOOL)arg4;
- (void)dictationConnection:(AFDictationConnection *)arg1 didDetectLanguage:(NSString *)arg2 confidenceScores:(NSDictionary *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 speechRecognitionDidFail:(NSError *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 speechRecordingDidFail:(NSError *)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(AFDictationConnection *)arg1;
- (void)dictationConnection:(AFDictationConnection *)arg1 didBeginLocalRecognitionWithModelInfo:(NSString *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 speechRecordingDidBeginWithOptions:(AFDictationOptions *)arg2;
- (void)dictationConnectionSpeechRecordingDidBegin:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(AFDictationConnection *)arg1;
@end

