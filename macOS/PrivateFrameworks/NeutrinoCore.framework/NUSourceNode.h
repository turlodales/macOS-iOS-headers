//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@interface NUSourceNode : NURenderNode
{
    NURenderNode *_originalNode;
    id <NUSourceDerivation> _sourceDerivation;
}

- (void).cxx_destruct;
@property(retain) id <NUSourceDerivation> sourceDerivation; // @synthesize sourceDerivation=_sourceDerivation;
@property __weak NURenderNode *originalNode; // @synthesize originalNode=_originalNode;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateImageProperties:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)_evaluateGeometrySpaceMap:(out id *)arg1;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)preparedNodeWithSourceNode:(id)arg1 sourceSettings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id *)arg5;
- (BOOL)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (id)_addOrientationNode:(id)arg1 sourceSettings:(id)arg2 error:(out id *)arg3;
- (id)_addScaleNode:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4;
- (id)_addResampleNode:(id)arg1 subsampleNode:(id)arg2;
- (id)pipelineOptionsForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)sourceOptionsForSettings:(id)arg1 error:(out id *)arg2;
- (long long)normalizeSubsampleFactor:(long long)arg1;
@property(readonly) long long sourceOrientation;
- (BOOL)load:(out id *)arg1;
- (BOOL)isValid:(out id *)arg1;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (BOOL)isGeometryNode;
- (id)initWithSettings:(id)arg1;

@end

