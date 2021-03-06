//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSMutableDictionary, NSRecursiveLock, NSURLConnection;

@interface ACFHTTPMethodInvocationInternal : NSObject
{
    NSRecursiveLock *_invocationGuard;
    NSRecursiveLock *_schedulingGuard;
    NSMutableDictionary *_runLoops;
    NSURLConnection *_connection;
    BOOL _isFinished;
    NSMutableData *_receivedDataAccumulator;
}

@property(retain) NSMutableData *receivedDataAccumulator; // @synthesize receivedDataAccumulator=_receivedDataAccumulator;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(retain) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain) NSMutableDictionary *runLoops; // @synthesize runLoops=_runLoops;
@property(retain) NSRecursiveLock *schedulingGuard; // @synthesize schedulingGuard=_schedulingGuard;
@property(retain) NSRecursiveLock *invocationGuard; // @synthesize invocationGuard=_invocationGuard;
- (id)init;
- (void)dealloc;

@end

