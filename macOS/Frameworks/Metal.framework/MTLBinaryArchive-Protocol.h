//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class MTLComputePipelineDescriptor, NSURL;
@protocol MTLDevice, MTLLibrary;

@protocol MTLBinaryArchive <NSObject>
@property(readonly) NSURL *url;
@property(readonly) unsigned long long writingOptions;
@property(readonly) id <MTLDevice> device;
- (void)writeToURL:(NSURL *)arg1 error:(id *)arg2;
- (BOOL)addLibrary:(id <MTLLibrary>)arg1 computePipelineDescriptor:(MTLComputePipelineDescriptor *)arg2 error:(id *)arg3;
- (BOOL)addComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id *)arg2;
@end

