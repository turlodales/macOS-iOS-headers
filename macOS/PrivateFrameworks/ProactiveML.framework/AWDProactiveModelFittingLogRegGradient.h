//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLogRegGradient : PBCodable <NSCopying>
{
    unsigned long long _iteration;
    unsigned long long _timestamp;
    AWDProactiveModelFittingQuantizedDenseVector *_denseQuantizedGradient;
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;
    float _gradientL2norm;
    float _gradientScaleFactor;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatGradient;
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedGradient;
    struct {
        unsigned int iteration:1;
        unsigned int timestamp:1;
        unsigned int gradientL2norm:1;
        unsigned int gradientScaleFactor:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedGradient; // @synthesize denseQuantizedGradient=_denseQuantizedGradient;
@property(nonatomic) float gradientL2norm; // @synthesize gradientL2norm=_gradientL2norm;
@property(nonatomic) float gradientScaleFactor; // @synthesize gradientScaleFactor=_gradientScaleFactor;
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedGradient; // @synthesize sparseQuantizedGradient=_sparseQuantizedGradient;
@property(nonatomic) unsigned long long iteration; // @synthesize iteration=_iteration;
@property(retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics; // @synthesize evaluationMetrics=_evaluationMetrics;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property(retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatGradient; // @synthesize sparseFloatGradient=_sparseFloatGradient;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDenseQuantizedGradient;
@property(nonatomic) BOOL hasGradientL2norm;
@property(nonatomic) BOOL hasGradientScaleFactor;
@property(readonly, nonatomic) BOOL hasSparseQuantizedGradient;
@property(nonatomic) BOOL hasIteration;
@property(readonly, nonatomic) BOOL hasEvaluationMetrics;
@property(readonly, nonatomic) BOOL hasMinibatchStats;
@property(readonly, nonatomic) BOOL hasSparseFloatGradient;
@property(readonly, nonatomic) BOOL hasModelInfo;
@property(nonatomic) BOOL hasTimestamp;
- (unsigned long long)gradientLength;
- (float)gradientValueAtIndex:(unsigned long long)arg1;
- (BOOL)hasGradient;

@end

