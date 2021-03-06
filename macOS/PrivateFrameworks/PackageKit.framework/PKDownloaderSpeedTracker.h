//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PKDownloaderSpeedTracker : NSObject
{
    unsigned long long _averageBytesPerSecond;
    NSDate *_queueStartTime;
    unsigned long long _bytesSinceQueueStart;
    unsigned long long _bytesAtLastUpdate;
}

- (void)updateSpeed;
- (void)didGetBytes:(unsigned long long)arg1;
- (void)setAverageBytesPerSecond:(unsigned long long)arg1;
- (unsigned long long)averageBytesPerSecond;
- (id)description;
- (void)dealloc;
- (id)init;

@end

