//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EKAvailabilityUtilities : NSObject
{
}

+ (long long)_orderForType:(long long)arg1;
+ (BOOL)showTypeAsBusy:(long long)arg1;
+ (BOOL)spansIncludeBusyPeriod:(id)arg1;
+ (long long)summarizedAvailabilityTypeForSpans:(id)arg1;
+ (id)getCALFreeBusyFromResults:(id)arg1 forAttendees:(id)arg2 inRange:(id)arg3;
+ (id)getCALFreeBusyFromEKSpans:(id)arg1 inRange:(id)arg2;
+ (int)leastAvailabileFreeBusyTypeForArray:(id)arg1;
+ (int)CALFreeBusyTypeFromEKAvailType:(long long)arg1;

@end

