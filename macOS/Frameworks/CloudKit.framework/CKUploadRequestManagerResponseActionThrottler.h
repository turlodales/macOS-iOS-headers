//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKUploadRequestManagerResponseActionThrottler : NSObject
{
    double _throttlePeriod;
    long long _minimumThrottleCount;
    double _maximumThrottleTime;
    double _minimumRetryTime;
    NSSet *_actionsToThrottle;
    NSMutableDictionary *_responseActionToMetadata;
}

+ (double)currentTime;
+ (void)sleep:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *responseActionToMetadata; // @synthesize responseActionToMetadata=_responseActionToMetadata;
@property(copy, nonatomic) NSSet *actionsToThrottle; // @synthesize actionsToThrottle=_actionsToThrottle;
@property(nonatomic) double minimumRetryTime; // @synthesize minimumRetryTime=_minimumRetryTime;
@property(nonatomic) double maximumThrottleTime; // @synthesize maximumThrottleTime=_maximumThrottleTime;
@property(nonatomic) long long minimumThrottleCount; // @synthesize minimumThrottleCount=_minimumThrottleCount;
@property(nonatomic) double throttlePeriod; // @synthesize throttlePeriod=_throttlePeriod;
- (double)throttleTimeForCount:(long long)arg1 isRetry:(BOOL)arg2;
- (void)gateResponseAction:(long long)arg1 isRetry:(BOOL)arg2 currentTime:(double)arg3;
- (void)gateResponseAction:(long long)arg1 isRetry:(BOOL)arg2;
- (id)init;

@end

