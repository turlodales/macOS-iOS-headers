//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSGestureMonitor : CSEventMonitor
{
    unsigned long long _wakeGestureTimestamp;
    unsigned long long _dismissalTimestamp;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long dismissalTimestamp; // @synthesize dismissalTimestamp=_dismissalTimestamp;
@property(nonatomic) unsigned long long wakeGestureTimestamp; // @synthesize wakeGestureTimestamp=_wakeGestureTimestamp;
- (BOOL)isTriggerHandheld;

@end

