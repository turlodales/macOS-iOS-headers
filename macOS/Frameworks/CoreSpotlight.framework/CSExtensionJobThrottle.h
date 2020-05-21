//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CSExtensionJobThrottle : NSObject
{
    unsigned long long _maxRetryCount;
    unsigned long long _minSecondsBetweenRetries;
    unsigned long long _maxSecondsBetweenRetries;
    unsigned long long _minSecondsBetweenRetriesUnderMemoryPressure;
    unsigned long long _maxSecondsBetweenRetriesUnderMemoryPressure;
    NSMutableDictionary *_countersByBundleID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *countersByBundleID; // @synthesize countersByBundleID=_countersByBundleID;
@property(nonatomic) unsigned long long maxSecondsBetweenRetriesUnderMemoryPressure; // @synthesize maxSecondsBetweenRetriesUnderMemoryPressure=_maxSecondsBetweenRetriesUnderMemoryPressure;
@property(nonatomic) unsigned long long minSecondsBetweenRetriesUnderMemoryPressure; // @synthesize minSecondsBetweenRetriesUnderMemoryPressure=_minSecondsBetweenRetriesUnderMemoryPressure;
@property(nonatomic) unsigned long long maxSecondsBetweenRetries; // @synthesize maxSecondsBetweenRetries=_maxSecondsBetweenRetries;
@property(nonatomic) unsigned long long minSecondsBetweenRetries; // @synthesize minSecondsBetweenRetries=_minSecondsBetweenRetries;
@property(nonatomic) unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
- (long long)nextDispatchTimeDeltaForExtension:(id)arg1 job:(id)arg2 memoryPressure:(BOOL)arg3;
- (id)initWithDictionary:(id)arg1;

@end

