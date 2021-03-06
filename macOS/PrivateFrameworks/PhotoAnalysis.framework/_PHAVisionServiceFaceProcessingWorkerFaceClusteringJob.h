//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoAnalysis/PHAWorkerJob.h>

@class PHAVisionServiceFaceProcessingWorker, _PHAVisionServiceFaceProcessingWorkerJobKeepAlive;

@interface _PHAVisionServiceFaceProcessingWorkerFaceClusteringJob : PHAWorkerJob
{
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    _PHAVisionServiceFaceProcessingWorkerJobKeepAlive *_keepAlive;
    BOOL _completed;
}

- (void).cxx_destruct;
- (BOOL)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (BOOL)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (void)_handleClusteringCompletion;
- (void)_stopJobKeepAlive;
- (void)_startJobKeepAlive;
- (float)completionScore;
- (BOOL)finished;
- (id)faceProcessingWorker;
- (id)initWithFaceProcessingWorker:(id)arg1 scenario:(unsigned long long)arg2;

@end

