//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface ETOptimizerDefinition : NSObject
{
    long long _type;
    NSDictionary *_optimizationParameters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *optimizationParameters; // @synthesize optimizationParameters=_optimizationParameters;
@property(readonly) long long type; // @synthesize type=_type;
- (id)initWithOptimizationAlgorithm:(long long)arg1 parameters:(id)arg2 error:(id *)arg3;

@end

