//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PREResponsesGeneratedEvent : NSObject
{
    BOOL _isCached;
    BOOL _hasQuestionMark;
    int _generationStatus;
    NSArray *_responses;
    NSString *_language;
    NSString *_locale;
    unsigned long long _responseTimePerf;
    unsigned long long _messageCharCount;
    unsigned long long _responseGenerationTime;
}

- (void).cxx_destruct;
@property(nonatomic) int generationStatus; // @synthesize generationStatus=_generationStatus;
@property(nonatomic) unsigned long long responseGenerationTime; // @synthesize responseGenerationTime=_responseGenerationTime;
@property(nonatomic) BOOL hasQuestionMark; // @synthesize hasQuestionMark=_hasQuestionMark;
@property(nonatomic) unsigned long long messageCharCount; // @synthesize messageCharCount=_messageCharCount;
@property(nonatomic) unsigned long long responseTimePerf; // @synthesize responseTimePerf=_responseTimePerf;
@property(nonatomic) BOOL isCached; // @synthesize isCached=_isCached;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSArray *responses; // @synthesize responses=_responses;

@end

