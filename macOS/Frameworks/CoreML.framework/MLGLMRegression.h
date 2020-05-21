//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreML/MLRegressor.h>

#import "MLModelSpecificationLoader.h"

@class NSString;

@interface MLGLMRegression : MLRegressor <MLModelSpecificationLoader>
{
    struct vector<double, std::__1::allocator<double>> intercept;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> weights;
    int postEvalTransForm;
    struct shared_ptr<CoreML::Specification::Model> m_spec;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithLRSpec:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

