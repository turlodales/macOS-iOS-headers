//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, brc_task_tracker;

__attribute__((visibility("hidden")))
@interface BRCFileCoordinatorContext : NSObject
{
    int _startTracingCode;
    int _endTracingCode;
    brc_task_tracker *_tracker;
    unsigned long long _sections;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) int endTracingCode; // @synthesize endTracingCode=_endTracingCode;
@property(nonatomic) int startTracingCode; // @synthesize startTracingCode=_startTracingCode;
@property(nonatomic) unsigned long long sections; // @synthesize sections=_sections;
@property(retain, nonatomic) brc_task_tracker *tracker; // @synthesize tracker=_tracker;
- (id)initWithTracker:(id)arg1 queue:(id)arg2 startCode:(int)arg3 endCode:(int)arg4;

@end

