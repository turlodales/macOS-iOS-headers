//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData;
@protocol VCPDistanceDescriptorProtocol;

@protocol VCPDistanceDescriptorProtocol
+ (int)preferredPixelFormat;
+ (id)descriptorWithImage:(struct __CVBuffer *)arg1;
+ (id)descriptorWithData:(NSData *)arg1;
+ (BOOL)usePHAssetData;
- (int)computeDistance:(float *)arg1 toDescriptor:(id <VCPDistanceDescriptorProtocol>)arg2;
- (NSData *)serialize;
@end

