//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString, SFVoiceAnalytics;

@interface SFTranscriptionSegment : NSObject <NSCopying, NSSecureCoding>
{
    float _confidence;
    NSString *_substring;
    double _timestamp;
    double _duration;
    NSArray *_alternativeSubstrings;
    SFVoiceAnalytics *_voiceAnalytics;
    NSArray *_alternativeConfidences;
    NSString *_phoneSequence;
    NSString *_ipaPhoneSequence;
    struct _NSRange _substringRange;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *ipaPhoneSequence; // @synthesize ipaPhoneSequence=_ipaPhoneSequence;
@property(readonly, nonatomic) NSString *phoneSequence; // @synthesize phoneSequence=_phoneSequence;
@property(readonly, nonatomic) NSArray *alternativeConfidences; // @synthesize alternativeConfidences=_alternativeConfidences;
@property(readonly, nonatomic) SFVoiceAnalytics *voiceAnalytics; // @synthesize voiceAnalytics=_voiceAnalytics;
@property(readonly, nonatomic) NSArray *alternativeSubstrings; // @synthesize alternativeSubstrings=_alternativeSubstrings;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) struct _NSRange substringRange; // @synthesize substringRange=_substringRange;
@property(readonly, copy, nonatomic) NSString *substring; // @synthesize substring=_substring;
- (id)_initWithSubstring:(id)arg1 range:(struct _NSRange)arg2 timestamp:(double)arg3 duration:(double)arg4 confidence:(float)arg5 alternativeSubstrings:(id)arg6 alternativeConfidences:(id)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9 voiceAnalytics:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

