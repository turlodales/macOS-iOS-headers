//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreML/MLModel.h>

#import "MLSpecificationCompiler.h"

@class NSArray;

@interface MLPipeline : MLModel <MLSpecificationCompiler>
{
    NSArray *_models;
    NSArray *_modelNames;
}

+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)compileWithModelsInPipeline:(const struct Pipeline *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 updatable:(BOOL)arg4 error:(id *)arg5;
+ (void)archiveCustomModelNames:(const RepeatedPtrField_fe7cf120 *)arg1 to:(struct _MLModelOutputArchiver *)arg2;
+ (void)archivePipelineUpdateParameterForModels:(const RepeatedPtrField_f3160e5f *)arg1 to:(struct _MLModelOutputArchiver *)arg2 updatable:(BOOL)arg3;
- (void).cxx_destruct;
@property(retain) NSArray *modelNames; // @synthesize modelNames=_modelNames;
@property(retain) NSArray *models; // @synthesize models=_models;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 error:(id *)arg2;
- (void)replaceModelAtIndex:(unsigned long long)arg1 with:(id)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initModelFromMetadataAndArchive:(struct _MLModelInputArchiver *)arg1 versionInfo:(id)arg2 interface:(id)arg3 metadata:(id)arg4 configuration:(id)arg5 error:(id *)arg6;
- (void)updateParameterDescriptionsByKeyBasedOnSubModel;
- (id)extractModelNamesFromArchive:(struct _MLModelInputArchiver *)arg1 numModels:(unsigned long long)arg2;

@end

