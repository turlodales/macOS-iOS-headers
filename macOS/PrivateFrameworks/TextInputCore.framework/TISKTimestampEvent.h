//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TISKEvent.h>

@interface TISKTimestampEvent : TISKEvent
{
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (double)touchUpTimestamp;
- (double)touchDownTimestamp;
- (BOOL)isMissingATouch;
- (id)init:(int)arg1 timestamp:(double)arg2 order:(long long)arg3;

@end

