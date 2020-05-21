//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface SPQueryResultsQueue : NSObject
{
    BOOL _canceled;
    BOOL _tracked;
    BOOL _live;
    BOOL _shared;
    NSString *_identifier;
    struct __SIResultQueue *_siResultsQueue;
    NSMutableDictionary *_jobs;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _pausedCount;
}

+ (id)sharedInstanceDispatchQueue:(id)arg1;
+ (id)findResultsQueueWithIdentifier:(id)arg1;
+ (void)stopTrackingResultsQueueWithIdentifier:(id)arg1;
+ (void)startTrackingResultsQueue:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL shared; // @synthesize shared=_shared;
@property(nonatomic) BOOL live; // @synthesize live=_live;
@property(nonatomic) BOOL tracked; // @synthesize tracked=_tracked;
@property(nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
@property(nonatomic) long long pausedCount; // @synthesize pausedCount=_pausedCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableDictionary *jobs; // @synthesize jobs=_jobs;
@property(nonatomic) struct __SIResultQueue *siResultsQueue; // @synthesize siResultsQueue=_siResultsQueue;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_processResults;
- (void)resumeResults;
- (void)pauseResults;
@property(readonly) BOOL hasPausedResults;
- (void)_scheduleWakeupForced:(BOOL)arg1;
- (void)cancel;
- (void)cancelJob:(id)arg1;
- (void)addJob:(id)arg1;
- (void)_stopTracking;
- (void)_startTracking;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 dispatchQueue:(id)arg2;

@end

