/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MLCompute.framework/MLCompute
 */

@interface _MLCCPUReduction : _MLCCPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 reduceType:(int)arg2 dimension:(unsigned long long)arg3 sourceShapeCount:(unsigned long long)arg4;

- (id)initWithDevice:(id)arg1 reduceType:(int)arg2 dimension:(unsigned long long)arg3;

@end
