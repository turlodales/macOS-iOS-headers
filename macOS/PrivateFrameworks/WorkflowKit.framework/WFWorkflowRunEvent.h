//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFRecord.h>

@class NSDate, NSString;

@interface WFWorkflowRunEvent : WFRecord
{
    NSString *_source;
    NSDate *_date;
    NSString *_triggerID;
    long long _outcome;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long outcome; // @synthesize outcome=_outcome;
@property(readonly, copy, nonatomic) NSString *triggerID; // @synthesize triggerID=_triggerID;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;

@end

