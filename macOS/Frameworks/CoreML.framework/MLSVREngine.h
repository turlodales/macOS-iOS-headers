//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLModelSpecificationLoader.h"

@class NSString;

@interface MLSVREngine : NSObject <MLModelSpecificationLoader>
{
    BOOL _isInputSizeLowerBoundOnly;
    BOOL _freeModelOnDealloc;
    unsigned long long _inputSize;
    struct svm_model *_model;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
@property BOOL freeModelOnDealloc; // @synthesize freeModelOnDealloc=_freeModelOnDealloc;
@property struct svm_model *model; // @synthesize model=_model;
@property(readonly) unsigned long long inputSize; // @synthesize inputSize=_inputSize;
@property(readonly) BOOL isInputSizeLowerBoundOnly; // @synthesize isInputSizeLowerBoundOnly=_isInputSizeLowerBoundOnly;
- (id)predict:(id)arg1;
- (void)deallocSVMNodeVector:(struct svm_node *)arg1;
- (void)fillSVMNodeVector:(struct svm_node *)arg1 values:(double *)arg2 count:(unsigned long long)arg3;
- (struct svm_node *)allocSVMNodeVector:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSVMModel:(struct svm_model *)arg1 freeOnDealloc:(BOOL)arg2 isInputSizeLowerBoundOnly:(BOOL)arg3 inputSize:(unsigned long long)arg4;
- (id)initWithLibSVMFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

