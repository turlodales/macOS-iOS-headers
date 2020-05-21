//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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

