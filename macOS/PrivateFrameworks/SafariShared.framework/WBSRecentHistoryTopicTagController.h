//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSHistory;

@interface WBSRecentHistoryTopicTagController : NSObject
{
    WBSHistory *_history;
    unsigned long long _maximumNumberOfTopics;
    double _timeIntervalBeforeNowForFetchingTags;
}

- (void).cxx_destruct;
@property(nonatomic) double timeIntervalBeforeNowForFetchingTags; // @synthesize timeIntervalBeforeNowForFetchingTags=_timeIntervalBeforeNowForFetchingTags;
@property(nonatomic) unsigned long long maximumNumberOfTopics; // @synthesize maximumNumberOfTopics=_maximumNumberOfTopics;
- (void)loadTopicsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithHistory:(id)arg1;

@end

