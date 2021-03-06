//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNTracePlayerTimelineStream, NSMutableArray, NSTimer;
@protocol MNTracePlayerSchedulerDelegate;

@interface MNTracePlayerScheduler : NSObject
{
    id <MNTracePlayerSchedulerDelegate> _delegate;
    NSTimer *_timer;
    double _lastTimerScheduleTime;
    double _speedMultiplier;
    NSMutableArray *_timelineStreams;
    double _position;
    MNTracePlayerTimelineStream *_nextTimelineStream;
}

- (void).cxx_destruct;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) double speedMultiplier; // @synthesize speedMultiplier=_speedMultiplier;
@property(nonatomic) __weak id <MNTracePlayerSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_timerUpdated:(id)arg1;
- (void)_update;
- (void)pause;
- (void)resume;
- (void)removeAllTimelineStreams;
- (void)removeTimelineStream:(id)arg1;
- (void)addTimelineStream:(id)arg1;
- (void)dealloc;
- (id)init;

@end

