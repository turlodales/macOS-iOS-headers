//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCNMTLComputePipeline : NSObject
{
    id <MTLComputePipelineState> _state;
    id <MTLFunction> _computeFunction;
}

@property(retain, nonatomic) id <MTLFunction> computeFunction; // @synthesize computeFunction=_computeFunction;
@property(retain, nonatomic) id <MTLComputePipelineState> state; // @synthesize state=_state;
- (id)description;
- (void)dealloc;
- (id)init;

@end

