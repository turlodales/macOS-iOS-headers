//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOThrottler-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOThrottlerShort : NSObject <_GEOThrottler>
{
    NSString *_keyPath;
    struct vector<(anonymous namespace)::Timestamp, std::__1::allocator<(anonymous namespace)::Timestamp>> _lastRequestTimes;
    unsigned int _currentIndex;
    double _timeWindow;
}

+ (BOOL)stateIsExpired:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) double timeWindow; // @synthesize timeWindow=_timeWindow;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)captureState;
@property(readonly, copy) NSString *description;
- (BOOL)isExpired;
- (id)userInfoForError;
- (unsigned int)maxReqCount;
- (double)timeUntilReset;
- (unsigned long long)remainingEntries;
- (BOOL)addRequestTimestamp;
- (id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

