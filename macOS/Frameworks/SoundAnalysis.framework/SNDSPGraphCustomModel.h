//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLModelDescription, MLMultiArray, MLMultiArrayConstraint;

__attribute__((visibility("hidden")))
@interface SNDSPGraphCustomModel : NSObject
{
    MLModelDescription *_modelDescription;
    MLMultiArrayConstraint *_inputConstraint;
    MLMultiArrayConstraint *_outputConstraint;
    unique_ptr_7f3c0f79 _graph;
    struct vector<float, std::__1::allocator<float>> _scratchFloatSpace;
    MLMultiArray *_modelOutput;
    CDUnknownBlockType _preProcessCallback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType preProcessCallback; // @synthesize preProcessCallback=_preProcessCallback;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 expectedInputShape:(id)arg2 expectedOutputShape:(id)arg3 graph:(unique_ptr_7f3c0f79)arg4 error:(id *)arg5;

@end

