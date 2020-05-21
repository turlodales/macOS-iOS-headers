//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, TIInputMode, TILanguageModelAdaptationContext;

@interface TILanguageModelOfflineLearningHandle : NSObject
{
    BOOL _valid;
    TIInputMode *_inputMode;
    NSDate *_lastAdaptationDate;
    TILanguageModelAdaptationContext *_currentAdaptationContext;
}

+ (id)handleForLanguageLikelihood;
+ (id)handleForInputMode:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) TILanguageModelAdaptationContext *currentAdaptationContext; // @synthesize currentAdaptationContext=_currentAdaptationContext;
@property(copy, nonatomic) NSDate *lastAdaptationDate; // @synthesize lastAdaptationDate=_lastAdaptationDate;
@property(readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
@property(nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)arg1;
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;
- (void)load;
- (id)initWithInputMode:(id)arg1;

@end

