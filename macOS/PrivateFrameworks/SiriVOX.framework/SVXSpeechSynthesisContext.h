//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SVXAudioSessionAssertion, SVXSpeechSynthesisRequest;
@protocol SVXTaskTracking;

@interface SVXSpeechSynthesisContext : NSObject
{
    CDUnknownBlockType _preparation;
    CDUnknownBlockType _finalization;
    BOOL _handledPresynthesizedAudioRequest;
    BOOL _handledSpeechRequest;
    long long _operationType;
    SVXSpeechSynthesisRequest *_request;
    NSString *_languageCode;
    long long _gender;
    NSDictionary *_analyticsContext;
    id <SVXTaskTracking> _taskTracker;
    SVXAudioSessionAssertion *_audioSessionAssertion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SVXAudioSessionAssertion *audioSessionAssertion; // @synthesize audioSessionAssertion=_audioSessionAssertion;
@property(readonly, nonatomic) id <SVXTaskTracking> taskTracker; // @synthesize taskTracker=_taskTracker;
@property(nonatomic) BOOL handledSpeechRequest; // @synthesize handledSpeechRequest=_handledSpeechRequest;
@property(nonatomic) BOOL handledPresynthesizedAudioRequest; // @synthesize handledPresynthesizedAudioRequest=_handledPresynthesizedAudioRequest;
@property(readonly, copy, nonatomic) NSDictionary *analyticsContext; // @synthesize analyticsContext=_analyticsContext;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, copy, nonatomic) SVXSpeechSynthesisRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) long long operationType; // @synthesize operationType=_operationType;
- (void)finalizeWithResultType:(long long)arg1 utteranceInfo:(id)arg2 error:(id)arg3;
- (void)prepare;
- (id)initWithOperationType:(long long)arg1 request:(id)arg2 languageCode:(id)arg3 gender:(long long)arg4 preparation:(CDUnknownBlockType)arg5 finalization:(CDUnknownBlockType)arg6 taskTracker:(id)arg7 analyticsContext:(id)arg8;
- (id)description;
- (void)dealloc;

@end

