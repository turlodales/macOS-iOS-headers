//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLFoundation/MLFoundationLayer.h>

#import <MLFoundation/MLFoundationLayerCompiling-Protocol.h>

@class MLFoundationLossDescriptor, MLFoundationTensor, NSString;

@interface MLFoundationLossLayer : MLFoundationLayer <MLFoundationLayerCompiling>
{
    MLFoundationLossDescriptor *_lossDescriptor;
    MLFoundationTensor *_lossLabels;
}

+ (id)layerWithLossDescriptor:(id)arg1;
+ (id)new;
- (void).cxx_destruct;
@property(copy, nonatomic) MLFoundationTensor *lossLabels; // @synthesize lossLabels=_lossLabels;
@property(readonly, nonatomic) MLFoundationLossDescriptor *lossDescriptor; // @synthesize lossDescriptor=_lossDescriptor;
@property(readonly, copy) NSString *description;
- (unsigned long long)computeResultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)initWithLossDescriptor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

