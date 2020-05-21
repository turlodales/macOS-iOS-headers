//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLinRegObjectiveFeatures : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    float _featuresL2norm;
    float _featuresScaleFactor;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatFeatures;
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedFeatures;
    struct {
        unsigned int timestamp:1;
        unsigned int featuresL2norm:1;
        unsigned int featuresScaleFactor:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) float featuresL2norm; // @synthesize featuresL2norm=_featuresL2norm;
@property(nonatomic) float featuresScaleFactor; // @synthesize featuresScaleFactor=_featuresScaleFactor;
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedFeatures; // @synthesize sparseQuantizedFeatures=_sparseQuantizedFeatures;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property(retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures; // @synthesize sparseFloatFeatures=_sparseFloatFeatures;
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
@property(nonatomic) BOOL hasFeaturesL2norm;
@property(nonatomic) BOOL hasFeaturesScaleFactor;
@property(readonly, nonatomic) BOOL hasSparseQuantizedFeatures;
@property(readonly, nonatomic) BOOL hasMinibatchStats;
@property(readonly, nonatomic) BOOL hasSparseFloatFeatures;
@property(readonly, nonatomic) BOOL hasModelInfo;
@property(nonatomic) BOOL hasTimestamp;
- (unsigned long long)featuresLength;
- (float)featuresValueAtIndex:(unsigned long long)arg1;
- (BOOL)hasObjectiveFeatures;

@end

