//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class MDLSubmesh, NSData;

@protocol SCNGeometryElementJSExport <JSExport>
+ (id)geometryElementWithMDLSubmesh:(MDLSubmesh *)arg1;
+ (id)geometryElementWithData:(NSData *)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+ (id)geometryElementWithData:(NSData *)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(BOOL)arg5 bytesPerIndex:(long long)arg6;
@property(nonatomic) float maximumPointScreenSpaceRadius;
@property(nonatomic) float minimumPointScreenSpaceRadius;
@property(nonatomic) float pointSize;
@property(readonly, nonatomic) long long bytesPerIndex;
@property(readonly, nonatomic, getter=hasInterleavedIndicesChannels) BOOL interleavedIndicesChannels;
@property(readonly, nonatomic) long long indicesChannelCount;
@property(nonatomic) struct _NSRange primitiveRange;
@property(readonly, nonatomic) long long primitiveCount;
@property(readonly, nonatomic) long long primitiveType;
@property(readonly, nonatomic) NSData *data;
@end

