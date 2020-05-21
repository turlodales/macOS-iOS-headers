//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsFunction.h>

@class MTLFunctionConstantValues;

@interface MTLDebugFunction : MTLToolsFunction
{
    MTLFunctionConstantValues *_constantValues;
}

@property(retain, nonatomic) MTLFunctionConstantValues *constantValues; // @synthesize constantValues=_constantValues;
- (id)bitcodeData;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 binaryLibraries:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 pipelineLibrary:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;

@end

