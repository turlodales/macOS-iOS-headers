//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MLFoundationTensorDescriptor, NSData, NSMutableArray, NSString;

@interface MLFoundationTensor : NSObject <NSCopying>
{
    int _tensorValue;
    unsigned long long _nextTensorID;
    MLFoundationTensorDescriptor *_tensorDescriptor;
    NSData *_tensorData;
    NSString *_label;
    NSMutableArray *_parentLayers;
    NSMutableArray *_childLayers;
    NSMutableArray *_deviceMemory;
    NSData *_tensorDataOHWIForMPSConvolution;
}

+ (id)newRandomDataForWeightTensorDescriptor:(id)arg1;
+ (id)newDataForTensorDescriptor:(id)arg1 fillWithFloatData:(float)arg2;
+ (id)tensorWithSequenceLength:(unsigned long long)arg1 featureChannels:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 tensorValue:(int)arg4 tensorData:(id)arg5;
+ (id)tensorWithSequenceLength:(unsigned long long)arg1 featureChannels:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 randomData:(BOOL)arg4;
+ (id)tensorWithSequenceLength:(unsigned long long)arg1 featureChannels:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;
+ (id)tensorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 tensorValue:(int)arg5 tensorData:(id)arg6;
+ (id)tensorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 randomData:(BOOL)arg5;
+ (id)tensorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 fillWithFloatData:(float)arg5;
+ (id)tensorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 featureChannels:(unsigned long long)arg3 batchSize:(unsigned long long)arg4;
+ (id)tensorWithDescriptor:(id)arg1 randomData:(BOOL)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *tensorDataOHWIForMPSConvolution; // @synthesize tensorDataOHWIForMPSConvolution=_tensorDataOHWIForMPSConvolution;
@property(retain, nonatomic) NSMutableArray *deviceMemory; // @synthesize deviceMemory=_deviceMemory;
@property(retain, nonatomic) NSMutableArray *childLayers; // @synthesize childLayers=_childLayers;
@property(retain, nonatomic) NSMutableArray *parentLayers; // @synthesize parentLayers=_parentLayers;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSData *tensorData; // @synthesize tensorData=_tensorData;
@property(readonly, nonatomic) int tensorValue; // @synthesize tensorValue=_tensorValue;
@property(readonly, nonatomic) MLFoundationTensorDescriptor *tensorDescriptor; // @synthesize tensorDescriptor=_tensorDescriptor;
@property(nonatomic) unsigned long long nextTensorID; // @synthesize nextTensorID=_nextTensorID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)readTensorDataFromAnyOneDevice:(id)arg1;
- (void)dispatchWriteTensorDataToAllDevices:(id)arg1;
- (void)writeTensorDataToAllDevices:(id)arg1;
- (void)deallocateDeviceMemory:(id)arg1;
- (void)allocateDeviceMemory:(id)arg1;
- (id)description;
- (id)initWithTensorDescriptor:(id)arg1 randomData:(BOOL)arg2;
- (id)initWithTensorDescriptor:(id)arg1 tensorValue:(int)arg2 tensorData:(id)arg3 parentLayers:(id)arg4 childLayers:(id)arg5 deviceMemory:(id)arg6;
- (id)initWithTensorDescriptor:(id)arg1 tensorValue:(int)arg2 tensorData:(id)arg3;
- (id)copyAndReplaceData:(id)arg1;

@end

