//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Speech/NSCopying-Protocol.h>
#import <Speech/NSSecureCoding-Protocol.h>

@class NSArray, SFTranscription;

@interface SFSpeechRecognitionResult : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_transcriptions;
    NSArray *_rawTranscriptions;
    BOOL _final;
    SFTranscription *_bestTranscription;
    SFTranscription *_rawTranscription;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SFTranscription *rawTranscription; // @synthesize rawTranscription=_rawTranscription;
@property(readonly, nonatomic, getter=isFinal) BOOL final; // @synthesize final=_final;
@property(readonly, copy, nonatomic) SFTranscription *bestTranscription; // @synthesize bestTranscription=_bestTranscription;
@property(readonly, copy, nonatomic) NSArray *rawTranscriptions;
@property(readonly, copy, nonatomic) NSArray *transcriptions;
- (id)expandTranscription:(id)arg1;
- (id)_initWithBestTranscription:(id)arg1 rawTranscription:(id)arg2 final:(BOOL)arg3;
- (id)_initWithBestTranscription:(id)arg1 final:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

