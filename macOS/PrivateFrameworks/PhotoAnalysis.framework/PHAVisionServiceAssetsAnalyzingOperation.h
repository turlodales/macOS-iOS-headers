//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, PHAAnalysisWorkerJob, PHAVisionServiceWorker;
@protocol OS_dispatch_semaphore, PHAVisionServiceAssetsAnalyzingOperationDelegate;

@interface PHAVisionServiceAssetsAnalyzingOperation : NSOperation
{
    PHAVisionServiceWorker *_visionServiceWorker;
    PHAAnalysisWorkerJob *_job;
    id <PHAVisionServiceAssetsAnalyzingOperationDelegate> _delegate;
    NSObject<OS_dispatch_semaphore> *_executionCompletionSemaphore;
    int _state;
}

+ (id)operationForVisionServiceWorker:(id)arg1 job:(id)arg2;
- (void).cxx_destruct;
- (void)main;
- (void)cancelAndWaitForCompletion;
- (id)job;
- (id)visionServiceWorker;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithVisionServiceWorker:(id)arg1 job:(id)arg2;

@end

