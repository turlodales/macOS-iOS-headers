//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PowerlogCore/PLTimeReferenceDynamic.h>

@interface PLTimeReferenceSystem : PLTimeReferenceDynamic
{
}

- (void)dayChangedNotificationReceived:(id)arg1;
- (void)timeZoneChangedNotificationReceived:(id)arg1;
- (void)timeChangedToMidnightLocalTime;
- (id)currentTime;
- (void)dealloc;
- (void)registerForTimeZoneChangedNotification;
- (void)registerForDayChangedNotification;
- (void)registerForClockSetNotification;
- (void)registerForTimeChangedNotification;

@end

