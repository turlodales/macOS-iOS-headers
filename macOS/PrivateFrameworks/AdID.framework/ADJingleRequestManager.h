//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADSingleton.h"

@class NSMutableDictionary;

@interface ADJingleRequestManager : ADSingleton
{
    BOOL _jingleRequestInProgress;
    NSMutableDictionary *_pendingJingleRequests;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pendingJingleRequests; // @synthesize pendingJingleRequests=_pendingJingleRequests;
@property BOOL jingleRequestInProgress; // @synthesize jingleRequestInProgress=_jingleRequestInProgress;
- (void)authenticateUser:(CDUnknownBlockType)arg1;
- (void)jingleRequestCompleted:(id)arg1;
- (BOOL)canMakeJingleRequest;
- (id)makeOptOutRequest:(id)arg1 status:(BOOL)arg2 timestamp:(double)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)makeSegmentRequest:(id)arg1 forceSegments:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)startJingleRequest:(id)arg1;
- (id)init;

@end

