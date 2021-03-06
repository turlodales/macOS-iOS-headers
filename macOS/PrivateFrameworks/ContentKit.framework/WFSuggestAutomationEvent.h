//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSuggestAutomationEvent : WFEvent
{
    BOOL _interacted;
    BOOL _completed;
    NSString *_key;
    NSString *_suggestedAutomationIdentifier;
}

+ (Class)codableEventClass;
- (void).cxx_destruct;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(nonatomic) BOOL interacted; // @synthesize interacted=_interacted;
@property(copy, nonatomic) NSString *suggestedAutomationIdentifier; // @synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

