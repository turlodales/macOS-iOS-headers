//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCThrottleBase : NSObject
{
    NSString *_name;
    unsigned int _initialRetryCount;
    unsigned int _finalRetryCount;
    unsigned int _maximumElementCount;
    long long _minimumNsecsBetweenRetries;
    long long _maximumNsecsBetweenRetries;
    long long _nsecsBeforeForgettingCounter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long nsecsBeforeForgettingCounter; // @synthesize nsecsBeforeForgettingCounter=_nsecsBeforeForgettingCounter;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)isBlocking;
- (long long)nsecsToNextRetry:(long long)arg1 retryCount:(unsigned int *)arg2 now:(long long)arg3;
- (long long)retryBackoff:(unsigned int)arg1;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;

@end

