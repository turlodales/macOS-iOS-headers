//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface PHAActivityLog : NSObject
{
    double _absoluteStartTime;
    double _absoluteEndTime;
    unsigned long long _status;
    unsigned long long _graphRequestInterruptionCount;
    NSDate *_startDate;
    double _duration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;
- (void)markProcessingStopped:(unsigned long long)arg1;
- (id)init;

@end

