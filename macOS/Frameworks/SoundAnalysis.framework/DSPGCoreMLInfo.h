//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DSPGMLInputProvider, MLModelDescription, NSArray;

__attribute__((visibility("hidden")))
@interface DSPGCoreMLInfo : NSObject
{
    id <DSPGMLModel> _model;
    MLModelDescription *_modelDescription;
    DSPGMLInputProvider *_inputProvider;
    id <MLFeatureProvider> _outputProvider;
    NSArray *_outputs;
    NSArray *_outputLabels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *outputLabels; // @synthesize outputLabels=_outputLabels;
@property(retain, nonatomic) NSArray *outputs; // @synthesize outputs=_outputs;
@property(retain, nonatomic) id <MLFeatureProvider> outputProvider; // @synthesize outputProvider=_outputProvider;
@property(retain, nonatomic) DSPGMLInputProvider *inputProvider; // @synthesize inputProvider=_inputProvider;
@property(retain, nonatomic) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
@property(retain, nonatomic) id <DSPGMLModel> model; // @synthesize model=_model;

@end

