//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBIntentSlotResolutionResult;

@protocol _INPBIntentSlotResolutionMulticardinalResult <NSObject>
+ (Class)resolutionResultsType;
@property(readonly, nonatomic) unsigned long long resolutionResultsCount;
@property(copy, nonatomic) NSArray *resolutionResults;
- (_INPBIntentSlotResolutionResult *)resolutionResultsAtIndex:(unsigned long long)arg1;
- (void)addResolutionResults:(_INPBIntentSlotResolutionResult *)arg1;
- (void)clearResolutionResults;
@end

