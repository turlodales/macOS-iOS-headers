//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject
{
    CMSpringTrackerInternal *_internal;
}

+ (BOOL)isAvailable;
@property(readonly, nonatomic) CMSpringTrackerInternal *_internal; // @synthesize _internal;
- (void)querySleepDataFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopWithHandler:(CDUnknownBlockType)arg1;
- (void)startWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)isTracking;
- (void)dealloc;
- (id)init;

@end

