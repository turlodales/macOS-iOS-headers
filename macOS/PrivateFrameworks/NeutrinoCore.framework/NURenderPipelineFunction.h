//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NURenderPipelineFunction : NSObject
{
}

+ (id)functionWithEvaluationBlock:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)evaluate:(id)arg1 error:(out id *)arg2;
- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id *)arg2;

@end

