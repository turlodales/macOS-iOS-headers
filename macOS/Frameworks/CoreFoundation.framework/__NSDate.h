//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

__attribute__((visibility("hidden")))
@interface __NSDate : NSDate
{
    double _time;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (void)dealloc;
- (double)timeIntervalSinceReferenceDate;

@end

