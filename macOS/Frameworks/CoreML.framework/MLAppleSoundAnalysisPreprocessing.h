//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreML/MLModel.h>

#import "MLModelSpecificationLoader.h"

@class NSString;

@interface MLAppleSoundAnalysisPreprocessing : MLModel <MLModelSpecificationLoader>
{
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    id <MLCustomModel> _frontendProcessingModel;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithDescription:(id)arg1 configuration:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

