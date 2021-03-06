//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PMRMeasurementList;

@interface PMRTimer : NSObject
{
    unsigned long long _tick;
    PMRMeasurementList *_measurements;
    struct mach_timebase_info _timebase;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)measurementListByDraining;
- (BOOL)markAndReset;
- (void)markComplete;
- (void)start;
- (id)initWithName:(id)arg1;

@end

