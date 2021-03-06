//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNRequestCancelling-Protocol.h>
#import <Vision/VNRequestWarming-Protocol.h>
#import <Vision/VNTrackerProviding-Protocol.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VNRequestPerformer : NSObject <VNRequestWarming, VNRequestCancelling, VNTrackerProviding>
{
    NSLock *_requestLock;
    NSMutableArray *_requestsInFlight;
    NSMutableArray *_requestsPending;
    NSMutableDictionary *_sequencedRequestObservations;
    NSMutableSet *_trackerKeys;
}

- (void).cxx_destruct;
- (void)releaseTracker:(id)arg1;
- (id)trackerWithOptions:(id)arg1 error:(id *)arg2;
- (void)cancelAllRequests;
- (BOOL)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;
- (id)previousSequencedObservationsForRequest:(id)arg1;
- (void)recordSequencedObservationsForRequest:(id)arg1;
- (BOOL)performDependentRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id *)arg4;
- (BOOL)performRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (BOOL)performRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id *)arg4;
- (BOOL)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)_orderedRequestsForRequests:(id)arg1;
- (id)_dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;
- (BOOL)_validateAndPrepareRequests:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

