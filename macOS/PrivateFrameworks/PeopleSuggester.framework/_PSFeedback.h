//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _PSFeedbackAction, _PSPredictionContext;

@interface _PSFeedback : NSObject
{
    BOOL _dryRun;
    float _numberOfVisibleSuggestions;
    _PSFeedbackAction *_action;
    double _delay;
    _PSPredictionContext *_context;
    NSArray *_suggestions;
    NSString *_sessionIdentifier;
}

+ (id)feedbackForAction:(id)arg1 delay:(double)arg2 context:(id)arg3 suggestions:(id)arg4 numberOfVisibleSuggestions:(float)arg5 sessionIdentifier:(id)arg6;
- (void).cxx_destruct;
@property(nonatomic) BOOL dryRun; // @synthesize dryRun=_dryRun;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) float numberOfVisibleSuggestions; // @synthesize numberOfVisibleSuggestions=_numberOfVisibleSuggestions;
@property(readonly, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(readonly, nonatomic) _PSPredictionContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) _PSFeedbackAction *action; // @synthesize action=_action;
- (id)knowledgeEvent;
- (id)feedbackPayload;
@property(readonly, nonatomic) unsigned long long indexOfEngagedSuggestion;
- (id)getTrialID;
- (id)initWithAction:(id)arg1 delay:(double)arg2 context:(id)arg3 suggestions:(id)arg4 numberOfVisibleSuggestions:(float)arg5 sessionIdentifier:(id)arg6;

@end

