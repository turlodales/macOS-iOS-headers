//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFRecord.h>

@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord
{
    BOOL _shouldPrompt;
    BOOL _enabled;
    NSData *_triggerData;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL shouldPrompt; // @synthesize shouldPrompt=_shouldPrompt;
@property(copy, nonatomic) NSData *triggerData; // @synthesize triggerData=_triggerData;

@end

