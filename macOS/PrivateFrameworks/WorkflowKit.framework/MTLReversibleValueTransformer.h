//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLValueTransformer.h>

@interface MTLReversibleValueTransformer : MTLValueTransformer
{
}

+ (BOOL)allowsReverseTransformation;
- (id)reverseTransformedValue:(id)arg1 success:(char *)arg2 error:(id *)arg3;
- (id)reverseTransformedValue:(id)arg1;
- (id)initWithForwardBlock:(CDUnknownBlockType)arg1 reverseBlock:(CDUnknownBlockType)arg2;

@end

