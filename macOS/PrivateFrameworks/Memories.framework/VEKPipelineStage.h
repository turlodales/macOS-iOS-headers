//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, VEKProgress;

@interface VEKPipelineStage : NSObject
{
    BOOL _isCancelled;
    NSArray *_outputType;
    VEKProgress *_progress;
}

- (void).cxx_destruct;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly) VEKProgress *progress; // @synthesize progress=_progress;
@property(readonly) NSArray *outputType; // @synthesize outputType=_outputType;
- (id)runStageWithInput:(id)arg1;
- (id)outputTypes;
@property(readonly) NSArray *inputTypes;

@end

