//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLCoreAnalyticsHelper : NSObject
{
}

+ (void)sendCTMFinishProcessingEventForAsset:(id)arg1 startDate:(id)arg2 isAutoReframe:(BOOL)arg3 isOnDemand:(BOOL)arg4;
+ (void)sendCTMScheduleAnalyticsForAsset:(id)arg1 isAutoReframe:(BOOL)arg2 isOnDemand:(BOOL)arg3;
+ (void)sendEventWithName:(id)arg1 eventData:(id)arg2;

@end

