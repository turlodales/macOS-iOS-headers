//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EspressoBrick.h"

@class NSObject<MLCustomLayer>, NSString;

__attribute__((visibility("hidden")))
@interface MLCustomLayerWrapper : NSObject <EspressoBrick>
{
    BOOL _ndMode;
    NSString *_className;
    NSObject<MLCustomLayer> *_customImpl;
}

+ (id)factory;
+ (int)intFromFourBytes:(char *)arg1;
+ (id)espressoTensorsToCoremlTensors:(id)arg1 ndMode:(BOOL)arg2;
+ (id)espressoTensorsToCoremlTensorsGPU:(id)arg1;
+ (id)espressoTensorToCoremlTensor:(id)arg1 ndMode:(BOOL)arg2;
+ (id)getStrides:(id)arg1;
+ (id)coremlShapesToEspressoShapes:(id)arg1 ndMode:(BOOL)arg2;
+ (id)coremlShapeToEspressoShape:(id)arg1 ndMode:(BOOL)arg2;
+ (id)espressoShapesToCoremlShapes:(id)arg1 ndMode:(BOOL)arg2;
+ (id)espressoShapeToCoremlShape:(id)arg1 ndMode:(BOOL)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<MLCustomLayer> *customImpl; // @synthesize customImpl=_customImpl;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) BOOL ndMode; // @synthesize ndMode=_ndMode;
- (BOOL)hasGPUSupport;
- (void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3;
- (void)setMappedWeights:(void *)arg1 sizeInBytes:(unsigned long long)arg2;
- (id)initWithParameters:(id)arg1;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

