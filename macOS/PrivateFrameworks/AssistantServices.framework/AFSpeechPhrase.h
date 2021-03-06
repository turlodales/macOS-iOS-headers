//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding>
{
    BOOL _isLowConfidence;
    NSArray *_interpretations;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL isLowConfidence; // @synthesize isLowConfidence=_isLowConfidence;
@property(copy, nonatomic) NSArray *interpretations; // @synthesize interpretations=_interpretations;
- (id)initWithInterpretations:(id)arg1 isLowConfidence:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)allInterpretationStringsAndScores;
- (id)bestInterpretation;
- (id)firstInterpretation;

@end

