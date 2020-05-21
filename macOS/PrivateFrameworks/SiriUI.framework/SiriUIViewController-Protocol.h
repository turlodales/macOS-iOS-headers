//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFAnalyticsTurnBasedInstrumentationContext, AceObject, NSString;

@protocol SiriUIViewController <NSObject>
@property(retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *instrumentationTurnContext;
@property(retain, nonatomic) AceObject *aceObject;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;

@optional
- (void)siriDidStopSpeakingWithIdentifier:(NSString *)arg1 speechQueueIsEmpty:(BOOL)arg2;
- (void)siriDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (void)endEditingAndCorrect:(BOOL)arg1;
- (NSString *)navigationTitle;
- (double)desiredHeightForWidth:(double)arg1;
- (double)desiredHeight;
@end

