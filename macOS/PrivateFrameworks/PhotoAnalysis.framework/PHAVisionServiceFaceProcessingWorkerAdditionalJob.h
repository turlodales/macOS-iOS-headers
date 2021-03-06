//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorkerJob.h>

@class PHAVisionServiceFaceProcessingWorker;

@interface PHAVisionServiceFaceProcessingWorkerAdditionalJob : PHAWorkerJob
{
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    unsigned long long _jobScenario;
    BOOL _isFinished;
}

- (void).cxx_destruct;
- (BOOL)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (BOOL)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (BOOL)finished;
- (void)markAsFinished;
- (BOOL)stopJob:(id *)arg1;
- (BOOL)startJob:(id *)arg1;
- (unsigned long long)jobScenario;
- (id)photoLibrary;
- (id)faceProcessingWorker;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;

@end

